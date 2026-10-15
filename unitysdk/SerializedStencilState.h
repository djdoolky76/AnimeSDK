#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"
#include "unitysdk/UnityEngine/Rendering/StencilState.h"

#define SERIALIZEDSTENCILSTATE_ICGKFDEILKA_OFFSET UNITYSDK_OFFSET(0xF9A90)
#define SERIALIZEDSTENCILSTATE_OLCHHDKKPLI_OFFSET UNITYSDK_OFFSET(0xF9B30)

inline static constexpr unsigned int SerializedStencilState_TypeDefinitionIndex = 47418;

	struct alignas(4) SerializedStencilState
	{
		::System::Boolean enabled; // 0x10
		::System::Byte readMask; // 0x11
		::System::Byte writeMask; // 0x12
		::System::Byte _padding0[0x1];
		::UnityEngine::Rendering::CompareFunction compareFunctionFront; // 0x14
		::UnityEngine::Rendering::StencilOp passOperationFront; // 0x18
		::UnityEngine::Rendering::StencilOp failOperationFront; // 0x1C
		::UnityEngine::Rendering::StencilOp zFailOperationFront; // 0x20
		::UnityEngine::Rendering::CompareFunction compareFunctionBack; // 0x24
		::UnityEngine::Rendering::StencilOp passOperationBack; // 0x28
		::UnityEngine::Rendering::StencilOp failOperationBack; // 0x2C
		::UnityEngine::Rendering::StencilOp zFailOperationBack; // 0x30
		::System::Void ICGKFDEILKA(::UnityEngine::Rendering::StencilState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilState))((::PBYTE)hIl2Cpp + SERIALIZEDSTENCILSTATE_ICGKFDEILKA_OFFSET))(this, a1);
		}

		::System::Void OLCHHDKKPLI(::UnityEngine::Rendering::StencilState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilState))((::PBYTE)hIl2Cpp + SERIALIZEDSTENCILSTATE_OLCHHDKKPLI_OFFSET))(this, a1);
		}

	};
