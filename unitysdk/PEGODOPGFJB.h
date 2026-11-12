#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BoomRobotGameplayTriggerStart; }
namespace RPG::GameCore { class TaskContext; }

#define PEGODOPGFJB_CTOR_OFFSET UNITYSDK_OFFSET(0xC946F90)
#define PEGODOPGFJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC946FC0)

inline static constexpr unsigned int PEGODOPGFJB_TypeDefinitionIndex = 53652;

	class PEGODOPGFJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayTriggerStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayTriggerStart*))((::PBYTE)hIl2Cpp + PEGODOPGFJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGODOPGFJB_ONTASKBEGIN_OFFSET))(this);
		}

	};
