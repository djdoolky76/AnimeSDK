#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_MATERIALOVERRIDESET_ADDOVERRIDE_OFFSET UNITYSDK_OFFSET(0x20029980)
#define SPINE_UNITY_MATERIALOVERRIDESET_APPLYOVERRIDETO_OFFSET UNITYSDK_OFFSET(0x20029CF0)
#define SPINE_UNITY_MATERIALOVERRIDESET_REMOVEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x20029A00)
#define SPINE_UNITY_MATERIALOVERRIDESET_SETOVERRIDE_OFFSET UNITYSDK_OFFSET(0x20029BA0)
#define SPINE_UNITY_MATERIALOVERRIDESET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20029810)
#define SPINE_UNITY_MATERIALOVERRIDESET__CTOR_OFFSET UNITYSDK_OFFSET(0x20029730)

namespace Spine::Unity
{
	inline static constexpr unsigned int MaterialOverrideSet_TypeDefinitionIndex = 38103;

	class MaterialOverrideSet : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* dictionaryKeys; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* dictionaryValues; // 0x20

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALOVERRIDESET__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Spine::Unity::MaterialOverrideSet* src)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MaterialOverrideSet*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALOVERRIDESET__CTOR_1_OFFSET))(this, src);
		}

		::System::Void AddOverride(::UnityEngine::Material* originalMaterial, ::UnityEngine::Material* overrideMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALOVERRIDESET_ADDOVERRIDE_OFFSET))(this, originalMaterial, overrideMaterial);
		}

		::System::Void RemoveOverride(::UnityEngine::Material* originalMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALOVERRIDESET_REMOVEOVERRIDE_OFFSET))(this, originalMaterial);
		}

		::System::Void SetOverride(::UnityEngine::Material* originalMaterial, ::UnityEngine::Material* overrideMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALOVERRIDESET_SETOVERRIDE_OFFSET))(this, originalMaterial, overrideMaterial);
		}

		::System::Void ApplyOverrideTo(::Il2CppArray<::UnityEngine::Material*>* materials)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALOVERRIDESET_APPLYOVERRIDETO_OFFSET))(this, materials);
		}
	};
}
