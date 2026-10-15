#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
namespace RPG::GameCore { class GridFightShowMonsterCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define DMMKMIILEDH_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC5A60)
#define DMMKMIILEDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEC5E20)
#define DMMKMIILEDH_MNNHENHPOLH_OFFSET UNITYSDK_OFFSET(0xFEC5C70)
#define DMMKMIILEDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEC5A70)
#define DMMKMIILEDH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFEC5D70)
#define DMMKMIILEDH_TICK_OFFSET UNITYSDK_OFFSET(0xFEC5DC0)
#define DMMKMIILEDH__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xFEC5E60)

	class DMMKMIILEDH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GridFightShowMonsterCutIn* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowMonsterCutIn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowMonsterCutIn*))((::PBYTE)hIl2Cpp + DMMKMIILEDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMKMIILEDH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMKMIILEDH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMMKMIILEDH_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMKMIILEDH_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodeType MNNHENHPOLH()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMKMIILEDH_MNNHENHPOLH_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMKMIILEDH__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
