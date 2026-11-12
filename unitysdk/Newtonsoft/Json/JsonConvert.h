#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/FloatFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }

#define NEWTONSOFT_JSON_JSONCONVERT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D51CE80)
#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_3_OFFSET UNITYSDK_OFFSET(0x1D51E0E0)
#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D51E0A0)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_1_OFFSET UNITYSDK_OFFSET(0x1D51D6B0)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_OFFSET UNITYSDK_OFFSET(0x1D51D3D0)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREFLOATFORMAT_OFFSET UNITYSDK_OFFSET(0x1D51D4A0)
#define NEWTONSOFT_JSON_JSONCONVERT_GETDEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D51D140)
#define NEWTONSOFT_JSON_JSONCONVERT_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D51CE10)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D51DAD0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1D51D990)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1D51DA20)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_3_OFFSET UNITYSDK_OFFSET(0x1D51D930)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_4_OFFSET UNITYSDK_OFFSET(0x1D51D9E0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_5_OFFSET UNITYSDK_OFFSET(0x1D51DE70)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D51D8D0)
#define NEWTONSOFT_JSON_JSONCONVERT_SET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D51CE40)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D51D1B0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1D51D340)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1D51D620)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1D51D720)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1D51D2B0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1D51D7E0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1D51D820)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D51D170)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConvert_TypeDefinitionIndex = 9626;

	class JsonConvert : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Null()
		{
			return (::System::String**)UnitySDK::FromName("Newtonsoft.Json", "JsonConvert")->GetStaticField(0x2AAC0);
		}

		static ::Newtonsoft::Json::JsonSerializerSettings** StaticGet_InitialSerializerSettings()
		{
			return (::Newtonsoft::Json::JsonSerializerSettings**)UnitySDK::FromName("Newtonsoft.Json", "JsonConvert")->GetStaticField(0x2AAC8);
		}

		static ::System::String** StaticGet_True()
		{
			return (::System::String**)UnitySDK::FromName("Newtonsoft.Json", "JsonConvert")->GetStaticField(0x2AAD0);
		}

		static ::System::String** StaticGet_NaN()
		{
			return (::System::String**)UnitySDK::FromName("Newtonsoft.Json", "JsonConvert")->GetStaticField(0x2AAD8);
		}

		static ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>** StaticGet__DefaultSettings_k__BackingField()
		{
			return (::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>**)UnitySDK::FromName("Newtonsoft.Json", "JsonConvert")->GetStaticField(0x2AAE0);
		}

		static ::System::String** StaticGet_False()
		{
			return (::System::String**)UnitySDK::FromName("Newtonsoft.Json", "JsonConvert")->GetStaticField(0x2AAE8);
		}

		static ::System::String** StaticGet_PositiveInfinity()
		{
			return (::System::String**)UnitySDK::FromName("Newtonsoft.Json", "JsonConvert")->GetStaticField(0x2AAF0);
		}

		static ::System::String** StaticGet_Undefined()
		{
			return (::System::String**)UnitySDK::FromName("Newtonsoft.Json", "JsonConvert")->GetStaticField(0x2AAF8);
		}

		static ::System::String** StaticGet_NegativeInfinity()
		{
			return (::System::String**)UnitySDK::FromName("Newtonsoft.Json", "JsonConvert")->GetStaticField(0x2AB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_CCTOR_OFFSET))();
		}

		static ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings()
		{
			return ((::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_GET_DEFAULTSETTINGS_OFFSET))();
		}

		static ::System::Void set_DefaultSettings(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* a1)
		{
			return ((::System::Void(*)(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SET_DEFAULTSETTINGS_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::JsonSerializerSettings* GetDefaultSettings()
		{
			return ((::Newtonsoft::Json::JsonSerializerSettings*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_GETDEFAULTSETTINGS_OFFSET))();
		}

		static ::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_OFFSET))(a1);
		}

		static ::System::String* ToString_1(::System::Char a1)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_1_OFFSET))(a1);
		}

		static ::System::String* ToString_2(::System::Single a1, ::Newtonsoft::Json::FloatFormatHandling a2, ::System::Char a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::Single, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* EnsureFloatFormat(::System::Double a1, ::System::String* a2, ::Newtonsoft::Json::FloatFormatHandling a3, ::System::Char a4, ::System::Boolean a5)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREFLOATFORMAT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* ToString_3(::System::Double a1, ::Newtonsoft::Json::FloatFormatHandling a2, ::System::Char a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::Double, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* EnsureDecimalPlace(::System::Double a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_OFFSET))(a1, a2);
		}

		static ::System::String* EnsureDecimalPlace_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_1_OFFSET))(a1);
		}

		static ::System::String* ToString_4(::System::Decimal a1)
		{
			return ((::System::String*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_4_OFFSET))(a1);
		}

		static ::System::String* ToString_5(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_5_OFFSET))(a1);
		}

		static ::System::String* ToString_6(::System::String* a1, ::System::Char a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_6_OFFSET))(a1, a2);
		}

		static ::System::String* ToString_7(::System::String* a1, ::System::Char a2, ::Newtonsoft::Json::StringEscapeHandling a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_7_OFFSET))(a1, a2, a3);
		}

		static ::System::String* SerializeObject(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_OFFSET))(a1);
		}

		static ::System::String* SerializeObject_1(::System::Object* a1, ::Newtonsoft::Json::Formatting a2)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_1_OFFSET))(a1, a2);
		}

		static ::System::String* SerializeObject_2(::System::Object* a1, ::Newtonsoft::Json::JsonSerializerSettings* a2)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_2_OFFSET))(a1, a2);
		}

		static ::System::String* SerializeObject_3(::System::Object* a1, ::System::Type* a2, ::Newtonsoft::Json::JsonSerializerSettings* a3)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_3_OFFSET))(a1, a2, a3);
		}

		static ::System::String* SerializeObject_4(::System::Object* a1, ::Newtonsoft::Json::Formatting a2, ::Newtonsoft::Json::JsonSerializerSettings* a3)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_4_OFFSET))(a1, a2, a3);
		}

		static ::System::String* SerializeObject_5(::System::Object* a1, ::System::Type* a2, ::Newtonsoft::Json::Formatting a3, ::Newtonsoft::Json::JsonSerializerSettings* a4)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_5_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* SerializeObjectInternal(::System::Object* a1, ::System::Type* a2, ::Newtonsoft::Json::JsonSerializer* a3)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECTINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* DeserializeObject(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Object* DeserializeObject_3(::System::String* a1, ::System::Type* a2, ::Newtonsoft::Json::JsonSerializerSettings* a3)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_3_OFFSET))(a1, a2, a3);
		}

	};
}
