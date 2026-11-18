#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/SqlTypes/EComparison.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Data/SqlTypes/SqlBoolean.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLBINARY_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x98D660)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x98D650)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_EQUALS_OFFSET UNITYSDK_OFFSET(0x98D670)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98D680)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1F897ED0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x3D5A00)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x98D5C0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_HASHBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1F897AC0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F897620)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1F897780)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F8973D0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1F8976D0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_PERFORMCOMPAREBYTE_OFFSET UNITYSDK_OFFSET(0x1F8974B0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x98D690)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x98D6A0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98D5D0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F897F50)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x98D550)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY__CTOR_OFFSET UNITYSDK_OFFSET(0x3DDF60)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlBinary_TypeDefinitionIndex = 37371;

	struct alignas(8) SqlBinary
	{
		static ::System::Data::SqlTypes::SqlBinary* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlBinary*)Il2CppClass::FromTypeDefinitionIndex(SqlBinary_TypeDefinitionIndex)->GetStaticField(0x2BDB0);
		}
		::Il2CppArray<::System::Byte>* _value; // 0x10

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_GET_ISNULL_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Value()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::System::Data::SqlTypes::SqlBinary op_Implicit(::Il2CppArray<::System::Byte>* x)
		{
			return ((::System::Data::SqlTypes::SqlBinary(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_IMPLICIT_OFFSET))(x);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::EComparison PerformCompareByte(::Il2CppArray<::System::Byte>* x, ::Il2CppArray<::System::Byte>* y)
		{
			return ((::System::Data::SqlTypes::EComparison(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_PERFORMCOMPAREBYTE_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlBinary x, ::System::Data::SqlTypes::SqlBinary y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlBinary, ::System::Data::SqlTypes::SqlBinary))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlBinary x, ::System::Data::SqlTypes::SqlBinary y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlBinary, ::System::Data::SqlTypes::SqlBinary))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlBinary x, ::System::Data::SqlTypes::SqlBinary y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlBinary, ::System::Data::SqlTypes::SqlBinary))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_COMPARETO_OFFSET))(this, value);
		}

		/*
		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlBinary value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlBinary))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_COMPARETO_1_OFFSET))(this, value);
		}
		*/

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_EQUALS_OFFSET))(this, value);
		}

		static ::System::Int32 HashByteArray(::Il2CppArray<::System::Byte>* rgbValue, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_HASHBYTEARRAY_OFFSET))(rgbValue, length);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
