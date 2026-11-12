#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvTriggerAIEvent; }
namespace RPG::GameCore { class TaskContext; }

#define HDKMGNMHEFB_CTOR_OFFSET UNITYSDK_OFFSET(0x16B7F210)
#define HDKMGNMHEFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B7F240)

inline static constexpr unsigned int HDKMGNMHEFB_TypeDefinitionIndex = 53622;

	class HDKMGNMHEFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerAIEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerAIEvent*))((::PBYTE)hIl2Cpp + HDKMGNMHEFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKMGNMHEFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
