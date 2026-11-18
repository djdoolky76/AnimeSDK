#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }

#define BLEACIEPKFM___C_LHEELFDNFOF_OFFSET UNITYSDK_OFFSET(0x1E3AAFF0)
#define BLEACIEPKFM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AAFA0)
#define BLEACIEPKFM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AAFE0)

inline static constexpr unsigned int BLEACIEPKFM___c_TypeDefinitionIndex = 94625;

class BLEACIEPKFM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BLEACIEPKFM___c_TypeDefinitionIndex)->GetStaticField(0x527D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLEACIEPKFM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEACIEPKFM___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LHEELFDNFOF(::MoleMole::Arcade::CompanionProject::CpSkillEffectData* DPGFPHIMDEL, ::MoleMole::Arcade::CompanionProject::CpSkillEffectData* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Arcade::CompanionProject::CpSkillEffectData*, ::MoleMole::Arcade::CompanionProject::CpSkillEffectData*))((::PBYTE)hIl2Cpp + BLEACIEPKFM___C_LHEELFDNFOF_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
