#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define ETHEREYEWIREMATSETUP_CLOSEVISION_OFFSET UNITYSDK_OFFSET(0x158C7FA0)
#define ETHEREYEWIREMATSETUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x158C81F0)
#define ETHEREYEWIREMATSETUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x158C7B90)
#define ETHEREYEWIREMATSETUP_OPENVISION_OFFSET UNITYSDK_OFFSET(0x158C8500)
#define ETHEREYEWIREMATSETUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x158C8800)
#define ETHEREYEWIREMATSETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x158C8720)

inline static constexpr unsigned int EtherEyeWireMatSetup_TypeDefinitionIndex = 68298;

class EtherEyeWireMatSetup : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_matHandles()
	{
		return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeWireMatSetup_TypeDefinitionIndex)->GetStaticField(0x31890);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_pathMats()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeWireMatSetup_TypeDefinitionIndex)->GetStaticField(0x31898);
	}
	static ::System::Int32* StaticGet_pathCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeWireMatSetup_TypeDefinitionIndex)->GetStaticField(0xA7B0);
	}
	static ::System::Boolean* StaticGet_pathMatLoaded()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeWireMatSetup_TypeDefinitionIndex)->GetStaticField(0xA7B4);
	}
	// static const ::System::String* configPath; // 0x0
	::System::Int32 _AlphaSphereFadeOut; // 0x18
	::System::Int32 _AlphaSphereFadeCenter; // 0x1C
	::MoleMole::Config::ConfigEtherEyes* config; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* materialPaths; // 0x28
	::Il2CppArray<::UnityEngine::Material*>* mats; // 0x30
	::System::Single visibleRange; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEWIREMATSETUP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ETHEREYEWIREMATSETUP__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEWIREMATSETUP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEWIREMATSETUP_ONDISABLE_OFFSET))(this);
	}

	::System::Void OpenVision()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEWIREMATSETUP_OPENVISION_OFFSET))(this);
	}

	::System::Void CloseVision()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYEWIREMATSETUP_CLOSEVISION_OFFSET))(this);
	}
};
