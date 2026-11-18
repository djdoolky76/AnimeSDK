#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/AttachmentDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters.h"
#include "unitysdk/UnityEngine/Rendering/ShadowDrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/SortingSettings.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class SRPCmdBuffer; }

#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE630)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926F00)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_OFFSET UNITYSDK_OFFSET(0x926F00)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECAE3F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_OFFSET UNITYSDK_OFFSET(0x926F10)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE5D0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926ED0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_OFFSET UNITYSDK_OFFSET(0x926ED0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_1_OFFSET UNITYSDK_OFFSET(0x926F90)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECAE400)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_OFFSET UNITYSDK_OFFSET(0x926F50)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CULL_OFFSET UNITYSDK_OFFSET(0x927220)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWHIZDEBUGRENDERERS_OFFSET UNITYSDK_OFFSET(0x927060)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_1_OFFSET UNITYSDK_OFFSET(0x927020)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE4F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926E60)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET UNITYSDK_OFFSET(0x926FF0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE510)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926E70)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_OFFSET UNITYSDK_OFFSET(0x926E70)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECAE420)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_OFFSET UNITYSDK_OFFSET(0x926FE0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE5F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926EE0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_OFFSET UNITYSDK_OFFSET(0x926EE0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ECAE410)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_OFFSET UNITYSDK_OFFSET(0x926FD0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9272B0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x927260)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTEANDCLEARCOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x927120)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE530)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926E80)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x9270A0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE550)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926E90)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_OFFSET UNITYSDK_OFFSET(0x9271A0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE4D0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926E50)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x926E50)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x359320)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE4B0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926E40)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_OFFSET UNITYSDK_OFFSET(0x926E40)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE5B0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926EC0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_OFFSET UNITYSDK_OFFSET(0x926EC0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1ECAE470)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE450)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_OFFSET UNITYSDK_OFFSET(0x1ECAE430)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE590)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926EB0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x926EB0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE570)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926EA0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_OFFSET UNITYSDK_OFFSET(0x926EA0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPSUNSHADOWCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1ECAE460)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE490)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926E30)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_OFFSET UNITYSDK_OFFSET(0x926E30)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ECAE610)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x926EF0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_OFFSET UNITYSDK_OFFSET(0x926EF0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScriptableRenderContext_TypeDefinitionIndex = 6275;

	struct alignas(4) ScriptableRenderContext
	{
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT__CTOR_OFFSET))(this, ptr);
		}

		static ::System::Void BeginRenderPass_Internal(::System::IntPtr self, ::System::Int32 width, ::System::Int32 height, ::System::Int32 samples, ::System::IntPtr colors, ::System::Int32 colorCount, ::System::Int32 depthAttachmentIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_INTERNAL_OFFSET))(self, width, height, samples, colors, colorCount, depthAttachmentIndex);
		}

		static ::System::Void BeginSubPass_Internal(::System::IntPtr self, ::System::IntPtr colors, ::System::Int32 colorCount, ::System::IntPtr inputs, ::System::Int32 inputCount, ::System::Boolean isDepthReadOnly)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_INTERNAL_OFFSET))(self, colors, colorCount, inputs, inputCount, isDepthReadOnly);
		}

		static ::System::Void EndSubPass_Internal(::System::IntPtr self)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_INTERNAL_OFFSET))(self);
		}

		static ::System::Void EndRenderPass_Internal(::System::IntPtr self)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_INTERNAL_OFFSET))(self);
		}

		/*
		static ::System::Void Internal_Cull(::UnityEngine::Rendering::ScriptableCullingParameters& parameters, ::UnityEngine::Rendering::ScriptableRenderContext renderLoop, ::System::IntPtr results)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::Rendering::ScriptableRenderContext, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_OFFSET))(parameters, renderLoop, results);
		}
		*/

		static ::System::Void SetupSunShadowCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters& parameters, ::Il2CppArray<::System::Byte>* pvsBits, ::System::UInt32 byteOffset, ::System::UInt32 rangeCount)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPSUNSHADOWCULLINGPARAMETERS_OFFSET))(parameters, pvsBits, byteOffset, rangeCount);
		}

		static ::System::Void InitializeSortSettings(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::SortingSettings& sortingSettings)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::SortingSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET))(camera, sortingSettings);
		}

		::System::Void Submit_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_OFFSET))(this);
		}

		::System::Int32 GetNumberOfCameras_Internal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera_Internal(::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_OFFSET))(this, index);
		}

		::System::Void DrawRenderers_Internal(::System::IntPtr cullResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings, ::System::IntPtr renderTypes, ::System::IntPtr stateBlocks, ::System::Int32 stateCount, ::System::Boolean hizDebug)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_OFFSET))(this, cullResults, drawingSettings, filteringSettings, renderTypes, stateBlocks, stateCount, hizDebug);
		}

		::System::Void DrawShadows_Internal(::System::IntPtr shadowDrawingSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_OFFSET))(this, shadowDrawingSettings);
		}

		::System::Void ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::System::Boolean clearMove)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET))(this, commandBuffer, clearMove);
		}

		::System::Void ExecuteSRPCmdBuffer_Internal(::UnityEngine::Rendering::SRPCmdBuffer* srpCmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::SRPCmdBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_INTERNAL_OFFSET))(this, srpCmdBuffer);
		}

		::System::Void SetupCameraProperties_Internal(::UnityEngine::Camera* camera, ::System::Boolean stereoSetup, ::System::Int32 eye)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_OFFSET))(this, camera, stereoSetup, eye);
		}

		::System::Void InvokeOnRenderObjectCallback_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_OFFSET))(this);
		}

		::System::Void HZBCullingReadback_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_INTERNAL_OFFSET))(this);
		}

		::System::Void BeginRenderQuery_Internal(::UnityEngine::Camera* camera, ::System::Int32 nameID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_INTERNAL_OFFSET))(this, camera, nameID);
		}

		::System::Void EndRenderQuery_Internal(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_INTERNAL_OFFSET))(this, camera);
		}

		::System::Void UpdateKodamaLighting_BakedOnly_Internal(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_INTERNAL_OFFSET))(this, camera);
		}

		::System::Void AutoProfileCamera_Internal(::System::String* camName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_INTERNAL_OFFSET))(this, camName);
		}

		::System::Void BeginRenderPass(::System::Int32 width, ::System::Int32 height, ::System::Int32 samples, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor> attachments, ::System::Int32 depthAttachmentIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_OFFSET))(this, width, height, samples, attachments, depthAttachmentIndex);
		}

		::System::Void BeginSubPass(::Unity::Collections::NativeArray_1<::System::Int32> colors, ::Unity::Collections::NativeArray_1<::System::Int32> inputs, ::System::Boolean isDepthReadOnly)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Int32>, ::Unity::Collections::NativeArray_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_OFFSET))(this, colors, inputs, isDepthReadOnly);
		}

		::System::Void BeginSubPass_1(::Unity::Collections::NativeArray_1<::System::Int32> colors, ::System::Boolean isDepthReadOnly)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_1_OFFSET))(this, colors, isDepthReadOnly);
		}

		::System::Void EndSubPass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_OFFSET))(this);
		}

		::System::Void EndRenderPass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_OFFSET))(this);
		}

		::System::Int32 GetNumberOfCameras()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera(::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_OFFSET))(this, index);
		}

		::System::Void DrawRenderers(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET))(this, cullingResults, drawingSettings, filteringSettings);
		}

		::System::Void DrawRenderers_1(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings, ::UnityEngine::Rendering::RenderStateBlock& stateBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&, ::UnityEngine::Rendering::RenderStateBlock&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_1_OFFSET))(this, cullingResults, drawingSettings, filteringSettings, stateBlock);
		}

		::System::Void DrawHizDebugRenderers(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings, ::UnityEngine::Rendering::RenderStateBlock& stateBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&, ::UnityEngine::Rendering::RenderStateBlock&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWHIZDEBUGRENDERERS_OFFSET))(this, cullingResults, drawingSettings, filteringSettings, stateBlock);
		}

		::System::Void DrawShadows(::UnityEngine::Rendering::ShadowDrawingSettings& settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowDrawingSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_OFFSET))(this, settings);
		}

		::System::Void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* commandBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET))(this, commandBuffer);
		}

		::System::Void ExecuteAndClearCommandBuffer(::UnityEngine::Rendering::CommandBuffer* commandBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTEANDCLEARCOMMANDBUFFER_OFFSET))(this, commandBuffer);
		}

		::System::Void ExecuteSRPCmdBuffer(::UnityEngine::Rendering::SRPCmdBuffer* srpCmdBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::SRPCmdBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_OFFSET))(this, srpCmdBuffer);
		}

		::System::Void SetupCameraProperties(::UnityEngine::Camera* camera, ::System::Boolean stereoSetup, ::System::Int32 eye)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_OFFSET))(this, camera, stereoSetup, eye);
		}

		::System::Void InvokeOnRenderObjectCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_OFFSET))(this);
		}

		::UnityEngine::Rendering::CullingResults Cull(::UnityEngine::Rendering::ScriptableCullingParameters& parameters)
		{
			return ((::UnityEngine::Rendering::CullingResults(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CULL_OFFSET))(this, parameters);
		}

		::System::Void HZBCullingReadback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_OFFSET))(this);
		}

		::System::Void BeginRenderQuery(::UnityEngine::Camera* camera, ::System::Int32 nameID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_OFFSET))(this, camera, nameID);
		}

		::System::Void EndRenderQuery(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_OFFSET))(this, camera);
		}

		::System::Void UpdateKodamaLighting_BakedOnly(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_OFFSET))(this, camera);
		}

		::System::Void AutoProfileCamera(::System::String* camName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_OFFSET))(this, camName);
		}

		/*
		::System::Boolean Equals(::UnityEngine::Rendering::ScriptableRenderContext other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Void Internal_Cull_Injected(::UnityEngine::Rendering::ScriptableCullingParameters& parameters, ::UnityEngine::Rendering::ScriptableRenderContext& renderLoop, ::System::IntPtr results)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::Rendering::ScriptableRenderContext&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_INJECTED_OFFSET))(parameters, renderLoop, results);
		}
		*/

		/*
		static ::System::Void Submit_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_INJECTED_OFFSET))(_unity_self);
		}
		*/

		/*
		static ::System::Int32 GetNumberOfCameras_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_INJECTED_OFFSET))(_unity_self);
		}
		*/

		/*
		static ::UnityEngine::Camera* GetCamera_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_INJECTED_OFFSET))(_unity_self, index);
		}
		*/

		/*
		static ::System::Void DrawRenderers_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::IntPtr cullResults, ::UnityEngine::Rendering::DrawingSettings& drawingSettings, ::UnityEngine::Rendering::FilteringSettings& filteringSettings, ::System::IntPtr renderTypes, ::System::IntPtr stateBlocks, ::System::Int32 stateCount, ::System::Boolean hizDebug)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::IntPtr, ::UnityEngine::Rendering::DrawingSettings&, ::UnityEngine::Rendering::FilteringSettings&, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_INJECTED_OFFSET))(_unity_self, cullResults, drawingSettings, filteringSettings, renderTypes, stateBlocks, stateCount, hizDebug);
		}
		*/

		/*
		static ::System::Void DrawShadows_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::IntPtr shadowDrawingSettings)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_INJECTED_OFFSET))(_unity_self, shadowDrawingSettings);
		}
		*/

		/*
		static ::System::Void ExecuteCommandBuffer_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::System::Boolean clearMove)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET))(_unity_self, commandBuffer, clearMove);
		}
		*/

		/*
		static ::System::Void ExecuteSRPCmdBuffer_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Rendering::SRPCmdBuffer* srpCmdBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::SRPCmdBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTESRPCMDBUFFER_INTERNAL_INJECTED_OFFSET))(_unity_self, srpCmdBuffer);
		}
		*/

		/*
		static ::System::Void SetupCameraProperties_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Camera* camera, ::System::Boolean stereoSetup, ::System::Int32 eye)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_INJECTED_OFFSET))(_unity_self, camera, stereoSetup, eye);
		}
		*/

		/*
		static ::System::Void InvokeOnRenderObjectCallback_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_INJECTED_OFFSET))(_unity_self);
		}
		*/

		/*
		static ::System::Void HZBCullingReadback_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_HZBCULLINGREADBACK_INTERNAL_INJECTED_OFFSET))(_unity_self);
		}
		*/

		/*
		static ::System::Void BeginRenderQuery_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Camera* camera, ::System::Int32 nameID)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERQUERY_INTERNAL_INJECTED_OFFSET))(_unity_self, camera, nameID);
		}
		*/

		/*
		static ::System::Void EndRenderQuery_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERQUERY_INTERNAL_INJECTED_OFFSET))(_unity_self, camera);
		}
		*/

		/*
		static ::System::Void UpdateKodamaLighting_BakedOnly_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_UPDATEKODAMALIGHTING_BAKEDONLY_INTERNAL_INJECTED_OFFSET))(_unity_self, camera);
		}
		*/

		/*
		static ::System::Void AutoProfileCamera_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::String* camName)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_AUTOPROFILECAMERA_INTERNAL_INJECTED_OFFSET))(_unity_self, camName);
		}
		*/
	};
}
