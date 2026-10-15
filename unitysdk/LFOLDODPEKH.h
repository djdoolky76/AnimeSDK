#pragma once
#include "unitysdk/unitysdk.h"
class HJCOLAEIJFM;
namespace RPG::GameCore { class AdvOverrideNpcMonsterButtonConfig; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class TaskContext; }

#define LFOLDODPEKH_CCIMOPLACCO_OFFSET UNITYSDK_OFFSET(0xB67F820)
#define LFOLDODPEKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB67F7F0)
#define LFOLDODPEKH_FOBPJDKPEBP_OFFSET UNITYSDK_OFFSET(0xB67F9D0)
#define LFOLDODPEKH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB67FCE0)

inline static constexpr unsigned int LFOLDODPEKH_TypeDefinitionIndex = 52461;

	class LFOLDODPEKH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOverrideNpcMonsterButtonConfig*))((::PBYTE)hIl2Cpp + LFOLDODPEKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CCIMOPLACCO(::HJCOLAEIJFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJCOLAEIJFM*))((::PBYTE)hIl2Cpp + LFOLDODPEKH_CCIMOPLACCO_OFFSET))(this, a1);
		}

		::System::Void FOBPJDKPEBP(::RPG::GameCore::ColliderTriggerComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderTriggerComponent*))((::PBYTE)hIl2Cpp + LFOLDODPEKH_FOBPJDKPEBP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOLDODPEKH_ONTASKBEGIN_OFFSET))(this);
		}

	};
