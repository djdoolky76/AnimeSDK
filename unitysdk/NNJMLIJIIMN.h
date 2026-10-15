#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearNpcDistanceTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NNJMLIJIIMN_CTOR_OFFSET UNITYSDK_OFFSET(0xBCB5B80)
#define NNJMLIJIIMN_NDDDIGNNHMH_OFFSET UNITYSDK_OFFSET(0xBCB5D10)
#define NNJMLIJIIMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCB5BB0)

	class NNJMLIJIIMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearNpcDistanceTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearNpcDistanceTrigger*))((::PBYTE)hIl2Cpp + NNJMLIJIIMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJMLIJIIMN_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NDDDIGNNHMH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NNJMLIJIIMN_NDDDIGNNHMH_OFFSET))(this, a1, a2);
		}

	};
