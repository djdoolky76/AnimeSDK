#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetPropInteractTriggerState; }
namespace RPG::GameCore { class TaskContext; }

#define JLOFPMIADOE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7E300)
#define JLOFPMIADOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA7E330)

inline static constexpr unsigned int JLOFPMIADOE_TypeDefinitionIndex = 59835;

	class JLOFPMIADOE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropInteractTriggerState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropInteractTriggerState*))((::PBYTE)hIl2Cpp + JLOFPMIADOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOFPMIADOE_ONTASKBEGIN_OFFSET))(this);
		}

	};
