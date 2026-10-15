#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class MatchThree1v1AILevelConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainMap; }

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AILEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84EF70)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AILEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84EDD0)

namespace RPG::GameCore::Match3
{
	class MatchThree1v1AILevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap*>* PriorityRetainMap; // 0x18
		::Il2CppArray<::System::UInt32>* MaxPropUseCountMap; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AILEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::MatchThree1v1AILevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::MatchThree1v1AILevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AILEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
