#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BGNJMFPNBKO_EDKDJGDKGJD;
class BHECBBCIMBF;
namespace MoleMole { class UIInLevelLinkZoneInfoPanelChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define BGNJMFPNBKO_EHCLNNCMBPO_OFFSET UNITYSDK_OFFSET(0xF799810)
#define BGNJMFPNBKO_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0xF799740)
#define BGNJMFPNBKO_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0xF799730)
#define BGNJMFPNBKO__CTOR_OFFSET UNITYSDK_OFFSET(0xF799800)

inline static constexpr unsigned int BGNJMFPNBKO_TypeDefinitionIndex = 48620;

class BGNJMFPNBKO : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelLinkZoneInfoPanelChildWindowController* JEAGHGIEGEH; // 0x28
	::BGNJMFPNBKO_EDKDJGDKGJD* OBGBFHGKILC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJMFPNBKO__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJMFPNBKO_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + BGNJMFPNBKO_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void EHCLNNCMBPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJMFPNBKO_EHCLNNCMBPO_OFFSET))(this);
	}
};
