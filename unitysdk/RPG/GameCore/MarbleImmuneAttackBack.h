#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleImmuneAttackBack; }

#define RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D811970)
#define RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D811980)
#define RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D811920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleImmuneAttackBack_TypeDefinitionIndex = 16868;

	class MarbleImmuneAttackBack : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleImmuneAttackBack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleImmuneAttackBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleImmuneAttackBack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleImmuneAttackBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEIMMUNEATTACKBACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
