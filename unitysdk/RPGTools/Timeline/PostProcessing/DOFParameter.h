#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DepthOfFieldDebugMethod.h"
namespace RPG::CustomRP { class RPGDepthOfField; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_BHGCJBKGHOP_OFFSET UNITYSDK_OFFSET(0xE91FBE0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_CAMLHIGMMJI_OFFSET UNITYSDK_OFFSET(0xF8C60)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_LDFOFEPONPN_OFFSET UNITYSDK_OFFSET(0xF8C10)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFParameter_TypeDefinitionIndex = 48561;

	struct alignas(4) DOFParameter
	{
		::RPG::CustomRP::RPGDepthOfField_DepthOfFieldDebugMethod DofDebug; // 0x10
		::System::Boolean RPGDepthOfFieldState; // 0x14
		::System::Boolean FocusDistanceState; // 0x15
		::System::Byte _padding0[0x2];
		::System::Single FocusDistance; // 0x18
		::System::Boolean DisableAutoDistance; // 0x1C
		::System::Boolean CocMethodTypeState; // 0x1D
		::System::Boolean CocMethodType; // 0x1E
		::System::Byte _padding1[0x1];
		::RPG::CustomRP::RPGDepthOfField_CoCMethod DisplayCocMethodType; // 0x20
		::System::Boolean NearTransitionRegionState; // 0x24
		::System::Byte _padding2[0x3];
		::System::Single NearTransitionRegion; // 0x28
		::System::Boolean FarTransitionRegionState; // 0x2C
		::System::Byte _padding3[0x3];
		::System::Single FarTransitionRegion; // 0x30
		::System::Boolean SensorWidthState; // 0x34
		::System::Byte _padding4[0x3];
		::System::Single SensorWidth; // 0x38
		::System::Boolean FStopState; // 0x3C
		::System::Byte _padding5[0x3];
		::System::Single FStop; // 0x40
		::System::Boolean CocBlurUnitState; // 0x44
		::System::Byte _padding6[0x3];
		::System::Single CocBlurUnit; // 0x48
		::System::Void LDFOFEPONPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_LDFOFEPONPN_OFFSET))(this);
		}

		::System::Void CAMLHIGMMJI(::RPG::CustomRP::RPGDepthOfField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_CAMLHIGMMJI_OFFSET))(this, a1);
		}

		/*
		static ::RPGTools::Timeline::PostProcessing::DOFParameter BHGCJBKGHOP(::RPG::CustomRP::RPGDepthOfField* a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::DOFParameter(*)(::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFPARAMETER_BHGCJBKGHOP_OFFSET))(a1);
		}
		*/

	};
}
