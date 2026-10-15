#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetPhainonChargePointPreshow; }

#define RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABED90)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABEDA0)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABED60)

namespace RPG::GameCore
{
	class SetPhainonChargePointPreshow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* PreshowValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPhainonChargePointPreshow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPhainonChargePointPreshow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPhainonChargePointPreshow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPhainonChargePointPreshow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
