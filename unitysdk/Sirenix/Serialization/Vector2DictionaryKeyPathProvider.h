#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F862C60)
#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GETKEYFROMPATHSTRING_OFFSET UNITYSDK_OFFSET(0x1F862CF0)
#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GETPATHSTRINGFROMKEY_OFFSET UNITYSDK_OFFSET(0x1F862DD0)
#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GET_PROVIDERID_OFFSET UNITYSDK_OFFSET(0x1F862C20)
#define SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F862F70)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int Vector2DictionaryKeyPathProvider_TypeDefinitionIndex = 7585;

	class Vector2DictionaryKeyPathProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER__CTOR_OFFSET))(this);
		}

		::System::String* get_ProviderID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GET_PROVIDERID_OFFSET))(this);
		}

		::System::Int32 Compare(::UnityEngine::Vector2 x, ::UnityEngine::Vector2 y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_COMPARE_OFFSET))(this, x, y);
		}

		::UnityEngine::Vector2 GetKeyFromPathString(::System::String* pathStr)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GETKEYFROMPATHSTRING_OFFSET))(this, pathStr);
		}

		::System::String* GetPathStringFromKey(::UnityEngine::Vector2 key)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_VECTOR2DICTIONARYKEYPATHPROVIDER_GETPATHSTRINGFROMKEY_OFFSET))(this, key);
		}
	};
}
