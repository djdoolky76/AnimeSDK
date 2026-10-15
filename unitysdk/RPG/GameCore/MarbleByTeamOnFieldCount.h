#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByTeamOnFieldCount; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80DA80)
#define RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80DA90)
#define RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80DA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByTeamOnFieldCount_TypeDefinitionIndex = 16891;

	class MarbleByTeamOnFieldCount : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::RPG::GameCore::MarbleCompare CompareType; // 0x2C
		::System::Int32 Value; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* ValueDynamic; // 0x38
		::System::Boolean RequireCasterOnField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByTeamOnFieldCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByTeamOnFieldCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByTeamOnFieldCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByTeamOnFieldCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
