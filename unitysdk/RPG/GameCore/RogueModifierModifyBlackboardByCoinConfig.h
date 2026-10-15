#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierModifyBlackboardBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyBlackboardByCoinConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EA020)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EA030)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EA080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBlackboardByCoinConfig_TypeDefinitionIndex = 17696;

	class RogueModifierModifyBlackboardByCoinConfig : public ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBlackboardByCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyBlackboardByCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
