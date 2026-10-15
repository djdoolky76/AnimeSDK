#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureTriggerMoveWithPath; }
namespace RPG::GameCore { class TaskContext; }

#define AEJADBEJCJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB152300)
#define AEJADBEJCJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB152330)

inline static constexpr unsigned int AEJADBEJCJF_TypeDefinitionIndex = 57929;

	class AEJADBEJCJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerMoveWithPath* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerMoveWithPath*))((::PBYTE)hIl2Cpp + AEJADBEJCJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJADBEJCJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
