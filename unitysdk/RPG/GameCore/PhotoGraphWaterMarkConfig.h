#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphLogoConfig; }
namespace RPG::GameCore { class PhotoGraphWaterMarkConfig; }

#define RPG_GAMECORE_PHOTOGRAPHWATERMARKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D914610)
#define RPG_GAMECORE_PHOTOGRAPHWATERMARKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D912B00)

namespace RPG::GameCore
{
	class PhotoGraphWaterMarkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphLogoConfig* DefaultLogoConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::PhotoGraphLogoConfig*>* LogoConfigs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWATERMARKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphWaterMarkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphWaterMarkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWATERMARKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
