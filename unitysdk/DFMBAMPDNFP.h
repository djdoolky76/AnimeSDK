#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GlobalModifyInsertAbilityPriority; }
namespace RPG::GameCore { class TaskContext; }

#define DFMBAMPDNFP_CTOR_OFFSET UNITYSDK_OFFSET(0xE833130)
#define DFMBAMPDNFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE833160)

inline static constexpr unsigned int DFMBAMPDNFP_TypeDefinitionIndex = 55081;

	class DFMBAMPDNFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalModifyInsertAbilityPriority* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*))((::PBYTE)hIl2Cpp + DFMBAMPDNFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBAMPDNFP_ONTASKBEGIN_OFFSET))(this);
		}

	};
