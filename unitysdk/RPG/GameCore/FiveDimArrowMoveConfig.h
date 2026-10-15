#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimArrowMoveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AF040)
#define RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AF050)
#define RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AF000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimArrowMoveConfig_TypeDefinitionIndex = 16688;

	class FiveDimArrowMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::String* MoveHitEvent; // 0x40
		::System::String* OnHitEvent; // 0x48
		::System::String* OnAttachEvent; // 0x50
		::System::String* OnDetachEvent; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimArrowMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimArrowMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimArrowMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimArrowMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
