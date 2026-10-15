#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"
namespace UnityEngine::Rendering { class FloatParameter; }

#define RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC63130)
#define RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1CC62F30)
#define RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_ONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1CC63010)

namespace RPG::CustomRP
{
	class RPGTemporalAntialiasing : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::FloatParameter* jitterSpread; // 0x38
		::UnityEngine::Rendering::FloatParameter* sharpness; // 0x40
		::UnityEngine::Rendering::FloatParameter* stationaryBlending; // 0x48
		::UnityEngine::Rendering::FloatParameter* motionBlending; // 0x50
		::UnityEngine::Rendering::FloatParameter* clampScale; // 0x58
		static ::System::Boolean* StaticGet_IsTAAEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGTemporalAntialiasing")->GetStaticField(0xACE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_ISACTIVEIMPL_OFFSET))(this);
		}

		::System::Void OnOverride(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_ONOVERRIDE_OFFSET))(this, a1);
		}

	};
}
