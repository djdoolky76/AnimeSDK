#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBMIFNCCGHK.h"
#include "unitysdk/System/Object.h"

class ENDLNBMGEHN;
namespace MoleMole { class UIHollowWaterFlowWidgetController; }

#define MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x19B26B00)
#define MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x19B26AF0)
#define MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B26B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SmashButtonGameplayConfig_TypeDefinitionIndex = 74754;

	class SmashButtonGameplayConfig : public ::System::Object
	{
	public:
		::System::Single MinSpeed; // 0x10
		::System::Single InitialPoint; // 0x14
		::System::Single MaxSpeed; // 0x18
		::System::Single Gravity; // 0x1C
		::System::Single ClickAcceleration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::OBMIFNCCGHK get_GameplayType()
		{
			return ((::OBMIFNCCGHK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET))(this);
		}

		::ENDLNBMGEHN* Create(::MoleMole::UIHollowWaterFlowWidgetController* controller)
		{
			return ((::ENDLNBMGEHN*(*)(::PVOID, ::MoleMole::UIHollowWaterFlowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SMASHBUTTONGAMEPLAYCONFIG_CREATE_OFFSET))(this, controller);
		}
	};
}
