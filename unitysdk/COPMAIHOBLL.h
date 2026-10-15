#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DronesSwitchDynamicCollider; }
namespace RPG::GameCore { class TaskContext; }

#define COPMAIHOBLL_CTOR_OFFSET UNITYSDK_OFFSET(0xDCCDFC0)
#define COPMAIHOBLL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCCDFF0)

inline static constexpr unsigned int COPMAIHOBLL_TypeDefinitionIndex = 58092;

	class COPMAIHOBLL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DronesSwitchDynamicCollider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DronesSwitchDynamicCollider*))((::PBYTE)hIl2Cpp + COPMAIHOBLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COPMAIHOBLL_ONTASKBEGIN_OFFSET))(this);
		}

	};
