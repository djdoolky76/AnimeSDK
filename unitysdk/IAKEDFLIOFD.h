#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAKEDFLIOFD;
class NBGDEFLFLMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IAKEDFLIOFD_BNFHBKBDHJL_OFFSET UNITYSDK_OFFSET(0x1E6067B0)
#define IAKEDFLIOFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E606C10)
#define IAKEDFLIOFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E607080)
#define IAKEDFLIOFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E606720)
#define IAKEDFLIOFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E606660)
#define IAKEDFLIOFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E606610)
#define IAKEDFLIOFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E606860)
#define IAKEDFLIOFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E606800)
#define IAKEDFLIOFD_FKKAEDOIFMJ_OFFSET UNITYSDK_OFFSET(0x1E6067E0)
#define IAKEDFLIOFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E606900)
#define IAKEDFLIOFD_GNAMNDMKGMP_OFFSET UNITYSDK_OFFSET(0x1E606790)
#define IAKEDFLIOFD_GONGLAIPCJN_OFFSET UNITYSDK_OFFSET(0x1E6067D0)
#define IAKEDFLIOFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6065A0)
#define IAKEDFLIOFD_KEOPIHPPEGB_OFFSET UNITYSDK_OFFSET(0x1E6067F0)
#define IAKEDFLIOFD_KKGFOCACAII_OFFSET UNITYSDK_OFFSET(0x1E606770)
#define IAKEDFLIOFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E606F60)
#define IAKEDFLIOFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E606E90)
#define IAKEDFLIOFD_NMIGMGJGKEN_OFFSET UNITYSDK_OFFSET(0x1E606780)
#define IAKEDFLIOFD_ODEDBIABFIB_OFFSET UNITYSDK_OFFSET(0x1E6067C0)
#define IAKEDFLIOFD_OGCGGDEEKIJ_OFFSET UNITYSDK_OFFSET(0x1E6067A0)
#define IAKEDFLIOFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E606600)
#define IAKEDFLIOFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E606990)
#define IAKEDFLIOFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6069F0)

	class IAKEDFLIOFD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NBGDEFLFLMI*>* PDOJECDLFEM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HGHABOBCHMG; // 0x20
		::System::UInt32 AAKAHKOGOOJ; // 0x24
		::System::UInt32 BJJEIECJFJH; // 0x28
		::System::UInt32 NPLCNHBFDJP; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IAKEDFLIOFD")->GetStaticField(0x3F680);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CAGMEKNAIKL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IAKEDFLIOFD")->GetStaticField(0x3F688);
		}

		// static const ::System::Object ENGNKPEHCID; // 0x0
		// static const ::System::Object KJOFBAAHDCO; // 0x0
		// static const ::System::Object ALNJDDJLKNJ; // 0x0
		// static const ::System::Object PGFBMKJNPFD; // 0x0
		// static const ::System::Object DJALJPNDMMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IAKEDFLIOFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAKEDFLIOFD*))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAKEDFLIOFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IAKEDFLIOFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IAKEDFLIOFD* Clone()
		{
			return ((::IAKEDFLIOFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_CLONE_OFFSET))(this);
		}

		::System::UInt32 KKGFOCACAII()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_KKGFOCACAII_OFFSET))(this);
		}

		::System::Void NMIGMGJGKEN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_NMIGMGJGKEN_OFFSET))(this, a1);
		}

		::System::UInt32 GNAMNDMKGMP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_GNAMNDMKGMP_OFFSET))(this);
		}

		::System::Void OGCGGDEEKIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_OGCGGDEEKIJ_OFFSET))(this, a1);
		}

		::System::UInt32 BNFHBKBDHJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_BNFHBKBDHJL_OFFSET))(this);
		}

		::System::Void ODEDBIABFIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_ODEDBIABFIB_OFFSET))(this, a1);
		}

		::System::UInt32 GONGLAIPCJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_GONGLAIPCJN_OFFSET))(this);
		}

		::System::Void FKKAEDOIFMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_FKKAEDOIFMJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NBGDEFLFLMI*>* KEOPIHPPEGB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NBGDEFLFLMI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_KEOPIHPPEGB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IAKEDFLIOFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAKEDFLIOFD*))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IAKEDFLIOFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAKEDFLIOFD*))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IAKEDFLIOFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
