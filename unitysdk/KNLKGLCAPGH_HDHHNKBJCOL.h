#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNLKGLCAPGH_GHFEGJIIBIK;
namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define KNLKGLCAPGH_HDHHNKBJCOL_KBEPCCBPJID_OFFSET UNITYSDK_OFFSET(0x126A99E0)
#define KNLKGLCAPGH_HDHHNKBJCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x126A99D0)

inline static constexpr unsigned int KNLKGLCAPGH_HDHHNKBJCOL_TypeDefinitionIndex = 41103;

class KNLKGLCAPGH_HDHHNKBJCOL : public ::System::Object
{
public:
	::KNLKGLCAPGH_GHFEGJIIBIK* FGBNBFHOKAA; // 0x10
	::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HDHHNKBJCOL__CTOR_OFFSET))(this);
	}

	::System::Void KBEPCCBPJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HDHHNKBJCOL_KBEPCCBPJID_OFFSET))(this);
	}
};
