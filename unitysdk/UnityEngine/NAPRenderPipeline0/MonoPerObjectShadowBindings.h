#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MonoPerObjectShadowBindings_NativeSerializedData.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_CHECKMONOSERIALIZEDDATALAYOUT_OFFSET UNITYSDK_OFFSET(0x1E84E560)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E84E4D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E84E4E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E84E500)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E84E4F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SETBAKEDOBJECTSPACECULLINGSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E84E550)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SETBAKEDOBJECTSPACECULLINGSPHERE_OFFSET UNITYSDK_OFFSET(0x1E84E540)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SETPEROBJECTSHADOWRESOLVEALPHA_OFFSET UNITYSDK_OFFSET(0x1E84E520)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SETUSEBAKEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E84E530)
#define UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SYNCSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x1E84E510)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MonoPerObjectShadowBindings_TypeDefinitionIndex = 6130;

	class MonoPerObjectShadowBindings : public ::System::Object
	{
	public:
		static ::System::IntPtr Internal_CreateNativeObject(::System::Object* managed, ::System::Int32 instanceID)
		{
			return ((::System::IntPtr(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET))(managed, instanceID);
		}

		static ::System::Void Internal_DestroyNativeObject(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_OnEnable(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_ONENABLE_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_OnDisable(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_ONDISABLE_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_SyncSerializedData(::System::IntPtr nativeHandle, ::UnityEngine::NAPRenderPipeline0::MonoPerObjectShadowBindings_NativeSerializedData& data)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::NAPRenderPipeline0::MonoPerObjectShadowBindings_NativeSerializedData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SYNCSERIALIZEDDATA_OFFSET))(nativeHandle, data);
		}

		static ::System::Void Internal_SetPerObjectShadowResolveAlpha(::System::IntPtr nativeHandle, ::System::Single alpha)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SETPEROBJECTSHADOWRESOLVEALPHA_OFFSET))(nativeHandle, alpha);
		}

		static ::System::Void Internal_SetUseBakedBounds(::System::IntPtr nativeHandle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SETUSEBAKEDBOUNDS_OFFSET))(nativeHandle, value);
		}

		static ::System::Void Internal_SetBakedObjectSpaceCullingSphere(::System::IntPtr nativeHandle, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SETBAKEDOBJECTSPACECULLINGSPHERE_OFFSET))(nativeHandle, value);
		}

		static ::System::Boolean Internal_CheckMonoSerializedDataLayout(::UnityEngine::NAPRenderPipeline0::MonoPerObjectShadowBindings_NativeSerializedData& data, ::System::Int32& mismatchField, ::System::Single& expected, ::System::Single& actual, ::System::Int32& nativeOffset)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::MonoPerObjectShadowBindings_NativeSerializedData&, ::System::Int32&, ::System::Single&, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_CHECKMONOSERIALIZEDDATALAYOUT_OFFSET))(data, mismatchField, expected, actual, nativeOffset);
		}

		static ::System::Void Internal_SetBakedObjectSpaceCullingSphere_Injected(::System::IntPtr nativeHandle, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MONOPEROBJECTSHADOWBINDINGS_INTERNAL_SETBAKEDOBJECTSPACECULLINGSPHERE_INJECTED_OFFSET))(nativeHandle, value);
		}
	};
}
