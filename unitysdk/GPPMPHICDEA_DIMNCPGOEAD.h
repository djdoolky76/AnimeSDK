#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPPMPHICDEA_HCEIGOMAOGG;
namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define GPPMPHICDEA_DIMNCPGOEAD_FHHENODGAOM_OFFSET UNITYSDK_OFFSET(0x149215D0)
#define GPPMPHICDEA_DIMNCPGOEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x149215C0)

inline static constexpr unsigned int GPPMPHICDEA_DIMNCPGOEAD_TypeDefinitionIndex = 42652;

class GPPMPHICDEA_DIMNCPGOEAD : public ::System::Object
{
public:
	::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF; // 0x10
	::GPPMPHICDEA_HCEIGOMAOGG* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DIMNCPGOEAD__CTOR_OFFSET))(this);
	}

	::System::Void FHHENODGAOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DIMNCPGOEAD_FHHENODGAOM_OFFSET))(this);
	}
};
