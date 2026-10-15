#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchClientRaidMap; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHCLIENTRAIDMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41380)
#define RPG_GAMECORE_SWITCHCLIENTRAIDMAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB41390)
#define RPG_GAMECORE_SWITCHCLIENTRAIDMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchClientRaidMap_TypeDefinitionIndex = 21571;

	class SwitchClientRaidMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntranceID; // 0x18
		::System::Boolean TargetIsClient; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* FinishPerformanceMissionKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCLIENTRAIDMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchClientRaidMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchClientRaidMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCLIENTRAIDMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchClientRaidMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchClientRaidMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCLIENTRAIDMAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
