#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/A677563F5AE8D3D9.h"
#include "unitysdk/FA78B0257AA80CDE/B7D00FE91A088D08.h"
#include "unitysdk/FA78B0257AA80CDE/FC3C128604B4B514.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_AttributeInfo_TypeDefinitionIndex = 17912;

	struct alignas(4) HAPI_AttributeInfo
	{
		::System::Boolean exists; // 0x10
		::System::Byte _padding0[0x3];
		::FA78B0257AA80CDE::B7D00FE91A088D08 owner; // 0x14
		::FA78B0257AA80CDE::A677563F5AE8D3D9 storage; // 0x18
		::FA78B0257AA80CDE::B7D00FE91A088D08 originalOwner; // 0x1C
		::System::Int32 count; // 0x20
		::System::Int32 tupleSize; // 0x24
		::System::Int64 totalArrayElements; // 0x28
		::FA78B0257AA80CDE::FC3C128604B4B514 typeInfo; // 0x30
	};
}
