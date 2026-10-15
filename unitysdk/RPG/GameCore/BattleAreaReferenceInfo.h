#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAreaReferenceInfo; }

#define RPG_GAMECORE_BATTLEAREAREFERENCEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D452360)
#define RPG_GAMECORE_BATTLEAREAREFERENCEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D452220)

namespace RPG::GameCore
{
	class BattleAreaReferenceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 UnifiedBattleAreaID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAREFERENCEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAreaReferenceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAreaReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAREFERENCEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
