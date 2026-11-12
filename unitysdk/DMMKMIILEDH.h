#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
namespace RPG::GameCore { class GridFightShowMonsterCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define DMMKMIILEDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1063E950)
#define DMMKMIILEDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1063ECD0)
#define DMMKMIILEDH_MNNHENHPOLH_OFFSET UNITYSDK_OFFSET(0x1063EB60)
#define DMMKMIILEDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1063E960)
#define DMMKMIILEDH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1063EC20)
#define DMMKMIILEDH_TICK_OFFSET UNITYSDK_OFFSET(0x1063EC70)
#define DMMKMIILEDH__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1063ED10)

inline static constexpr unsigned int DMMKMIILEDH_TypeDefinitionIndex = 59392;

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
