#include ".\dasherinterface.h"
#include "WinOptions.h"

CDasherInterface::CDasherInterface(void) {
	m_pSettingsStore = new CWinOptions( "Inference Group", "Dasher3", m_pEventHandler );
	//SettingsDefaults( m_pSettingsStore );
    CDasherSettingsInterface::SetInterface(this);

ChangeAlphabet( GetStringParameter(SP_ALPHABET_ID) );

}

CDasherInterface::~CDasherInterface(void)
{
}