#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamShopRefreshCountConfig; }

#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A92B0)
#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A92C0)
#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A9270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamShopRefreshCountConfig_TypeDefinitionIndex = 16791;

	class FateParamShopRefreshCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamShopRefreshCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamShopRefreshCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamShopRefreshCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamShopRefreshCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
