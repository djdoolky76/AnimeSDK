#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleResource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace RPG::GameCore { class ChenLingBattleResource_Shield; }

#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D587C10)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D587C20)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D587BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleResource_Shield_TypeDefinitionIndex = 15780;

	class ChenLingBattleResource_Shield : public ::RPG::GameCore::BaseChenLingBattleResource
	{
	public:
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleResource_Shield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleResource_Shield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleResource_Shield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleResource_Shield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
