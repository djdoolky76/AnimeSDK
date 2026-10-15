#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class MatchThreePropConfig; }
namespace RPG::GameCore::Match3 { class MatchThreePropSystemConfig; }

#define RPG_GAMECORE_MATCH3_MATCHTHREEPROPSYSTEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84F840)
#define RPG_GAMECORE_MATCH3_MATCHTHREEPROPSYSTEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84DF20)

namespace RPG::GameCore::Match3
{
	class MatchThreePropSystemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::MatchThreePropConfig*>* Props; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREEPROPSYSTEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::MatchThreePropSystemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::MatchThreePropSystemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREEPROPSYSTEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
