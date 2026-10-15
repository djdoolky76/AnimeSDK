#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DepthOfFieldDebugMethod.h"
namespace RPG::CustomRP { class RPGDepthOfField; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFEFFECTPARAMETER_CAMLHIGMMJI_OFFSET UNITYSDK_OFFSET(0xF8AD0)

namespace RPGTools::Timeline::PostProcessing
{
	struct alignas(4) DOFEffectParameter
	{
		::RPG::CustomRP::RPGDepthOfField_DepthOfFieldDebugMethod debugMode; // 0x10
		::System::Single FocusDistance; // 0x14
		::System::Single FStop; // 0x18
		::System::Single SensorWidth; // 0x1C
		::System::Void CAMLHIGMMJI(::RPG::CustomRP::RPGDepthOfField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFEFFECTPARAMETER_CAMLHIGMMJI_OFFSET))(this, a1);
		}

	};
}
