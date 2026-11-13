#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureTriggerTargetAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CBMPNJHKPNN_CTOR_OFFSET UNITYSDK_OFFSET(0x18FE5B50)
#define CBMPNJHKPNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FE5B80)

inline static constexpr unsigned int CBMPNJHKPNN_TypeDefinitionIndex = 59167;

	class CBMPNJHKPNN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerTargetAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerTargetAbility*))((::PBYTE)hIl2Cpp + CBMPNJHKPNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMPNJHKPNN_ONTASKBEGIN_OFFSET))(this);
		}

	};
