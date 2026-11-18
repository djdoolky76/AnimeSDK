#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER_COMPARE_OFFSET UNITYSDK_OFFSET(0x2001B250)
#define SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER_GETKEYFROMPATHSTRING_OFFSET UNITYSDK_OFFSET(0x2001B340)
#define SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER_GETPATHSTRINGFROMKEY_OFFSET UNITYSDK_OFFSET(0x2001B4A0)
#define SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER_GET_PROVIDERID_OFFSET UNITYSDK_OFFSET(0x2001B210)
#define SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x2001B6A0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector3DictionaryKeyPathProvider_TypeDefinitionIndex = 7586;

	class Vector3DictionaryKeyPathProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER__CTOR_OFFSET))(this);
		}

		::System::String* get_ProviderID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER_GET_PROVIDERID_OFFSET))(this);
		}

		::System::Int32 Compare(::UnityEngine::Vector3 x, ::UnityEngine::Vector3 y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER_COMPARE_OFFSET))(this, x, y);
		}

		::UnityEngine::Vector3 GetKeyFromPathString(::System::String* pathStr)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER_GETKEYFROMPATHSTRING_OFFSET))(this, pathStr);
		}

		::System::String* GetPathStringFromKey(::UnityEngine::Vector3 key)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR3DICTIONARYKEYPATHPROVIDER_GETPATHSTRINGFROMKEY_OFFSET))(this, key);
		}
	};
}
