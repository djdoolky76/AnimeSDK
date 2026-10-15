#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/SerializedBlendState.h"
#include "unitysdk/SerializedDepthState.h"
#include "unitysdk/SerializedRasterState.h"
#include "unitysdk/SerializedStencilState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/WarmupQualityCategory.h"
#include "unitysdk/UnityEngine/WarmupSubpass.h"
#include "unitysdk/UnityEngine/WarmupPipelineState.h"
#include "unitysdk/WarmupQualitySet.h"
class SerializedWarmupPSO;
namespace System { class String; }

#define SERIALIZEDWARMUPPSO_CTOR_OFFSET UNITYSDK_OFFSET(0xE968A70)
#define SERIALIZEDWARMUPPSO_FOOHCLMNPJH_OFFSET UNITYSDK_OFFSET(0xE9688B0)
#define SERIALIZEDWARMUPPSO_GBJNINBBMLE_OFFSET UNITYSDK_OFFSET(0xE968250)
#define SERIALIZEDWARMUPPSO_GET_QUALITYSET_OFFSET UNITYSDK_OFFSET(0xE9683E0)
#define SERIALIZEDWARMUPPSO_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xE967FB0)
#define SERIALIZEDWARMUPPSO_GET_USERENDERPASS_OFFSET UNITYSDK_OFFSET(0xE968240)
#define SERIALIZEDWARMUPPSO_HABLOKJHCNF_OFFSET UNITYSDK_OFFSET(0xE9682A0)
#define SERIALIZEDWARMUPPSO_ICGKFDEILKA_OFFSET UNITYSDK_OFFSET(0xE968420)
#define SERIALIZEDWARMUPPSO_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xE968910)
#define SERIALIZEDWARMUPPSO_OLCHHDKKPLI_OFFSET UNITYSDK_OFFSET(0xE968670)

inline static constexpr unsigned int SerializedWarmupPSO_TypeDefinitionIndex = 47419;

	class SerializedWarmupPSO : public ::System::Object
	{
	public:
		::UnityEngine::WarmupQualityCategory qualityCategory; // 0x10
		::RPG::CustomRP::Quality qualityLevel; // 0x14
		::System::String* shaderName; // 0x18
		::System::Int32 subshaderIndex; // 0x20
		::System::Int32 passIndex; // 0x24
		::System::String* keywordStr; // 0x28
		::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>* colorRTFormats; // 0x30
		::UnityEngine::Experimental::Rendering::GraphicsFormat depthRTFormat; // 0x38
		::System::Int32 inputAttachmentIndex; // 0x3C
		::Il2CppArray<::System::Byte>* colorLoadAction; // 0x40
		::Il2CppArray<::System::Byte>* colorStoreAction; // 0x48
		::System::Byte depthLoadAction; // 0x50
		::System::Byte depthStoreAction; // 0x51
		::System::Byte stencilLoadAction; // 0x52
		::System::Byte stencilStoreAction; // 0x53
		::System::Int32 subpassIndex; // 0x54
		::Il2CppArray<::UnityEngine::WarmupSubpass>* subPasses; // 0x58
		::System::Int32 rpDepthStencilAttachment; // 0x60
		::SerializedBlendState blendState; // 0x64
		::SerializedRasterState rasterState; // 0x148
		::SerializedDepthState depthState; // 0x15C
		::SerializedStencilState stencilState; // 0x164
		::System::Int32 globalDepthBias; // 0x188
		::System::Int32 globalSlopeBias; // 0x18C
		::System::Int32 depthBoundNear; // 0x190
		::System::Int32 depthBoundFar; // 0x194
		::Il2CppArray<::System::UInt32>* vertexChannels; // 0x198
		::Il2CppArray<::System::UInt16>* vertexStreamStrides; // 0x1A0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_CTOR_OFFSET))(this);
		}

		::System::String* get_Summary()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_GET_SUMMARY_OFFSET))(this);
		}

		::System::Boolean get_UseRenderPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_GET_USERENDERPASS_OFFSET))(this);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GBJNINBBMLE(::UnityEngine::Experimental::Rendering::GraphicsFormat a1)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_GBJNINBBMLE_OFFSET))(a1);
		}

		::System::Void HABLOKJHCNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_HABLOKJHCNF_OFFSET))(this);
		}

		::WarmupQualitySet get_QualitySet()
		{
			return ((::WarmupQualitySet(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_GET_QUALITYSET_OFFSET))(this);
		}

		::System::Void ICGKFDEILKA(::UnityEngine::WarmupPipelineState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WarmupPipelineState))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_ICGKFDEILKA_OFFSET))(this, a1);
		}

		::System::Void OLCHHDKKPLI(::UnityEngine::WarmupPipelineState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WarmupPipelineState))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_OLCHHDKKPLI_OFFSET))(this, a1);
		}

		::SerializedWarmupPSO* FOOHCLMNPJH()
		{
			return ((::SerializedWarmupPSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_FOOHCLMNPJH_OFFSET))(this);
		}

		::SerializedWarmupPSO* NBHCPBBGAKA()
		{
			return ((::SerializedWarmupPSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSO_NBHCPBBGAKA_OFFSET))(this);
		}

	};
