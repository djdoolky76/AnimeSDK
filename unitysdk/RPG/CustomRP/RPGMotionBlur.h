#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"
namespace RPG::CustomRP { class MotionBlurMethodParameter; }
namespace RPG::CustomRP { class MotionBlurQualityParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class IntParameter; }

#define RPG_CUSTOMRP_RPGMOTIONBLUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5B8E0)
#define RPG_CUSTOMRP_RPGMOTIONBLUR_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1CC5B850)
#define RPG_CUSTOMRP_RPGMOTIONBLUR_ONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1CC5B730)

namespace RPG::CustomRP
{
	class RPGMotionBlur : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::RPG::CustomRP::MotionBlurMethodParameter* MotionBlurMethod; // 0x38
		::RPG::CustomRP::MotionBlurQualityParameter* MotionBlurQuality; // 0x40
		::UnityEngine::Rendering::FloatParameter* MotionBlurAmount; // 0x48
		::UnityEngine::Rendering::IntParameter* MotionBlurMax; // 0x50
		static ::System::Boolean* StaticGet_IsMotionBlurEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGMotionBlur")->GetStaticField(0xAC00);
		}

		// static const ::System::Object kMotionBlurTileSize; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGMOTIONBLUR_CTOR_OFFSET))(this);
		}

		::System::Void OnOverride(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGMOTIONBLUR_ONOVERRIDE_OFFSET))(this, a1);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGMOTIONBLUR_ISACTIVEIMPL_OFFSET))(this);
		}

	};
}
