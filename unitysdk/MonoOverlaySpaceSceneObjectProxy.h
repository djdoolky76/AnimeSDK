#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoOverlaySpaceSceneObjectProxy_TargetState.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/StencilComFunc.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MeshRenderer; }

#define MONOOVERLAYSPACESCENEOBJECTPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C825D10)
#define MONOOVERLAYSPACESCENEOBJECTPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C825B40)
#define MONOOVERLAYSPACESCENEOBJECTPROXY_SETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1C826030)
#define MONOOVERLAYSPACESCENEOBJECTPROXY_SETTOTARGETSTATE_OFFSET UNITYSDK_OFFSET(0x1C825C10)
#define MONOOVERLAYSPACESCENEOBJECTPROXY_SETUNVISIBLEFROMMIRRORSPACE_OFFSET UNITYSDK_OFFSET(0x1C825EF0)
#define MONOOVERLAYSPACESCENEOBJECTPROXY_SETVISIBLEFROMMIRRORSPACE_OFFSET UNITYSDK_OFFSET(0x1C825E90)
#define MONOOVERLAYSPACESCENEOBJECTPROXY_SETVISIBLENORMAL_OFFSET UNITYSDK_OFFSET(0x1C825E30)
#define MONOOVERLAYSPACESCENEOBJECTPROXY_TRYREBINDCHILDRENDERER_OFFSET UNITYSDK_OFFSET(0x1C825F50)
#define MONOOVERLAYSPACESCENEOBJECTPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C826740)
#define MONOOVERLAYSPACESCENEOBJECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8266F0)

inline static constexpr unsigned int MonoOverlaySpaceSceneObjectProxy_TypeDefinitionIndex = 27042;

class MonoOverlaySpaceSceneObjectProxy : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__StencilReadMask()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoOverlaySpaceSceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x76E0);
	}
	static ::System::Int32* StaticGet__StencilCompFunc()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoOverlaySpaceSceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x76E4);
	}
	static ::System::Int32* StaticGet_s_NeedClearStencil421Count()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoOverlaySpaceSceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x76E8);
	}
	static ::System::Int32* StaticGet__SceneStencil()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoOverlaySpaceSceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x76EC);
	}
	static ::System::Int32* StaticGet__StencilWriteMask()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoOverlaySpaceSceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x76F0);
	}
	::MonoOverlaySpaceSceneObjectProxy_TargetState targetState; // 0x18
	::System::Byte _padding0[0x4];
	::Il2CppArray<::UnityEngine::MeshRenderer*>* m_ChildRenderers; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY_ONDISABLE_OFFSET))(this);
	}

	::System::Void SetToTargetState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY_SETTOTARGETSTATE_OFFSET))(this);
	}

	::System::Void TryRebindChildRenderer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY_TRYREBINDCHILDRENDERER_OFFSET))(this);
	}

	::System::Void SetVisibleFromMirrorSpace()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY_SETVISIBLEFROMMIRRORSPACE_OFFSET))(this);
	}

	::System::Void SetUnVisibleFromMirrorSpace()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY_SETUNVISIBLEFROMMIRRORSPACE_OFFSET))(this);
	}

	::System::Void SetVisibleNormal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY_SETVISIBLENORMAL_OFFSET))(this);
	}

	::System::Void SetMaterials(::System::Int32 sceneStencil, ::System::Int32 writeMask, ::System::Int32 readMask, ::UnityEngine::NAPRenderPipeline0::StencilComFunc compFunc)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::StencilComFunc))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTPROXY_SETMATERIALS_OFFSET))(this, sceneStencil, writeMask, readMask, compFunc);
	}
};
