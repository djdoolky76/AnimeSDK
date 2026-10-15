#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchMascotTriggerUIShootEffect; }
namespace RPG::GameCore { class TaskContext; }

#define GALAMNFNOMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15941090)
#define GALAMNFNOMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159410C0)

inline static constexpr unsigned int GALAMNFNOMN_TypeDefinitionIndex = 58752;

	class GALAMNFNOMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*))((::PBYTE)hIl2Cpp + GALAMNFNOMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GALAMNFNOMN_ONTASKBEGIN_OFFSET))(this);
		}

	};
