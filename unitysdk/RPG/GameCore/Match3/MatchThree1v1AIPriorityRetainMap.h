#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainMap; }

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84F230)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84F0E0)

namespace RPG::GameCore::Match3
{
	class MatchThree1v1AIPriorityRetainMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Priority; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*>* RetainMap; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
