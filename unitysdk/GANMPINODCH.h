#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BoomRobotGameplayBoomEnd; }
namespace RPG::GameCore { class TaskContext; }

#define GANMPINODCH_CTOR_OFFSET UNITYSDK_OFFSET(0x15937DE0)
#define GANMPINODCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15937E10)

inline static constexpr unsigned int GANMPINODCH_TypeDefinitionIndex = 52540;

	class GANMPINODCH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayBoomEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayBoomEnd*))((::PBYTE)hIl2Cpp + GANMPINODCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANMPINODCH_ONTASKBEGIN_OFFSET))(this);
		}

	};
