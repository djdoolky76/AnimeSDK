#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x41FB030)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x41FB070)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_MATERIALHASHCODE_OFFSET UNITYSDK_OFFSET(0x41FB0A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x169C070)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x3559240)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x17D6430)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_MATERIALHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E962E0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextAsset_TypeDefinitionIndex = 18729;

	class TextAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* m_Version; // 0x18
		::System::Int32 m_InstanceID; // 0x20
		::System::Int32 m_HashCode; // 0x24
		::UnityEngine::Material* m_Material; // 0x28
		::System::Int32 m_MaterialHashCode; // 0x30

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_MATERIAL_OFFSET))(this);
		}

		::System::Int32 get_materialHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_MATERIALHASHCODE_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_MATERIAL_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_version(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_VERSION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_hashCode(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_HASHCODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_VERSION_OFFSET))(this);
		}

		::System::Int32 get_hashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_HASHCODE_OFFSET))(this);
		}

		::System::Int32 get_instanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET__CTOR_OFFSET))(this);
		}

		::System::Void set_materialHashCode(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_MATERIALHASHCODE_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
