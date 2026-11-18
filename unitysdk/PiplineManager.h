#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define PIPLINEMANAGER_CACHERENDERERS_OFFSET UNITYSDK_OFFSET(0x1D63B900)
#define PIPLINEMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D63B870)
#define PIPLINEMANAGER_REFRESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1D63C3C0)
#define PIPLINEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D63BFA0)
#define PIPLINEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D63C470)
#define PIPLINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D63C410)

inline static constexpr unsigned int PiplineManager_TypeDefinitionIndex = 45297;

class PiplineManager : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet_TargetShaderName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x4B2F0);
	}
	static ::System::Int32* StaticGet_EffectRadiusID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x11670);
	}
	static ::System::Int32* StaticGet_DisplacementStrengthID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x11674);
	}
	static ::System::Int32* StaticGet_RadiusFixID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x11678);
	}
	static ::System::Int32* StaticGet_CharacterPosID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PiplineManager_TypeDefinitionIndex)->GetStaticField(0x1167C);
	}
	::UnityEngine::GameObject* characterProxy; // 0x18
	::System::Single effectRadius; // 0x20
	::System::Single displacementStrength; // 0x24
	::System::Single radiusFix; // 0x28
	::System::Byte _padding0[0x4];
	::UnityEngine::MaterialPropertyBlock* _mpb; // 0x30
	::Il2CppArray<::UnityEngine::Renderer*>* _renderers; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPLINEMANAGER__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER_UPDATE_OFFSET))(this);
	}

	::System::Void CacheRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER_CACHERENDERERS_OFFSET))(this);
	}

	::System::Void RefreshRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLINEMANAGER_REFRESHRENDERERS_OFFSET))(this);
	}
};
