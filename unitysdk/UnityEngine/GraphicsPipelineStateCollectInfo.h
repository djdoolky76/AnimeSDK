#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABF17124FC4A385E/BC85FDD0877B682D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/CollectSubPassInfo.h"

namespace System { class String; }

#define UNITYENGINE_GRAPHICSPIPELINESTATECOLLECTINFO_GETHASH_OFFSET UNITYSDK_OFFSET(0x414D9A0)

namespace UnityEngine
{
	inline static constexpr unsigned int GraphicsPipelineStateCollectInfo_TypeDefinitionIndex = 17369;

	struct alignas(8) GraphicsPipelineStateCollectInfo
	{
		::System::String* shaderName; // 0x10
		::System::String* localKeywords; // 0x18
		::System::Int32 passType; // 0x20
		::System::Int32 passIndex; // 0x24
		::System::Int32 subShaderIndex; // 0x28
		::System::Int32 subPassIndex; // 0x2C
		::Il2CppArray<::UnityEngine::CollectSubPassInfo>* subPasses; // 0x30
		::Il2CppArray<::ABF17124FC4A385E::BC85FDD0877B682D>* colorRTFormats; // 0x38
		::Il2CppArray<::System::Byte>* colorLoadAction; // 0x40
		::Il2CppArray<::System::Byte>* colorStoreAction; // 0x48
		::ABF17124FC4A385E::BC85FDD0877B682D depthRTformat; // 0x50
		::System::Byte depthLoadAction; // 0x54
		::System::Byte depthStoreAction; // 0x55
		::System::Byte _padding0[0x2];
		::System::Int32 depthStencilAttachment; // 0x58
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Byte>* blendStateData; // 0x60
		::Il2CppArray<::System::Byte>* rasterStateData; // 0x68
		::Il2CppArray<::System::Byte>* depthStateData; // 0x70
		::Il2CppArray<::System::Byte>* stencilStateData; // 0x78
		::Il2CppArray<::System::UInt32>* vertexChannels; // 0x80
		::Il2CppArray<::System::UInt32>* vertexStreamStrides; // 0x88

		::System::UInt64 GetHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRAPHICSPIPELINESTATECOLLECTINFO_GETHASH_OFFSET))(this);
		}
	};
}
