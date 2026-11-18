#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PerObjectShadowConfig.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShaderFeatureMapping.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_CREATE_OFFSET UNITYSDK_OFFSET(0x1EC91070)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1EC91210)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETFAILEDATLASCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC92030)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETFAILEDATLASSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EC92190)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETFINALVISIBLEPOSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC91D40)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETFINALVISIBLEPOSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EC91EA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETINSTANCEHANDLE_OFFSET UNITYSDK_OFFSET(0x1EC912B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETMONOPOSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC91A50)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETMONOPOSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EC91BB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETPOSSORTSNAPSHOTMETA_OFFSET UNITYSDK_OFFSET(0x1EC92320)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETPOSSORTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EC92490)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EC917D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EC90EC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EC90ED0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETFAILEDATLASCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC91020)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETFAILEDATLASSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EC91030)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETFINALVISIBLEPOSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC91000)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETFINALVISIBLEPOSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EC91010)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EC90EE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETMONOPOSCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC90FE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETMONOPOSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EC90FF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETPOSSORTSNAPSHOTMETA_OFFSET UNITYSDK_OFFSET(0x1EC91040)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETPOSSORTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1EC91050)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETSETTINGS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EC90FB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EC90F00)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_SETSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EC90EF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_SETSHADERFEATUREMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1EC91060)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_UPDATEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1EC90FD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0x1EC90FC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_SETSHADERFEATUREMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1EC926C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1EC914F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATESETTINGS_OFFSET UNITYSDK_OFFSET(0x1EC91660)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0x1EC91360)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC92930)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerObjectShadowBindings_TypeDefinitionIndex = 6137;

	class PerObjectShadowBindings : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_s_Instance()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowBindings_TypeDefinitionIndex)->GetStaticField(0x2E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS__CCTOR_OFFSET))();
		}

		static ::System::IntPtr Internal_CreateNativeObject(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig& settings)
		{
			return ((::System::IntPtr(*)(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_CREATENATIVEOBJECT_OFFSET))(settings);
		}

		static ::System::Void Internal_DestroyNativeObject(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_DESTROYNATIVEOBJECT_OFFSET))(nativeHandle);
		}

		static ::System::IntPtr Internal_GetInstance()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETINSTANCE_OFFSET))();
		}

		static ::System::Void Internal_SetSettings(::System::IntPtr nativeHandle, ::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig& settings)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_SETSETTINGS_OFFSET))(nativeHandle, settings);
		}

		static ::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig Internal_GetSettings(::System::IntPtr nativeHandle)
		{
			return ((::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETSETTINGS_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_UpdateTargets(::System::IntPtr nativeHandle, ::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_UPDATETARGETS_OFFSET))(nativeHandle, camera, renderingData, postCullRenderingData);
		}

		static ::System::Void Internal_UpdatePerObjectShadow(::System::IntPtr nativeHandle, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_UPDATEPEROBJECTSHADOW_OFFSET))(nativeHandle, postCullRenderingData);
		}

		static ::System::Int32 Internal_GetMonoPOSCount(::System::IntPtr nativeHandle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETMONOPOSCOUNT_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_GetMonoPOSSnapshot(::System::IntPtr nativeHandle, ::Il2CppArray<::System::Int32>* componentIDs, ::Il2CppArray<::System::Int32>* rootIDs, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETMONOPOSSNAPSHOT_OFFSET))(nativeHandle, componentIDs, rootIDs, maxCount);
		}

		static ::System::Int32 Internal_GetFinalVisiblePOSCount(::System::IntPtr nativeHandle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETFINALVISIBLEPOSCOUNT_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_GetFinalVisiblePOSSnapshot(::System::IntPtr nativeHandle, ::Il2CppArray<::System::Int32>* entityTypes, ::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Int32>* entityIDs, ::Il2CppArray<::System::Int32>* cullResults, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETFINALVISIBLEPOSSNAPSHOT_OFFSET))(nativeHandle, entityTypes, rootIDs, entityIDs, cullResults, maxCount);
		}

		static ::System::Int32 Internal_GetFailedAtlasCount(::System::IntPtr nativeHandle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETFAILEDATLASCOUNT_OFFSET))(nativeHandle);
		}

		static ::System::Void Internal_GetFailedAtlasSnapshot(::System::IntPtr nativeHandle, ::Il2CppArray<::System::Int32>* entityTypes, ::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Int32>* entityIDs, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETFAILEDATLASSNAPSHOT_OFFSET))(nativeHandle, entityTypes, rootIDs, entityIDs, maxCount);
		}

		static ::System::Void Internal_GetPOSSortSnapshotMeta(::System::IntPtr nativeHandle, ::Il2CppArray<::System::Int32>* meta)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETPOSSORTSNAPSHOTMETA_OFFSET))(nativeHandle, meta);
		}

		static ::System::Void Internal_GetPOSSortSnapshot(::System::IntPtr nativeHandle, ::Il2CppArray<::System::Int32>* entityTypes, ::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Int32>* entityIDs, ::Il2CppArray<::System::Int32>* cullResults, ::Il2CppArray<::System::Int32>* priorities, ::Il2CppArray<::System::Single>* sortPriorities, ::Il2CppArray<::System::Single>* alphas, ::Il2CppArray<::System::Int32>* fadeTargets, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETPOSSORTSNAPSHOT_OFFSET))(nativeHandle, entityTypes, rootIDs, entityIDs, cullResults, priorities, sortPriorities, alphas, fadeTargets, maxCount);
		}

		static ::System::Void Internal_SetShaderFeatureMappings(::System::IntPtr nativeHandle, ::Il2CppArray<::System::String*>* shaderNames, ::Il2CppArray<::System::UInt32>* features, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_SETSHADERFEATUREMAPPINGS_OFFSET))(nativeHandle, shaderNames, features, count);
		}

		static ::System::Void Create(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig settings)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_CREATE_OFFSET))(settings);
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_DESTROY_OFFSET))();
		}

		static ::System::IntPtr GetInstanceHandle()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETINSTANCEHANDLE_OFFSET))();
		}

		static ::System::Void UpdateTargets(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATETARGETS_OFFSET))(camera, renderingData, postCullRenderingData);
		}

		static ::System::Void UpdatePerObjectShadow(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATEPEROBJECTSHADOW_OFFSET))(postCullRenderingData);
		}

		static ::System::Void UpdateSettings(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig settings)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_UPDATESETTINGS_OFFSET))(settings);
		}

		static ::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig GetSettings()
		{
			return ((::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETSETTINGS_OFFSET))();
		}

		static ::System::Int32 GetMonoPOSCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETMONOPOSCOUNT_OFFSET))();
		}

		static ::System::Void GetMonoPOSSnapshot(::Il2CppArray<::System::Int32>* componentIDs, ::Il2CppArray<::System::Int32>* rootIDs, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETMONOPOSSNAPSHOT_OFFSET))(componentIDs, rootIDs, maxCount);
		}

		static ::System::Int32 GetFinalVisiblePOSCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETFINALVISIBLEPOSCOUNT_OFFSET))();
		}

		static ::System::Void GetFinalVisiblePOSSnapshot(::Il2CppArray<::System::Int32>* entityTypes, ::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Int32>* entityIDs, ::Il2CppArray<::System::Int32>* cullResults, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETFINALVISIBLEPOSSNAPSHOT_OFFSET))(entityTypes, rootIDs, entityIDs, cullResults, maxCount);
		}

		static ::System::Int32 GetFailedAtlasCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETFAILEDATLASCOUNT_OFFSET))();
		}

		static ::System::Void GetFailedAtlasSnapshot(::Il2CppArray<::System::Int32>* entityTypes, ::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Int32>* entityIDs, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETFAILEDATLASSNAPSHOT_OFFSET))(entityTypes, rootIDs, entityIDs, maxCount);
		}

		static ::System::Void GetPOSSortSnapshotMeta(::Il2CppArray<::System::Int32>* meta)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETPOSSORTSNAPSHOTMETA_OFFSET))(meta);
		}

		static ::System::Void GetPOSSortSnapshot(::Il2CppArray<::System::Int32>* entityTypes, ::Il2CppArray<::System::Int32>* rootIDs, ::Il2CppArray<::System::Int32>* entityIDs, ::Il2CppArray<::System::Int32>* cullResults, ::Il2CppArray<::System::Int32>* priorities, ::Il2CppArray<::System::Single>* sortPriorities, ::Il2CppArray<::System::Single>* alphas, ::Il2CppArray<::System::Int32>* fadeTargets, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_GETPOSSORTSNAPSHOT_OFFSET))(entityTypes, rootIDs, entityIDs, cullResults, priorities, sortPriorities, alphas, fadeTargets, maxCount);
		}

		static ::System::Void SetShaderFeatureMappings(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ShaderFeatureMapping>* mappings)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ShaderFeatureMapping>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_SETSHADERFEATUREMAPPINGS_OFFSET))(mappings);
		}

		static ::System::Void Internal_GetSettings_Injected(::System::IntPtr nativeHandle, ::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig& ret)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::NAPRenderPipeline0::PerObjectShadowConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWBINDINGS_INTERNAL_GETSETTINGS_INJECTED_OFFSET))(nativeHandle, ret);
		}
	};
}
