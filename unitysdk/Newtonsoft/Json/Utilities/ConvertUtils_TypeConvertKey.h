#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_CTOR_OFFSET UNITYSDK_OFFSET(0x6516D0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201B0E0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3DFF310)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3DFF300)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GET_INITIALTYPE_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x6C95B0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ConvertUtils_TypeConvertKey_TypeDefinitionIndex = 9666;

	struct alignas(8) ConvertUtils_TypeConvertKey
	{
		::System::Type* _initialType; // 0x10
		::System::Type* _targetType; // 0x18
		::System::Void _ctor(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* get_InitialType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GET_INITIALTYPE_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_EQUALS_1_OFFSET))(this, a1);
		}
		*/

	};
}
