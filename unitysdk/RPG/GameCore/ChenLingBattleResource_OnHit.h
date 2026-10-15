#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleResource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace RPG::GameCore { class ChenLingBattleResource_OnHit; }

#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D587AB0)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D587AC0)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D587A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleResource_OnHit_TypeDefinitionIndex = 15782;

	class ChenLingBattleResource_OnHit : public ::RPG::GameCore::BaseChenLingBattleResource
	{
	public:
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleResource_OnHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleResource_OnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleResource_OnHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleResource_OnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
