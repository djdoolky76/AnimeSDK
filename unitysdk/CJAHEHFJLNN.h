#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NpcToPlayerDistanceTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CJAHEHFJLNN_CTOR_OFFSET UNITYSDK_OFFSET(0xCF917E0)
#define CJAHEHFJLNN_NDDDIGNNHMH_OFFSET UNITYSDK_OFFSET(0xCF91CD0)
#define CJAHEHFJLNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF91810)

	class CJAHEHFJLNN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NpcToPlayerDistanceTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NpcToPlayerDistanceTrigger*))((::PBYTE)hIl2Cpp + CJAHEHFJLNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAHEHFJLNN_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NDDDIGNNHMH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAHEHFJLNN_NDDDIGNNHMH_OFFSET))(this, a1, a2);
		}

	};
