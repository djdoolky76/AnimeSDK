#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchBossHeadEffType; }

#define RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3F7B0)
#define RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3F7C0)
#define RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3F780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchBossHeadEffType_TypeDefinitionIndex = 23216;

	class SwitchBossHeadEffType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BossHeadEffType Type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchBossHeadEffType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchBossHeadEffType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBOSSHEADEFFTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
