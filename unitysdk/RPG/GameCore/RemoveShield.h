#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveShield; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVESHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9867C0)
#define RPG_GAMECORE_REMOVESHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9867D0)
#define RPG_GAMECORE_REMOVESHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D986790)

namespace RPG::GameCore
{
	class RemoveShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ShowText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
