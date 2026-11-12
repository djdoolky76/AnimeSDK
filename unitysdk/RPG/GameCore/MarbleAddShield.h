#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleAddShield; }

#define RPG_GAMECORE_MARBLEADDSHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA51850)
#define RPG_GAMECORE_MARBLEADDSHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA51860)
#define RPG_GAMECORE_MARBLEADDSHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA51800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddShield_TypeDefinitionIndex = 17020;

	class MarbleAddShield : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
