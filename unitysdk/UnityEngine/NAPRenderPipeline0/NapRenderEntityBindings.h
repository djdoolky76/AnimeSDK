#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapLightData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapRenderEntityBindings_SerializedData.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_ADDINDICATEDLIGHT_OFFSET UNITYSDK_OFFSET(0x1EF777E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CHECKSERIALIZEDDATALAYOUT_OFFSET UNITYSDK_OFFSET(0x1EF77840)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CLEARINDICATEDLIGHTS_OFFSET UNITYSDK_OFFSET(0x1EF777F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EF77680)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EF77690)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISACTIVE_OFFSET UNITYSDK_OFFSET(0x1EF777B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISCURFRAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1EF777D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISVISIBLEINCURRENTCAM_OFFSET UNITYSDK_OFFSET(0x1EF777C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETRENDERERHANDLES_OFFSET UNITYSDK_OFFSET(0x1EF77800)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETZDISTANCETOCAMERA_OFFSET UNITYSDK_OFFSET(0x1EF777A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETBAKEDOBJECTSPACECULLINGSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EF77790)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETBAKEDOBJECTSPACECULLINGSPHERE_OFFSET UNITYSDK_OFFSET(0x1EF77780)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETBONETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1EF77820)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETCAMERAPOSITIONWS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EF77730)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETCAMERAPOSITIONWS_OFFSET UNITYSDK_OFFSET(0x1EF77720)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETCHARACTERMAINLIGHTDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EF77760)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETCHARACTERMAINLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1EF77750)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETDIRECTIONOVERRIDELIGHTINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1EF77710)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1EF77700)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETFLAGS_OFFSET UNITYSDK_OFFSET(0x1EF77830)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETISCUTSCENEMODE_OFFSET UNITYSDK_OFFSET(0x1EF776E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETLIGHTDIRECTIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1EF77740)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETOVERRIDENMAINLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1EF77810)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETPEROBJECTSHADOWRESOLVEALPHA_OFFSET UNITYSDK_OFFSET(0x1EF776F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1EF776B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUP_OFFSET UNITYSDK_OFFSET(0x1EF776A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUSEBAKEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EF77770)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUSEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1EF776D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETVISIBILITYREFCOUNTER_OFFSET UNITYSDK_OFFSET(0x1EF776C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapRenderEntityBindings_TypeDefinitionIndex = 6132;

	class NapRenderEntityBindings : public ::System::Object
	{
	public:
		static ::System::IntPtr Internal_CreateNativeObject(::System::Object* managed, ::System::Int32 instanceID)
		{
			return ((::System::IntPtr(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET))(managed, instanceID);
		}

		static ::System::Void Internal_DestroyNativeObject(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET))(nativeHandle);
		}

		static ::System::Boolean Internal_Setup(::System::IntPtr nativeHandle, ::UnityEngine::GameObject* gameObject, ::System::Int32 priority, ::System::UInt32 flags, ::UnityEngine::NAPRenderPipeline0::NapRenderEntityBindings_SerializedData& serializedData)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::UnityEngine::GameObject*, ::System::Int32, ::System::UInt32, ::UnityEngine::NAPRenderPipeline0::NapRenderEntityBindings_SerializedData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUP_OFFSET))(nativeHandle, gameObject, priority, flags, serializedData);
		}

		static ::System::Void Internal_SetPriority(::System::IntPtr nativeHandle, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETPRIORITY_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetVisibilityRefCounter(::System::IntPtr nativeHandle, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETVISIBILITYREFCOUNTER_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetUsePerObjectShadow(::System::IntPtr nativeHandle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUSEPEROBJECTSHADOW_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetIsCutSceneMode(::System::IntPtr nativeHandle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETISCUTSCENEMODE_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetPerObjectShadowResolveAlpha(::System::IntPtr nativeHandle, ::System::Single perObjectShadowResolveAlpha)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETPEROBJECTSHADOWRESOLVEALPHA_OFFSET))(nativeHandle, perObjectShadowResolveAlpha);
		}

		static ::System::Void Internal_SetEntityType(::System::IntPtr nativeHandle, ::System::Int32 entityType)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETENTITYTYPE_OFFSET))(nativeHandle, entityType);
		}

		static ::System::Void Internal_SetDirectionOverrideLightInstanceID(::System::IntPtr nativeHandle, ::System::Int32 instanceID)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETDIRECTIONOVERRIDELIGHTINSTANCEID_OFFSET))(nativeHandle, instanceID);
		}

		static ::System::Void Internal_SetCameraPositionWS(::System::IntPtr nativeHandle, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETCAMERAPOSITIONWS_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetLightDirectionFromCamera(::System::IntPtr nativeHandle, ::System::Single value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETLIGHTDIRECTIONFROMCAMERA_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetCharacterMainLightData(::System::IntPtr nativeHandle, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETCHARACTERMAINLIGHTDATA_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetUseBakedBounds(::System::IntPtr nativeHandle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETUSEBAKEDBOUNDS_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetBakedObjectSpaceCullingSphere(::System::IntPtr nativeHandle, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETBAKEDOBJECTSPACECULLINGSPHERE_OFFSET))(nativeHandle, value);
		}

		static ::System::Single Internal_GetZDistanceToCamera(::System::IntPtr nativeHandle)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETZDISTANCETOCAMERA_OFFSET))(nativeHandle);
		}

		static ::System::Boolean Internal_GetIsActive(::System::IntPtr nativeHandle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISACTIVE_OFFSET))(nativeHandle);
		}

		static ::System::Boolean Internal_GetIsVisibleInCurrentCam(::System::IntPtr nativeHandle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISVISIBLEINCURRENTCAM_OFFSET))(nativeHandle);
		}

		static ::System::Boolean Internal_GetIsCurFrameVisible(::System::IntPtr nativeHandle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETISCURFRAMEVISIBLE_OFFSET))(nativeHandle);
		}

		static ::System::Boolean Internal_AddIndicatedLight(::System::IntPtr nativeHandle, ::UnityEngine::NAPRenderPipeline0::NapLightData& lightData)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::UnityEngine::NAPRenderPipeline0::NapLightData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_ADDINDICATEDLIGHT_OFFSET))(nativeHandle, lightData);
		}

		static ::System::Void Internal_ClearIndicatedLights(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CLEARINDICATEDLIGHTS_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_GetRendererHandles(::System::IntPtr nativeHandle, ::Il2CppArray<::System::IntPtr>* rendererHandles)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_GETRENDERERHANDLES_OFFSET))(nativeHandle, rendererHandles);
		}

		static ::System::Void Internal_SetOverridenMainLightColor(::System::IntPtr nativeHandle, ::UnityEngine::Vector4& color, ::System::Boolean isOverridden)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETOVERRIDENMAINLIGHTCOLOR_OFFSET))(nativeHandle, color, isOverridden);
		}

		static ::System::Void Internal_SetBoneTransforms(::System::IntPtr nativeHandle, ::UnityEngine::Vector3& middlePoint, ::UnityEngine::Vector3& headPosition, ::UnityEngine::Vector3& headForward, ::UnityEngine::Matrix4x4& headBoneLocalToWorldMatrix)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETBONETRANSFORMS_OFFSET))(nativeHandle, middlePoint, headPosition, headForward, headBoneLocalToWorldMatrix);
		}

		static ::System::Void Internal_SetFlags(::System::IntPtr nativeHandle, ::System::UInt32 flags, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETFLAGS_OFFSET))(nativeHandle, flags, value);
		}

		static ::System::Boolean Internal_CheckSerializedDataLayout(::UnityEngine::NAPRenderPipeline0::NapRenderEntityBindings_SerializedData& data, ::System::Int32& mismatchField, ::System::Single& expected, ::System::Single& actual, ::System::Int32& nativeOffset)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::NapRenderEntityBindings_SerializedData&, ::System::Int32&, ::System::Single&, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_CHECKSERIALIZEDDATALAYOUT_OFFSET))(data, mismatchField, expected, actual, nativeOffset);
		}

		static ::System::Void Internal_SetCameraPositionWS_Injected(::System::IntPtr nativeHandle, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETCAMERAPOSITIONWS_INJECTED_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetCharacterMainLightData_Injected(::System::IntPtr nativeHandle, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETCHARACTERMAINLIGHTDATA_INJECTED_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetBakedObjectSpaceCullingSphere_Injected(::System::IntPtr nativeHandle, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERENTITYBINDINGS_INTERNAL_SETBAKEDOBJECTSPACECULLINGSPHERE_INJECTED_OFFSET))(nativeHandle, value);
		}
	};
}
