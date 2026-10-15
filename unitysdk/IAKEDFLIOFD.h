#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAKEDFLIOFD;
class NBGDEFLFLMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IAKEDFLIOFD_BNFHBKBDHJL_OFFSET UNITYSDK_OFFSET(0x1E5D9170)
#define IAKEDFLIOFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D95D0)
#define IAKEDFLIOFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D9A40)
#define IAKEDFLIOFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D90E0)
#define IAKEDFLIOFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D9020)
#define IAKEDFLIOFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D8FD0)
#define IAKEDFLIOFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D9220)
#define IAKEDFLIOFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D91C0)
#define IAKEDFLIOFD_FKKAEDOIFMJ_OFFSET UNITYSDK_OFFSET(0x1E5D91A0)
#define IAKEDFLIOFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D92C0)
#define IAKEDFLIOFD_GNAMNDMKGMP_OFFSET UNITYSDK_OFFSET(0x1E5D9150)
#define IAKEDFLIOFD_GONGLAIPCJN_OFFSET UNITYSDK_OFFSET(0x1E5D9190)
#define IAKEDFLIOFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5D8F60)
#define IAKEDFLIOFD_KEOPIHPPEGB_OFFSET UNITYSDK_OFFSET(0x1E5D91B0)
#define IAKEDFLIOFD_KKGFOCACAII_OFFSET UNITYSDK_OFFSET(0x1E5D9130)
#define IAKEDFLIOFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D9920)
#define IAKEDFLIOFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D9850)
#define IAKEDFLIOFD_NMIGMGJGKEN_OFFSET UNITYSDK_OFFSET(0x1E5D9140)
#define IAKEDFLIOFD_ODEDBIABFIB_OFFSET UNITYSDK_OFFSET(0x1E5D9180)
#define IAKEDFLIOFD_OGCGGDEEKIJ_OFFSET UNITYSDK_OFFSET(0x1E5D9160)
#define IAKEDFLIOFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D8FC0)
#define IAKEDFLIOFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D9350)
#define IAKEDFLIOFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D93B0)

inline static constexpr unsigned int IAKEDFLIOFD_TypeDefinitionIndex = 29476;

	class IAKEDFLIOFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NBGDEFLFLMI*>* PDOJECDLFEM; // 0x18
		::System::UInt32 HGHABOBCHMG; // 0x20
		::System::UInt32 BJJEIECJFJH; // 0x24
		::System::UInt32 AAKAHKOGOOJ; // 0x28
		::System::UInt32 NPLCNHBFDJP; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::NBGDEFLFLMI*>** StaticGet_CAGMEKNAIKL()
		{
			return (::Google::Protobuf::FieldCodec_1<::NBGDEFLFLMI*>**)UnitySDK::FromName("", "IAKEDFLIOFD")->GetStaticField(0x413A0);
		}

		static ::Google::Protobuf::MessageParser_1<::IAKEDFLIOFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IAKEDFLIOFD*>**)UnitySDK::FromName("", "IAKEDFLIOFD")->GetStaticField(0x413A8);
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

		static ::Google::Protobuf::MessageParser_1<::IAKEDFLIOFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IAKEDFLIOFD*>*(*)())((::PBYTE)hIl2Cpp + IAKEDFLIOFD_JJGHOBBFNJD_OFFSET))();
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
