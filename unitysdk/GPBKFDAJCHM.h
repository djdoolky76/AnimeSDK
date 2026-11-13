#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectOnAnchor; }

#define GPBKFDAJCHM_CTOR_OFFSET UNITYSDK_OFFSET(0x187C2CB0)
#define GPBKFDAJCHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x187C2CE0)

inline static constexpr unsigned int GPBKFDAJCHM_TypeDefinitionIndex = 60050;

	class GPBKFDAJCHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectOnAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectOnAnchor*))((::PBYTE)hIl2Cpp + GPBKFDAJCHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBKFDAJCHM_ONTASKBEGIN_OFFSET))(this);
		}

	};
