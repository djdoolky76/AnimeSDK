#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class ST_Side_EnableInteractionTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define KJCJAGJBJMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB439C20)
#define KJCJAGJBJMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB439CE0)
#define KJCJAGJBJMN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB439D90)

inline static constexpr unsigned int KJCJAGJBJMN_TypeDefinitionIndex = 52233;

	class KJCJAGJBJMN
	{
	public:
		::RPG::GameCore::ColliderTriggerComponent* FKDFCAGAEBD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_EnableInteractionTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_EnableInteractionTrigger*))((::PBYTE)hIl2Cpp + KJCJAGJBJMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCJAGJBJMN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCJAGJBJMN_ONTASKRESET_OFFSET))(this);
		}

	};
