#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEvolveBuildTreasureInBattleForTrial; }
namespace RPG::GameCore { class TaskContext; }

#define FLCGHBMFMBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1581FB80)
#define FLCGHBMFMBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1581FB90)
#define FLCGHBMFMBG_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x158206A0)
#define FLCGHBMFMBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1581FC30)
#define FLCGHBMFMBG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158206F0)
#define FLCGHBMFMBG_TICK_OFFSET UNITYSDK_OFFSET(0x1581FBD0)

inline static constexpr unsigned int FLCGHBMFMBG_TypeDefinitionIndex = 58646;

	class FLCGHBMFMBG : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial*))((::PBYTE)hIl2Cpp + FLCGHBMFMBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGHBMFMBG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLCGHBMFMBG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGHBMFMBG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGHBMFMBG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCGHBMFMBG_JNIKOAEAEHB_OFFSET))(this);
		}

	};
