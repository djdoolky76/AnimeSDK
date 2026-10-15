#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSQuality.h"
#include "unitysdk/UnityEngine/NVIDIA/OptimalDLSSSettingsData.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_Resolution.h"

#define RPG_CUSTOMRP_DLSSPASS_OPTIMALSETTINGSREQUEST_CANFIT_OFFSET UNITYSDK_OFFSET(0x3C34670)

namespace RPG::CustomRP
{
	struct alignas(4) DLSSPass_OptimalSettingsRequest
	{
		::UnityEngine::NVIDIA::DLSSQuality quality; // 0x10
		::UnityEngine::Rect viewport; // 0x14
		::UnityEngine::NVIDIA::OptimalDLSSSettingsData optimalSettings; // 0x24
		::System::Boolean CanFit(::RPG::CustomRP::DLSSPass_Resolution a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::DLSSPass_Resolution))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_OPTIMALSETTINGSREQUEST_CANFIT_OFFSET))(this, a1);
		}

	};
}
