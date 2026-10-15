#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContract.h"
#include "unitysdk/Newtonsoft/Json/Utilities/PrimitiveTypeCode.h"
#include "unitysdk/Newtonsoft/Json/ReadType.h"
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3B5FF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AC430)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1C3B5FD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_SET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1C3B5FE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonPrimitiveContract_TypeDefinitionIndex = 9699;

	class JsonPrimitiveContract : public ::Newtonsoft::Json::Serialization::JsonContract
	{
	public:
		::Newtonsoft::Json::Utilities::PrimitiveTypeCode _TypeCode_k__BackingField; // 0x80
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>** StaticGet_ReadTypeMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>**)UnitySDK::FromName("Newtonsoft.Json.Serialization", "JsonPrimitiveContract")->GetStaticField(0x35B00);
		}

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_CCTOR_OFFSET))();
		}

		::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode()
		{
			return ((::Newtonsoft::Json::Utilities::PrimitiveTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_GET_TYPECODE_OFFSET))(this);
		}

		::System::Void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_SET_TYPECODE_OFFSET))(this, a1);
		}

	};
}
