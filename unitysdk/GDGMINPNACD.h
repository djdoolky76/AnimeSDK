#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDGMINPNACD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDGMINPNACD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E44A1A0)
#define GDGMINPNACD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44A520)
#define GDGMINPNACD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E449D80)
#define GDGMINPNACD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E449D40)
#define GDGMINPNACD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E449D30)
#define GDGMINPNACD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E449F10)
#define GDGMINPNACD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E449E30)
#define GDGMINPNACD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E449FE0)
#define GDGMINPNACD_HLHJBEPAFFM_OFFSET UNITYSDK_OFFSET(0x1E449E00)
#define GDGMINPNACD_IFGMGBAAKBM_OFFSET UNITYSDK_OFFSET(0x1E449E20)
#define GDGMINPNACD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E449CF0)
#define GDGMINPNACD_KEEHIMOCBNK_OFFSET UNITYSDK_OFFSET(0x1E449DE0)
#define GDGMINPNACD_KNGJFHKOLEO_OFFSET UNITYSDK_OFFSET(0x1E449DF0)
#define GDGMINPNACD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E44A380)
#define GDGMINPNACD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E44A330)
#define GDGMINPNACD_MLMMBFLDIGB_OFFSET UNITYSDK_OFFSET(0x1E449DD0)
#define GDGMINPNACD_OPDMPOKGBCA_OFFSET UNITYSDK_OFFSET(0x1E449E10)
#define GDGMINPNACD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E449D20)
#define GDGMINPNACD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E44A010)
#define GDGMINPNACD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E44A070)

inline static constexpr unsigned int GDGMINPNACD_TypeDefinitionIndex = 33984;

	class GDGMINPNACD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HHKEHNKMILI; // 0x18
		::System::UInt32 KHMPKKJMHNM; // 0x1C
		::System::UInt32 CHMFPHPJAIA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GDGMINPNACD")->GetStaticField(0x109C0);
		}

		// static const ::System::Object EBOOHBBAGIC; // 0x0
		// static const ::System::Object HCNNIHOAGEM; // 0x0
		// static const ::System::Object NKLILADIPNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDGMINPNACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDGMINPNACD*))((::PBYTE)hIl2Cpp + GDGMINPNACD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGMINPNACD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GDGMINPNACD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDGMINPNACD* Clone()
		{
			return ((::GDGMINPNACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_CLONE_OFFSET))(this);
		}

		::System::UInt32 MLMMBFLDIGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_MLMMBFLDIGB_OFFSET))(this);
		}

		::System::Void KEEHIMOCBNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDGMINPNACD_KEEHIMOCBNK_OFFSET))(this, a1);
		}

		::System::UInt32 KNGJFHKOLEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_KNGJFHKOLEO_OFFSET))(this);
		}

		::System::Void HLHJBEPAFFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDGMINPNACD_HLHJBEPAFFM_OFFSET))(this, a1);
		}

		::System::UInt32 OPDMPOKGBCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_OPDMPOKGBCA_OFFSET))(this);
		}

		::System::Void IFGMGBAAKBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDGMINPNACD_IFGMGBAAKBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDGMINPNACD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDGMINPNACD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDGMINPNACD*))((::PBYTE)hIl2Cpp + GDGMINPNACD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDGMINPNACD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDGMINPNACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDGMINPNACD*))((::PBYTE)hIl2Cpp + GDGMINPNACD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDGMINPNACD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
