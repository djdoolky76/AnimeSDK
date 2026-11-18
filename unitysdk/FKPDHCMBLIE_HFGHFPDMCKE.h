#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKPDHCMBLIE_MLIDFLLBNIP;
namespace MoleMole { class UIBangkovTalentPointWidgetController; }

#define FKPDHCMBLIE_HFGHFPDMCKE_KNBACBIHCEI_OFFSET UNITYSDK_OFFSET(0x1410B3E0)
#define FKPDHCMBLIE_HFGHFPDMCKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1410B3D0)

inline static constexpr unsigned int FKPDHCMBLIE_HFGHFPDMCKE_TypeDefinitionIndex = 72818;

class FKPDHCMBLIE_HFGHFPDMCKE : public ::System::Object
{
public:
	::MoleMole::UIBangkovTalentPointWidgetController* JOLDOMEIKEF; // 0x10
	::FKPDHCMBLIE_MLIDFLLBNIP* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_HFGHFPDMCKE__CTOR_OFFSET))(this);
	}

	::System::Void KNBACBIHCEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_HFGHFPDMCKE_KNBACBIHCEI_OFFSET))(this);
	}
};
