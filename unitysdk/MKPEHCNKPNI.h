#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HideWaypoint; }
namespace RPG::GameCore { class TaskContext; }

#define MKPEHCNKPNI_BHJMPHKEGHL_OFFSET UNITYSDK_OFFSET(0xB99E820)
#define MKPEHCNKPNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB99E700)
#define MKPEHCNKPNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB99E730)

inline static constexpr unsigned int MKPEHCNKPNI_TypeDefinitionIndex = 58155;

	class MKPEHCNKPNI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideWaypoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideWaypoint*))((::PBYTE)hIl2Cpp + MKPEHCNKPNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPEHCNKPNI_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void BHJMPHKEGHL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MKPEHCNKPNI_BHJMPHKEGHL_OFFSET))(a1);
		}

	};
