  GNU nano 2.2.6              File: neural.cpp                                  


void Net::backProp(const vector<double> &targetVals)
{
        // List things to do for backProp
        // 1. Calculate Overall Net Error       (RMS Error "Root Mean Square Er$

        Layer &outputLayer = m_layers.back();
        m_error = 0.0;  //46:10

        for (unsigned n = 0; n < outputLayer.size() - 1; ++n) {
                double delta = targetVals[n] - outputLayer[n].getOutputVal();  $
                m_error += delta * delta;       //47:04/1:05:23
        }
        m_error /= outputLayer.size() - 1;      // get average error squared
        m_error = sqrt(m_error);        //RMS

        // Implement a recent average measurement 47:43/1:05:23

        m_recentAverageError =

^G Get Help  ^O WriteOut  ^R Read File ^Y Prev Page ^K Cut Text  ^C Cur Pos
^X Exit      ^J Justify   ^W Where Is  ^V Next Page ^U UnCut Text^T To Spell
