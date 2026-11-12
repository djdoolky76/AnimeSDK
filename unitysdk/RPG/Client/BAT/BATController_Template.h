#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase_DrawMode.h"

#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD135E60)
#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_GET_MODE_OFFSET UNITYSDK_OFFSET(0xD135D90)
#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xD135E20)
#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xD135DE0)
#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xD135DA0)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATController_Template_TypeDefinitionIndex = 75793;

	class BATController_Template : public ::RPG::Client::BAT::BATControllerBase
	{
	public:
		::RPG::Client::BAT::BATControllerBase_DrawMode _Mode_k__BackingField; // 0x70
		::System::Int32 ExampleProperty; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_CTOR_OFFSET))(this);
		}

		::RPG::Client::BAT::BATControllerBase_DrawMode get_Mode()
		{
			return ((::RPG::Client::BAT::BATControllerBase_DrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_GET_MODE_OFFSET))(this);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_IKOHLHDGFKH_OFFSET))(this);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_GPLLONMEDAC_OFFSET))(this);
		}

	};
}
