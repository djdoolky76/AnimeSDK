#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/A3E8528E5B0BEF28.h"
#include "unitysdk/FA78B0257AA80CDE/E3B7A2CD2D2BE776.h"
#include "unitysdk/FA78B0257AA80CDE/F7890538F5332BBD.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity { class HEU_InputCurveInfo; }

#define B5B4D5F2D0AE6642_B4B3FB8912CD5BFB_OFFSET UNITYSDK_OFFSET(0x3866C90)

inline static constexpr unsigned int B5B4D5F2D0AE6642_TypeDefinitionIndex = 18030;

struct alignas(4) B5B4D5F2D0AE6642
{
	::FA78B0257AA80CDE::F7890538F5332BBD F97A0DDE93A0E480; // 0x10
	::System::Int32 EEE67C44C7E1DD7F; // 0x14
	::System::Boolean BD07DC06C90AF29C; // 0x18
	::System::Boolean F63067C20E2CFF7B; // 0x19
	::System::Byte _padding0[0x2];
	::FA78B0257AA80CDE::E3B7A2CD2D2BE776 E1CF79771D07CA5B; // 0x1C
	::FA78B0257AA80CDE::A3E8528E5B0BEF28 A6AF833C22B59309; // 0x20

	::System::Void B4B3FB8912CD5BFB(::HoudiniEngineUnity::HEU_InputCurveInfo* AA73E466B1CBD250)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputCurveInfo*))((::PBYTE)hIl2Cpp + B5B4D5F2D0AE6642_B4B3FB8912CD5BFB_OFFSET))(this, AA73E466B1CBD250);
	}
};
