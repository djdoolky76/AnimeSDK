#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class MatchThreePropConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_MATCHTHREEPROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84F830)
#define RPG_GAMECORE_MATCH3_MATCHTHREEPROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84F510)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThreePropConfig_TypeDefinitionIndex = 24943;

	class MatchThreePropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PropID; // 0x10
		::RPG::GameCore::MatchThreePropType PropType; // 0x14
		::System::UInt32 PropCount; // 0x18
		::System::UInt32 InputGridCount; // 0x1C
		::System::String* IconPath; // 0x20
		::RPG::Client::TextID DescText; // 0x28
		::RPG::Client::TextID HintText; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREEPROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::MatchThreePropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::MatchThreePropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREEPROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
