#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/A3E8528E5B0BEF28.h"
#include "unitysdk/FA78B0257AA80CDE/E3B7A2CD2D2BE776.h"
#include "unitysdk/FA78B0257AA80CDE/F7890538F5332BBD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B5B4D5F2D0AE6642.h"

#define HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_CREATEFROMHAPI_INPUTCURVEINFO_OFFSET UNITYSDK_OFFSET(0x3898B10)
#define HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3898BA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputCurveInfo_TypeDefinitionIndex = 18150;

	class HEU_InputCurveInfo : public ::System::Object
	{
	public:
		::FA78B0257AA80CDE::F7890538F5332BBD curveType; // 0x10
		::System::Int32 order; // 0x14
		::System::Boolean closed; // 0x18
		::System::Boolean reverse; // 0x19
		::System::Byte _padding0[0x2];
		::FA78B0257AA80CDE::E3B7A2CD2D2BE776 inputMethod; // 0x1C
		::FA78B0257AA80CDE::A3E8528E5B0BEF28 breakpointParameterization; // 0x20

		static ::HoudiniEngineUnity::HEU_InputCurveInfo* CreateFromHAPI_InputCurveInfo(::B5B4D5F2D0AE6642 AA73E466B1CBD250)
		{
			return ((::HoudiniEngineUnity::HEU_InputCurveInfo*(*)(::B5B4D5F2D0AE6642))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_CREATEFROMHAPI_INPUTCURVEINFO_OFFSET))(AA73E466B1CBD250);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO__CTOR_OFFSET))(this);
		}
	};
}
