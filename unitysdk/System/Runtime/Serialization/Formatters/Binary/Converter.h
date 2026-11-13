#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"
namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A73DA80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CREATEPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1A73D3C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1A73DA00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITARRAYTYPEA_OFFSET UNITYSDK_OFFSET(0x1A73C760)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITCODEA_OFFSET UNITYSDK_OFFSET(0x1A73D860)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPEA_OFFSET UNITYSDK_OFFSET(0x1A73CD90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPECODEA_OFFSET UNITYSDK_OFFSET(0x1A73D600)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITVALUEA_OFFSET UNITYSDK_OFFSET(0x1A73D430)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1A736DA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISWRITEASBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1A73C720)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1A737E10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCODE_OFFSET UNITYSDK_OFFSET(0x1A737580)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCOMTYPE_OFFSET UNITYSDK_OFFSET(0x1A737C10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOPRIMITIVETYPEENUM_OFFSET UNITYSDK_OFFSET(0x1A73C630)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPECODE_OFFSET UNITYSDK_OFFSET(0x1A73D770)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPE_OFFSET UNITYSDK_OFFSET(0x1A737D10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A73C740)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int Converter_TypeDefinitionIndex = 1165;

	class Converter : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_typeofBooleanArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x18FE0);
		}

		static ::System::Type** StaticGet_typeofDecimalArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x18FE8);
		}

		static ::System::Type** StaticGet_typeofDouble()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x18FF0);
		}

		static ::System::Type** StaticGet_typeofSByte()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x18FF8);
		}

		static ::System::Type** StaticGet_typeofStringArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19000);
		}

		static ::System::Type** StaticGet_typeofSByteArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19008);
		}

		static ::System::Type** StaticGet_typeofISerializable()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19010);
		}

		static ::System::Type** StaticGet_typeofInt16Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19018);
		}

		static ::System::Type** StaticGet_typeofUInt32Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19020);
		}

		static ::System::Reflection::Assembly** StaticGet_urtAssembly()
		{
			return (::System::Reflection::Assembly**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19028);
		}

		static ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>** StaticGet_codeA()
		{
			return (::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19030);
		}

		static ::System::Type** StaticGet_typeofSingleArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19038);
		}

		static ::System::Type** StaticGet_typeofByte()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19040);
		}

		static ::Il2CppArray<::System::TypeCode>** StaticGet_typeCodeA()
		{
			return (::Il2CppArray<::System::TypeCode>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19048);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_valueA()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19050);
		}

		static ::System::Type** StaticGet_typeofInt64Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19058);
		}

		static ::Il2CppArray<::System::Type*>** StaticGet_typeA()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19060);
		}

		static ::System::Type** StaticGet_typeofTypeArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19068);
		}

		static ::System::Type** StaticGet_typeofUInt16()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19070);
		}

		static ::System::Type** StaticGet_typeofByteArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19078);
		}

		static ::System::Type** StaticGet_typeofChar()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19080);
		}

		static ::System::Type** StaticGet_typeofDateTime()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19088);
		}

		static ::System::Type** StaticGet_typeofBoolean()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19090);
		}

		static ::System::Type** StaticGet_typeofTimeSpanArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19098);
		}

		static ::System::Type** StaticGet_typeofUInt16Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190A0);
		}

		static ::System::String** StaticGet_urtAssemblyString()
		{
			return (::System::String**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190A8);
		}

		static ::System::Type** StaticGet_typeofInt32Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190B0);
		}

		static ::System::Type** StaticGet_typeofObject()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190B8);
		}

		static ::System::Type** StaticGet_typeofDoubleArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190C0);
		}

		static ::System::Type** StaticGet_typeofMarshalByRefObject()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190C8);
		}

		static ::System::Type** StaticGet_typeofString()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190D0);
		}

		static ::Il2CppArray<::System::Type*>** StaticGet_arrayTypeA()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190D8);
		}

		static ::System::Type** StaticGet_typeofSingle()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190E0);
		}

		static ::System::Type** StaticGet_typeofDateTimeArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190E8);
		}

		static ::System::Type** StaticGet_typeofTimeSpan()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190F0);
		}

		static ::System::Type** StaticGet_typeofInt32()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x190F8);
		}

		static ::System::Type** StaticGet_typeofUInt32()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19100);
		}

		static ::System::Type** StaticGet_typeofSystemVoid()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19108);
		}

		static ::System::Type** StaticGet_typeofUInt64Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19110);
		}

		static ::System::Type** StaticGet_typeofDecimal()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19118);
		}

		static ::System::Type** StaticGet_typeofUInt64()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19120);
		}

		static ::System::Type** StaticGet_typeofObjectArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19128);
		}

		static ::System::Type** StaticGet_typeofCharArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19130);
		}

		static ::System::Type** StaticGet_typeofInt64()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19138);
		}

		static ::System::Type** StaticGet_typeofConverter()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19140);
		}

		static ::System::Type** StaticGet_typeofInt16()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x19148);
		}

		static ::System::Int32* StaticGet_primitiveTypeEnumLength()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x59F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CCTOR_OFFSET))();
		}

		static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type* a1)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCODE_OFFSET))(a1);
		}

		static ::System::Boolean IsWriteAsByteArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1)
		{
			return ((::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISWRITEASBYTEARRAY_OFFSET))(a1);
		}

		static ::System::Int32 TypeLength(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1)
		{
			return ((::System::Int32(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TYPELENGTH_OFFSET))(a1);
		}

		static ::System::Type* ToArrayType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1)
		{
			return ((::System::Type*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOARRAYTYPE_OFFSET))(a1);
		}

		static ::System::Void InitTypeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPEA_OFFSET))();
		}

		static ::System::Void InitArrayTypeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITARRAYTYPEA_OFFSET))();
		}

		static ::System::Type* ToType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1)
		{
			return ((::System::Type*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPE_OFFSET))(a1);
		}

		static ::System::Array* CreatePrimitiveArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1, ::System::Int32 a2)
		{
			return ((::System::Array*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CREATEPRIMITIVEARRAY_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPrimitiveArray(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISPRIMITIVEARRAY_OFFSET))(a1, a2);
		}

		static ::System::Void InitValueA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITVALUEA_OFFSET))();
		}

		static ::System::String* ToComType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1)
		{
			return ((::System::String*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCOMTYPE_OFFSET))(a1);
		}

		static ::System::Void InitTypeCodeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPECODEA_OFFSET))();
		}

		static ::System::TypeCode ToTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a1)
		{
			return ((::System::TypeCode(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPECODE_OFFSET))(a1);
		}

		static ::System::Void InitCodeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITCODEA_OFFSET))();
		}

		static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToPrimitiveTypeEnum(::System::TypeCode a1)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE(*)(::System::TypeCode))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOPRIMITIVETYPEENUM_OFFSET))(a1);
		}

		static ::System::Object* FromString(::System::String* a1, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a2)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_FROMSTRING_OFFSET))(a1, a2);
		}

	};
}
