/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class GainTutorial3AudioProcessorEditor  : public AudioProcessorEditor

{
public:
    GainTutorial3AudioProcessorEditor (GainTutorial3AudioProcessor&);
    ~GainTutorial3AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    ScopedPointer <AudioProcessorValueTreeState::SliderAttachment> sliderValue;
    
private:
    GainTutorial3AudioProcessor& processor;
    Slider gainSlider;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GainTutorial3AudioProcessorEditor)
};
