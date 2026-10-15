#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamShopRefreshCountConfig; }

#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C9D0)
#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69C9E0)
#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69C990)

namespace RPG::GameCore
{
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
