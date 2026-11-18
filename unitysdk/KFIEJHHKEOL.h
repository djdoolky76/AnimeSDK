#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGLPBMBBODA.h"
#include "unitysdk/FHAMBCIABAF.h"
#include "unitysdk/System/Object.h"

class EAIOHODECAO;
namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }

#define KFIEJHHKEOL_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1F642230)
#define KFIEJHHKEOL_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1F6421D0)
#define KFIEJHHKEOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6421C0)

inline static constexpr unsigned int KFIEJHHKEOL_TypeDefinitionIndex = 94449;

class KFIEJHHKEOL : public ::System::Object
{
public:
	::BGLPBMBBODA GHPGNCCFDBO; // 0x10
	::MoleMole::Arcade::CompanionProject::CpSkillEffectData* LJBPECKCCEA; // 0x40
	::EAIOHODECAO* GEEHGDABNJF; // 0x48
	::FHAMBCIABAF HACJFKBLODH; // 0x50
	::System::Boolean KHEENNECIPE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIEJHHKEOL__CTOR_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ(::System::Boolean MBEMOHDDEMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFIEJHHKEOL_PGHAJOMNDDJ_OFFSET))(this, MBEMOHDDEMA);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIEJHHKEOL_EDEFLFIKNFK_OFFSET))(this);
	}
};
