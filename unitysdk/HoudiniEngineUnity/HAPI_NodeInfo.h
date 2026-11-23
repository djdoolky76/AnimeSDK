#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/F8B2725D149FD2F1.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_NodeInfo_TypeDefinitionIndex = 18047;

	struct alignas(4) HAPI_NodeInfo
	{
		::System::Int32 id; // 0x10
		::System::Int32 parentId; // 0x14
		::System::Int32 nameSH; // 0x18
		::FA78B0257AA80CDE::F8B2725D149FD2F1 type; // 0x1C
		::System::Boolean isValid; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 totalCookCount; // 0x24
		::System::Int32 uniqueHoudiniNodeId; // 0x28
		::System::Int32 internalNodePathSH; // 0x2C
		::System::Int32 parmCount; // 0x30
		::System::Int32 parmIntValueCount; // 0x34
		::System::Int32 parmFloatValueCount; // 0x38
		::System::Int32 parmStringValueCount; // 0x3C
		::System::Int32 parmChoiceCount; // 0x40
		::System::Int32 childNodeCount; // 0x44
		::System::Int32 inputCount; // 0x48
		::System::Int32 outputCount; // 0x4C
		::System::Boolean createdPostAssetLoad; // 0x50
		::System::Boolean isTimeDependent; // 0x51
	};
}
