#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFODNLIBFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBFODNLIBFI_ADFFDPPIFLC_OFFSET UNITYSDK_OFFSET(0x1E52C0A0)
#define HBFODNLIBFI_ANEOEBGDEOL_OFFSET UNITYSDK_OFFSET(0x1E52C070)
#define HBFODNLIBFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E52C4C0)
#define HBFODNLIBFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52C760)
#define HBFODNLIBFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E52BFE0)
#define HBFODNLIBFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E52BFA0)
#define HBFODNLIBFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52BF90)
#define HBFODNLIBFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E52C170)
#define HBFODNLIBFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E52C0E0)
#define HBFODNLIBFI_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1E52C0C0)
#define HBFODNLIBFI_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1E52C0D0)
#define HBFODNLIBFI_GELIAHGIMPI_OFFSET UNITYSDK_OFFSET(0x1E52C080)
#define HBFODNLIBFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E52C260)
#define HBFODNLIBFI_IGGKBCLAKBD_OFFSET UNITYSDK_OFFSET(0x1E52C060)
#define HBFODNLIBFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E52BF20)
#define HBFODNLIBFI_KDOHFJOINHC_OFFSET UNITYSDK_OFFSET(0x1E52C0B0)
#define HBFODNLIBFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E52C6B0)
#define HBFODNLIBFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E52C660)
#define HBFODNLIBFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E52BF80)
#define HBFODNLIBFI_PFFNJNEGMJB_OFFSET UNITYSDK_OFFSET(0x1E52C090)
#define HBFODNLIBFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E52C290)
#define HBFODNLIBFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E52C2F0)

	class HBFODNLIBFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean GBKBMIKCPKC; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GKOHBFHOFKN; // 0x1C
		::System::UInt32 ILJKBJPJACE; // 0x20
		::System::UInt32 LOKAMFHEOMK; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HBFODNLIBFI")->GetStaticField(0x2E850);
		}

		// static const ::System::Object HGEHCCNENID; // 0x0
		// static const ::System::Object GFLFMBJBLMD; // 0x0
		// static const ::System::Object KOLKBMDFDGP; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBFODNLIBFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFODNLIBFI*))((::PBYTE)hIl2Cpp + HBFODNLIBFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFODNLIBFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HBFODNLIBFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBFODNLIBFI* Clone()
		{
			return ((::HBFODNLIBFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IGGKBCLAKBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_IGGKBCLAKBD_OFFSET))(this);
		}

		::System::Void ANEOEBGDEOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFODNLIBFI_ANEOEBGDEOL_OFFSET))(this, a1);
		}

		::System::Boolean GELIAHGIMPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_GELIAHGIMPI_OFFSET))(this);
		}

		::System::Void PFFNJNEGMJB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFODNLIBFI_PFFNJNEGMJB_OFFSET))(this, a1);
		}

		::System::UInt32 ADFFDPPIFLC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_ADFFDPPIFLC_OFFSET))(this);
		}

		::System::Void KDOHFJOINHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFODNLIBFI_KDOHFJOINHC_OFFSET))(this, a1);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFODNLIBFI_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBFODNLIBFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBFODNLIBFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBFODNLIBFI*))((::PBYTE)hIl2Cpp + HBFODNLIBFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBFODNLIBFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBFODNLIBFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFODNLIBFI*))((::PBYTE)hIl2Cpp + HBFODNLIBFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBFODNLIBFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
