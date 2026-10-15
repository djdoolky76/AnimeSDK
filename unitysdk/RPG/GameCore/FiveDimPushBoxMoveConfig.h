#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPushBoxMoveConfig; }

#define RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A6D00)
#define RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A6D10)
#define RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A8710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPushBoxMoveConfig_TypeDefinitionIndex = 16689;

	class FiveDimPushBoxMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPushBoxMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPushBoxMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPushBoxMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPushBoxMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
