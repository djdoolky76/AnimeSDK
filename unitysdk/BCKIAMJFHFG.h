#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ResetMissionWayPoint; }
namespace RPG::GameCore { class TaskContext; }

#define BCKIAMJFHFG_CTOR_OFFSET UNITYSDK_OFFSET(0x162D4970)
#define BCKIAMJFHFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162D4980)
#define BCKIAMJFHFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162D49C0)
#define BCKIAMJFHFG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162D4BC0)
#define BCKIAMJFHFG_TICK_OFFSET UNITYSDK_OFFSET(0x162D4C10)

inline static constexpr unsigned int BCKIAMJFHFG_TypeDefinitionIndex = 53206;

	class BCKIAMJFHFG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ResetMissionWayPoint* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetMissionWayPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetMissionWayPoint*))((::PBYTE)hIl2Cpp + BCKIAMJFHFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKIAMJFHFG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKIAMJFHFG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKIAMJFHFG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCKIAMJFHFG_TICK_OFFSET))(this, a1);
		}

	};
