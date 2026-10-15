#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveStageAbilityByName; }
namespace RPG::GameCore { class TaskContext; }

#define BNMDAJMHMCP_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDAD30)
#define BNMDAJMHMCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDDAD60)

inline static constexpr unsigned int BNMDAJMHMCP_TypeDefinitionIndex = 55313;

	class BNMDAJMHMCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveStageAbilityByName*))((::PBYTE)hIl2Cpp + BNMDAJMHMCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMDAJMHMCP_ONTASKBEGIN_OFFSET))(this);
		}

	};
