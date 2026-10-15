#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFantasticStoryBattleResultPage; }
namespace RPG::GameCore { class TaskContext; }

#define DILIAHKLHCL_CTOR_OFFSET UNITYSDK_OFFSET(0xF2136F0)
#define DILIAHKLHCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF213700)
#define DILIAHKLHCL_NOOGKPDBCCC_OFFSET UNITYSDK_OFFSET(0xF213790)
#define DILIAHKLHCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF213740)
#define DILIAHKLHCL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF213910)
#define DILIAHKLHCL_TICK_OFFSET UNITYSDK_OFFSET(0xF213960)

	class DILIAHKLHCL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowFantasticStoryBattleResultPage* OFKGLJOAMLD; // 0x20
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFantasticStoryBattleResultPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFantasticStoryBattleResultPage*))((::PBYTE)hIl2Cpp + DILIAHKLHCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILIAHKLHCL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILIAHKLHCL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILIAHKLHCL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DILIAHKLHCL_TICK_OFFSET))(this, a1);
		}

		::System::Void NOOGKPDBCCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILIAHKLHCL_NOOGKPDBCCC_OFFSET))(this);
		}

	};
