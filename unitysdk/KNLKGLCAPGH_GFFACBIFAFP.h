#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNLKGLCAPGH_FMCAPGMCBBA;
namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define KNLKGLCAPGH_GFFACBIFAFP_MHGDOJCEHPE_OFFSET UNITYSDK_OFFSET(0x126A9660)
#define KNLKGLCAPGH_GFFACBIFAFP__CTOR_OFFSET UNITYSDK_OFFSET(0x126A9650)

inline static constexpr unsigned int KNLKGLCAPGH_GFFACBIFAFP_TypeDefinitionIndex = 41125;

class KNLKGLCAPGH_GFFACBIFAFP : public ::System::Object
{
public:
	::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF; // 0x10
	::KNLKGLCAPGH_FMCAPGMCBBA* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_GFFACBIFAFP__CTOR_OFFSET))(this);
	}

	::System::Void MHGDOJCEHPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_GFFACBIFAFP_MHGDOJCEHPE_OFFSET))(this);
	}
};
