#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBMIFNCCGHK.h"
#include "unitysdk/System/Object.h"

class ENDLNBMGEHN;
namespace MoleMole { class UIHollowWaterFlowWidgetController; }

#define MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x12795350)
#define MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x12795340)
#define MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x127953D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MultipleTargetGameplayConfig_TypeDefinitionIndex = 48524;

	class MultipleTargetGameplayConfig : public ::System::Object
	{
	public:
		::System::Int32 MaxPoint; // 0x10
		::System::Int32 PunishPoint; // 0x14
		::System::Single AccumulateSpeed; // 0x18
		::System::Int32 InitialPoint; // 0x1C
		::System::Single NormalizedTargetRange; // 0x20
		::System::Int32 MinPoint; // 0x24
		::System::Int32 RewardPoint; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::OBMIFNCCGHK get_GameplayType()
		{
			return ((::OBMIFNCCGHK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET))(this);
		}

		::ENDLNBMGEHN* Create(::MoleMole::UIHollowWaterFlowWidgetController* controller)
		{
			return ((::ENDLNBMGEHN*(*)(::PVOID, ::MoleMole::UIHollowWaterFlowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLETARGETGAMEPLAYCONFIG_CREATE_OFFSET))(this, controller);
		}
	};
}
