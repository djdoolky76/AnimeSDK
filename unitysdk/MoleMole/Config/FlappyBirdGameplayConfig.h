#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBMIFNCCGHK.h"
#include "unitysdk/System/Object.h"

class ENDLNBMGEHN;
namespace MoleMole { class UIHollowWaterFlowWidgetController; }

#define MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xFFE7A90)
#define MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xFFE7A80)
#define MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE7B10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FlappyBirdGameplayConfig_TypeDefinitionIndex = 91912;

	class FlappyBirdGameplayConfig : public ::System::Object
	{
	public:
		::System::Single LosePointSpeed; // 0x10
		::System::Single MinSpeed; // 0x14
		::System::Single MaxSpeed; // 0x18
		::System::Single Gravity; // 0x1C
		::System::Single ClickAcceleration; // 0x20
		::System::Boolean NonNegativeBeforeClickMode; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single NormalizedTargetRange; // 0x28
		::System::Single GainPointSpeed; // 0x2C
		::System::Single InitialPoint; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::OBMIFNCCGHK get_GameplayType()
		{
			return ((::OBMIFNCCGHK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET))(this);
		}

		::ENDLNBMGEHN* Create(::MoleMole::UIHollowWaterFlowWidgetController* controller)
		{
			return ((::ENDLNBMGEHN*(*)(::PVOID, ::MoleMole::UIHollowWaterFlowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_CREATE_OFFSET))(this, controller);
		}
	};
}
