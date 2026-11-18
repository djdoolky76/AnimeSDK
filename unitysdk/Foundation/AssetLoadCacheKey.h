#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define FOUNDATION_ASSETLOADCACHEKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x91AF50)
#define FOUNDATION_ASSETLOADCACHEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x91AE70)
#define FOUNDATION_ASSETLOADCACHEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x91AE60)
#define FOUNDATION_ASSETLOADCACHEKEY_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define FOUNDATION_ASSETLOADCACHEKEY_GET_URL_OFFSET UNITYSDK_OFFSET(0x358710)
#define FOUNDATION_ASSETLOADCACHEKEY_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x91AF60)
#define FOUNDATION_ASSETLOADCACHEKEY_ISVALID_OFFSET UNITYSDK_OFFSET(0x91B040)
#define FOUNDATION_ASSETLOADCACHEKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EA27030)
#define FOUNDATION_ASSETLOADCACHEKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EA27130)
#define FOUNDATION_ASSETLOADCACHEKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91B050)
#define FOUNDATION_ASSETLOADCACHEKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA27440)
#define FOUNDATION_ASSETLOADCACHEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x392710)
#define FOUNDATION_ASSETLOADCACHEKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x91B060)
#define FOUNDATION_ASSETLOADCACHEKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x91B0D0)
#define FOUNDATION_ASSETLOADCACHEKEY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91B140)

namespace Foundation
{
	inline static constexpr unsigned int AssetLoadCacheKey_TypeDefinitionIndex = 8682;

	struct alignas(8) AssetLoadCacheKey
	{
		static ::Foundation::AssetLoadCacheKey* StaticGet_Empty()
		{
			return (::Foundation::AssetLoadCacheKey*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadCacheKey_TypeDefinitionIndex)->GetStaticField(0x67B0);
		}
		::Foundation::AssetPath m_AssetPath; // 0x10
		::System::Type* m_DesiredType; // 0x20

		::System::Void _ctor(::Foundation::AssetPath assetPath, ::System::Type* desiredType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY__CTOR_OFFSET))(this, assetPath, desiredType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY__CCTOR_OFFSET))();
		}

		::Foundation::AssetPath get_Url()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_GET_URL_OFFSET))(this);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::Foundation::AssetLoadCacheKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadCacheKey))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_EQUALS_1_OFFSET))(this, obj);
		}

		/*
		static ::System::Boolean op_Equality(::Foundation::AssetLoadCacheKey left, ::Foundation::AssetLoadCacheKey right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadCacheKey, ::Foundation::AssetLoadCacheKey))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_OP_EQUALITY_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::Foundation::AssetLoadCacheKey left, ::Foundation::AssetLoadCacheKey right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadCacheKey, ::Foundation::AssetLoadCacheKey))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_OP_INEQUALITY_OFFSET))(left, right);
		}
		*/

		::System::Boolean IsNullOrEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_ISNULLOREMPTY_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
