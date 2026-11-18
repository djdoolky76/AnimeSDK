#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKPDHCMBLIE;
namespace MoleMole { class UIBangkovTalentPointWidgetController; }

#define FKPDHCMBLIE_MLIDFLLBNIP_DAALMNKMFBD_OFFSET UNITYSDK_OFFSET(0x14ADB8C0)
#define FKPDHCMBLIE_MLIDFLLBNIP__CTOR_OFFSET UNITYSDK_OFFSET(0x14ADB8B0)

inline static constexpr unsigned int FKPDHCMBLIE_MLIDFLLBNIP_TypeDefinitionIndex = 72823;

class FKPDHCMBLIE_MLIDFLLBNIP : public ::System::Object
{
public:
	::MoleMole::UIBangkovTalentPointWidgetController* NCIMBHDKIJM; // 0x10
	::FKPDHCMBLIE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_MLIDFLLBNIP__CTOR_OFFSET))(this);
	}

	::System::Void DAALMNKMFBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_MLIDFLLBNIP_DAALMNKMFBD_OFFSET))(this);
	}
};
