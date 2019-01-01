/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
GainTutorial3AudioProcessorEditor::GainTutorial3AudioProcessorEditor (GainTutorial3AudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    sliderValue = new AudioProcessorValueTreeState::SliderAttachment (processor.treeState, GAIN_ID, gainSlider);
    
    setSize (200, 400);
    gainSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
    gainSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 100, 25);
    gainSlider.setRange(-48.0f, 0.0f);
    gainSlider.setValue(-15.0f);
    addAndMakeVisible(&gainSlider);
}

GainTutorial3AudioProcessorEditor::~GainTutorial3AudioProcessorEditor()
{
}

//==============================================================================
void GainTutorial3AudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void GainTutorial3AudioProcessorEditor::resized()
{
    gainSlider.setBounds(getLocalBounds());
}
