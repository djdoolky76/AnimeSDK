#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class OpenTreasureChallenge; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_OPENTREASURECHALLENGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E2CB0)
#define RPG_GAMECORE_OPENTREASURECHALLENGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E2CC0)
#define RPG_GAMECORE_OPENTREASURECHALLENGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E2C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTreasureChallenge_TypeDefinitionIndex = 20471;

	class OpenTreasureChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaidID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* DynamicRaidID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTREASURECHALLENGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTreasureChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTreasureChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTREASURECHALLENGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTreasureChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTreasureChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTREASURECHALLENGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
