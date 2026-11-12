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

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D49F530)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CREATEPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1D49EE70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1D49F4B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITARRAYTYPEA_OFFSET UNITYSDK_OFFSET(0x1D49E210)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITCODEA_OFFSET UNITYSDK_OFFSET(0x1D49F310)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPEA_OFFSET UNITYSDK_OFFSET(0x1D49E840)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPECODEA_OFFSET UNITYSDK_OFFSET(0x1D49F0B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITVALUEA_OFFSET UNITYSDK_OFFSET(0x1D49EEE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1D4987F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISWRITEASBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1D49E1D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1D499860)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCODE_OFFSET UNITYSDK_OFFSET(0x1D498FD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCOMTYPE_OFFSET UNITYSDK_OFFSET(0x1D499660)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOPRIMITIVETYPEENUM_OFFSET UNITYSDK_OFFSET(0x1D49E0E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPECODE_OFFSET UNITYSDK_OFFSET(0x1D49F220)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPE_OFFSET UNITYSDK_OFFSET(0x1D499760)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1D49E1F0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int Converter_TypeDefinitionIndex = 1165;

	class Converter : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_typeofDateTimeArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CB60);
		}

		static ::System::Type** StaticGet_typeofDoubleArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CB68);
		}

		static ::System::Type** StaticGet_typeofISerializable()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CB70);
		}

		static ::System::Type** StaticGet_typeofStringArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CB78);
		}

		static ::System::Type** StaticGet_typeofTypeArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CB80);
		}

		static ::System::Reflection::Assembly** StaticGet_urtAssembly()
		{
			return (::System::Reflection::Assembly**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CB88);
		}

		static ::System::Type** StaticGet_typeofInt32()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CB90);
		}

		static ::Il2CppArray<::System::TypeCode>** StaticGet_typeCodeA()
		{
			return (::Il2CppArray<::System::TypeCode>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CB98);
		}

		static ::System::Type** StaticGet_typeofConverter()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBA0);
		}

		static ::System::Type** StaticGet_typeofSByteArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBA8);
		}

		static ::System::Type** StaticGet_typeofInt64Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBB0);
		}

		static ::System::Type** StaticGet_typeofTimeSpanArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBB8);
		}

		static ::System::Type** StaticGet_typeofInt16()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBC0);
		}

		static ::System::Type** StaticGet_typeofUInt16Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBC8);
		}

		static ::System::Type** StaticGet_typeofBooleanArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBD0);
		}

		static ::System::Type** StaticGet_typeofInt32Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBD8);
		}

		static ::System::String** StaticGet_urtAssemblyString()
		{
			return (::System::String**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBE0);
		}

		static ::System::Type** StaticGet_typeofSingleArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBE8);
		}

		static ::System::Type** StaticGet_typeofSByte()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBF0);
		}

		static ::System::Type** StaticGet_typeofDouble()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CBF8);
		}

		static ::System::Type** StaticGet_typeofObjectArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC00);
		}

		static ::System::Type** StaticGet_typeofInt16Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC08);
		}

		static ::System::Type** StaticGet_typeofByteArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC10);
		}

		static ::System::Type** StaticGet_typeofMarshalByRefObject()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC18);
		}

		static ::System::Type** StaticGet_typeofCharArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC20);
		}

		static ::System::Type** StaticGet_typeofUInt32Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC28);
		}

		static ::System::Type** StaticGet_typeofTimeSpan()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC30);
		}

		static ::System::Type** StaticGet_typeofUInt16()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC38);
		}

		static ::System::Type** StaticGet_typeofObject()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC40);
		}

		static ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>** StaticGet_codeA()
		{
			return (::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC48);
		}

		static ::System::Type** StaticGet_typeofUInt32()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC50);
		}

		static ::System::Type** StaticGet_typeofDateTime()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC58);
		}

		static ::System::Type** StaticGet_typeofDecimalArray()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC60);
		}

		static ::System::Type** StaticGet_typeofInt64()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_valueA()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC70);
		}

		static ::Il2CppArray<::System::Type*>** StaticGet_typeA()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC78);
		}

		static ::Il2CppArray<::System::Type*>** StaticGet_arrayTypeA()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC80);
		}

		static ::System::Type** StaticGet_typeofByte()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC88);
		}

		static ::System::Type** StaticGet_typeofBoolean()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC90);
		}

		static ::System::Type** StaticGet_typeofChar()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CC98);
		}

		static ::System::Type** StaticGet_typeofUInt64Array()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CCA0);
		}

		static ::System::Type** StaticGet_typeofSingle()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CCA8);
		}

		static ::System::Type** StaticGet_typeofString()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CCB0);
		}

		static ::System::Type** StaticGet_typeofUInt64()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CCB8);
		}

		static ::System::Type** StaticGet_typeofSystemVoid()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CCC0);
		}

		static ::System::Type** StaticGet_typeofDecimal()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x1CCC8);
		}

		static ::System::Int32* StaticGet_primitiveTypeEnumLength()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "Converter")->GetStaticField(0x5E30);
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
