#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::CustomRP { class CRPRendererData; }
namespace System { class Type; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD5100)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD2D00)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1DDD3F80)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETMESH_OFFSET UNITYSDK_OFFSET(0x1DDD3940)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x1DDD2F80)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DDD2F40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugWireframePass_TypeDefinitionIndex = 38493;

	class DebugWireframePass : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Type*>* _ColliderTypes; // 0x10
		::UnityEngine::Material* _DebugWireframeMatLegacy; // 0x18
		::UnityEngine::Material* _DebugWireframeMat; // 0x20
		::System::Int32 _WireColorTmpRT; // 0x28
		::System::Int32 _WireColor; // 0x2C
		::System::Int32 _WireframeTmpRT; // 0x30
		::UnityEngine::RenderTextureDescriptor _TargetDesc; // 0x34
		static ::System::Type** StaticGet_colliderType()
		{
			return (::System::Type**)UnitySDK::FromName("RPG.CustomRP", "DebugWireframePass")->GetStaticField(0x2A390);
		}

		static ::System::Boolean* StaticGet_EnableDebugColliderWireframe()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "DebugWireframePass")->GetStaticField(0x8820);
		}

		static ::System::Int32* StaticGet_layer()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "DebugWireframePass")->GetStaticField(0x8824);
		}

		::System::Void _ctor(::RPG::CustomRP::CRPRendererData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_CCTOR_OFFSET))();
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_UPDATE_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_INNEREXECUTE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Mesh* GetMesh(::UnityEngine::Collider* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETMESH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color GetColor(::UnityEngine::Collider* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETCOLOR_OFFSET))(this, a1);
		}

	};
}
