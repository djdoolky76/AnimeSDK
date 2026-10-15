#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PackedPrimInstancingMode.h"

namespace HoudiniEngineUnity
{
	struct alignas(4) HAPI_CookOptions
	{
		::System::Boolean splitGeosByGroup; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 splitGroupSH; // 0x14
		::System::Boolean splitGeosByAttribute; // 0x18
		::System::Byte _padding1[0x3];
		::System::Int32 splitAttrSH; // 0x1C
		::System::Int32 maxVerticesPerPrimitive; // 0x20
		::System::Boolean refineCurveToLinear; // 0x24
		::System::Byte _padding2[0x3];
		::System::Single curveRefineLOD; // 0x28
		::System::Boolean clearErrorsAndWarnings; // 0x2C
		::System::Boolean cookTemplatedGeos; // 0x2D
		::System::Boolean splitPointsByVertexAttributes; // 0x2E
		::System::Byte _padding3[0x1];
		::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode packedPrimInstancingMode; // 0x30
		::System::Boolean handleBoxPartTypes; // 0x34
		::System::Boolean handleSpherePartTypes; // 0x35
		::System::Boolean checkPartChanges; // 0x36
		::System::Boolean cacheMeshTopology; // 0x37
		::System::Boolean preferOutputNodes; // 0x38
		::System::Byte _padding4[0x3];
		::System::Int32 extraFlags; // 0x3C
	};
}
