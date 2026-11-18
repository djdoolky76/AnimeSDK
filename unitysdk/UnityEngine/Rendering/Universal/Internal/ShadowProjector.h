#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ShadowResolution.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class ShadowProjector_SliceData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_BINDPATH_OFFSET UNITYSDK_OFFSET(0x1E37CA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_DRAWPROJECTOR_OFFSET UNITYSDK_OFFSET(0x1E37DDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_GETFULLPATH_OFFSET UNITYSDK_OFFSET(0x1E37D2C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_NEEDBINDPATH_OFFSET UNITYSDK_OFFSET(0x1E37D550)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E37D240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1E37D880)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E37D140)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_PATHAUTOBIND_OFFSET UNITYSDK_OFFSET(0x1E37CA80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_PATHAUTOGENERATOR_OFFSET UNITYSDK_OFFSET(0x1E37C730)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_RECORDPATH_OFFSET UNITYSDK_OFFSET(0x1E37C6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_REGISTER_OFFSET UNITYSDK_OFFSET(0x1E37CEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_SETUPRENDERINGDATA_OFFSET UNITYSDK_OFFSET(0x1E37F300)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1E37D010)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_UPDATESLICEDATA_OFFSET UNITYSDK_OFFSET(0x1E37F3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37F580)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E37F4D0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ShadowProjector_TypeDefinitionIndex = 26617;

	class ShadowProjector : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_ShadowProjectorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ShadowProjector_TypeDefinitionIndex)->GetStaticField(0x23FE0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::ShadowProjector*>** StaticGet_s_ShadowCasterList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::ShadowProjector*>**)Il2CppClass::FromTypeDefinitionIndex(ShadowProjector_TypeDefinitionIndex)->GetStaticField(0x23FE8);
		}
		static ::System::Int32* StaticGet__ShadowTempBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShadowProjector_TypeDefinitionIndex)->GetStaticField(0x65D0);
		}
		::UnityEngine::ShadowResolution m_Resolution; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* m_TargetList; // 0x20
		::System::Boolean useCustomTargetListBounds; // 0x28
		::System::Byte _padding1[0x3];
		::UnityEngine::Bounds customTargetBoundsOffset; // 0x2C
		::System::Byte _padding2[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* m_ReceivePlane; // 0x48
		::System::Single m_ShadowIntensity; // 0x50
		::UnityEngine::Color m_ShadowColor; // 0x54
		::System::Single m_NormalBias; // 0x64
		::System::Single m_ShadowRadius; // 0x68
		::System::Int32 m_SampleCount; // 0x6C
		::System::Single m_ShadowScale; // 0x70
		::UnityEngine::Vector2 m_ShadowOffset; // 0x74
		::System::Byte _padding3[0x4];
		::Il2CppArray<::System::String*>* m_TargetListPath; // 0x80
		::Il2CppArray<::System::String*>* m_ReceivePlanePath; // 0x88
		::UnityEngine::Rendering::Universal::Internal::ShadowProjector_SliceData* sliceData; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR__CCTOR_OFFSET))();
		}

		::System::Void RecordPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_RECORDPATH_OFFSET))(this);
		}

		::System::Void BindPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_BINDPATH_OFFSET))(this);
		}

		static ::System::Void Register(::UnityEngine::Rendering::Universal::Internal::ShadowProjector* light)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::ShadowProjector*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_REGISTER_OFFSET))(light);
		}

		static ::System::Void UnRegister(::UnityEngine::Rendering::Universal::Internal::ShadowProjector* light)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::ShadowProjector*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_UNREGISTER_OFFSET))(light);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_ONDISABLE_OFFSET))(this);
		}

		static ::System::String* GetFullPath(::UnityEngine::GameObject* obj)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_GETFULLPATH_OFFSET))(obj);
		}

		::System::Void NeedBindPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_NEEDBINDPATH_OFFSET))(this);
		}

		::System::Void PathAutoBind(::Il2CppArray<::UnityEngine::Renderer*>*& targetList, ::Il2CppArray<::System::String*>*& targetListPath)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*&, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_PATHAUTOBIND_OFFSET))(this, targetList, targetListPath);
		}

		::System::Void PathAutoGenerator(::Il2CppArray<::UnityEngine::Renderer*>*& targetList, ::Il2CppArray<::System::String*>*& targetListPath)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*&, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_PATHAUTOGENERATOR_OFFSET))(this, targetList, targetListPath);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void DrawProjector(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_DRAWPROJECTOR_OFFSET))(this, cmd, cameraData, colorBuffer, depthBuffer);
		}

		::System::Void UpdateSliceData(::UnityEngine::Camera* camera, ::System::Int32 shadowMapSize, ::UnityEngine::Quaternion lightRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_UPDATESLICEDATA_OFFSET))(this, camera, shadowMapSize, lightRotation);
		}

		::System::Void SetupRenderingData(::UnityEngine::Camera* camera, ::System::Int32 shadowMapSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SHADOWPROJECTOR_SETUPRENDERINGDATA_OFFSET))(this, camera, shadowMapSize);
		}
	};
}
