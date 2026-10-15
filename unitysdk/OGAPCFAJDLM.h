#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
namespace RPG::GameCore { class ModifyProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define OGAPCFAJDLM_CNNMKAJJAHH_1_OFFSET UNITYSDK_OFFSET(0xBE472C0)
#define OGAPCFAJDLM_CNNMKAJJAHH_OFFSET UNITYSDK_OFFSET(0xBE47080)
#define OGAPCFAJDLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE46DC0)
#define OGAPCFAJDLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE46DF0)

inline static constexpr unsigned int OGAPCFAJDLM_TypeDefinitionIndex = 55206;

	class OGAPCFAJDLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyProperty*))((::PBYTE)hIl2Cpp + OGAPCFAJDLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAPCFAJDLM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void CNNMKAJJAHH(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + OGAPCFAJDLM_CNNMKAJJAHH_OFFSET))(this, a1);
		}

		::System::Void CNNMKAJJAHH_1(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + OGAPCFAJDLM_CNNMKAJJAHH_1_OFFSET))(this, a1, a2);
		}

	};
