#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Timeline::PostProcessing { class RPGDepthOfFieldParamter; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0xE91D300)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_CTOR_OFFSET UNITYSDK_OFFSET(0xE91D2D0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xE91D3E0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_MLKPOHLOJKI_OFFSET UNITYSDK_OFFSET(0xE91D1B0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RPGDepthOfFieldParamter_TypeDefinitionIndex = 48563;

	class RPGDepthOfFieldParamter : public ::System::Object
	{
	public:
		::System::Boolean RPGDepthOfFieldState; // 0x10
		::System::Boolean FocusDistanceState; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single FocusDistance; // 0x14
		::System::Boolean CocMethodTypeState; // 0x18
		::System::Byte _padding1[0x3];
		::RPG::CustomRP::RPGDepthOfField_CoCMethod CocMethodType; // 0x1C
		::System::Boolean NearTransitionRegionState; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single NearTransitionRegion; // 0x24
		::System::Boolean FarTransitionRegionState; // 0x28
		::System::Byte _padding3[0x3];
		::System::Single FarTransitionRegion; // 0x2C
		::System::Boolean SensorWidthState; // 0x30
		::System::Byte _padding4[0x3];
		::System::Single SensorWidth; // 0x34
		::System::Boolean FStopState; // 0x38
		::System::Byte _padding5[0x3];
		::System::Single FStop; // 0x3C
		::System::Boolean CocBlurUnitState; // 0x40
		::System::Byte _padding6[0x3];
		::System::Single CocBlurUnit; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter* MLKPOHLOJKI(::System::Single a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_MLKPOHLOJKI_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter* EGFCFCBHJJP(::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter* a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter*(*)(::PVOID, ::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void AEOIKFNKAAP(::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PostProcessing::RPGDepthOfFieldParamter*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RPGDEPTHOFFIELDPARAMTER_AEOIKFNKAAP_OFFSET))(this, a1);
		}

	};
}
