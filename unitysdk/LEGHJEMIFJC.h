#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Side_DisablePlayerLock; }
namespace RPG::GameCore { class TaskContext; }

#define LEGHJEMIFJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB651DA0)
#define LEGHJEMIFJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB651E60)
#define LEGHJEMIFJC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB651EF0)

inline static constexpr unsigned int LEGHJEMIFJC_TypeDefinitionIndex = 52231;

	class LEGHJEMIFJC
	{
	public:
		::RPG::GameCore::AdventureAbilityComponent* IFLLHLEDHLM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_DisablePlayerLock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_DisablePlayerLock*))((::PBYTE)hIl2Cpp + LEGHJEMIFJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGHJEMIFJC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGHJEMIFJC_ONTASKRESET_OFFSET))(this);
		}

	};
