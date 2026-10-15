#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
namespace RPG::GameCore { class GridFightShowMonsterCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define DMMKMIILEDH_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBF640)
#define DMMKMIILEDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEBF9F0)
#define DMMKMIILEDH_MNNHENHPOLH_OFFSET UNITYSDK_OFFSET(0xFEBF850)
#define DMMKMIILEDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEBF650)
#define DMMKMIILEDH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFEBF940)
#define DMMKMIILEDH_TICK_OFFSET UNITYSDK_OFFSET(0xFEBF990)
#define DMMKMIILEDH__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xFEBFA30)

inline static constexpr unsigned int DMMKMIILEDH_TypeDefinitionIndex = 58144;

	class DMMKMIILEDH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GridFightShowMonsterCutIn* OFKGLJOAMLD; // 0x20
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
