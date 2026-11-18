#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FOUNDATION_BUNDLEID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8D0640)
#define FOUNDATION_BUNDLEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x8D0560)
#define FOUNDATION_BUNDLEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8D0510)
#define FOUNDATION_BUNDLEID_ISVALID_OFFSET UNITYSDK_OFFSET(0x8D04C0)
#define FOUNDATION_BUNDLEID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8D0690)
#define FOUNDATION_BUNDLEID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB03E40)
#define FOUNDATION_BUNDLEID__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)
#define FOUNDATION_BUNDLEID___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8D06A0)
#define FOUNDATION_BUNDLEID___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8D0700)
#define FOUNDATION_BUNDLEID___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8D0760)

namespace Foundation
{
	inline static constexpr unsigned int BundleID_TypeDefinitionIndex = 8675;

	struct alignas(4) BundleID
	{
		static ::Il2CppArray<::Foundation::BundleID>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<::Foundation::BundleID>**)Il2CppClass::FromTypeDefinitionIndex(BundleID_TypeDefinitionIndex)->GetStaticField(0x6DA0);
		}
		static ::Foundation::BundleID* StaticGet_None()
		{
			return (::Foundation::BundleID*)Il2CppClass::FromTypeDefinitionIndex(BundleID_TypeDefinitionIndex)->GetStaticField(0x36A0);
		}
		::System::UInt64 bundleHashName; // 0x10

		::System::Void _ctor(::System::UInt64 hash)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID__CTOR_OFFSET))(this, hash);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID__CCTOR_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID_ISVALID_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID_EQUALS_OFFSET))(this, obj);
		}

		/*
		::System::Boolean Equals_1(::Foundation::BundleID other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID_EQUALS_1_OFFSET))(this, other);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEID___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
