#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLLBJDEJFNF;
class FNMEHOIANGN;
class OIIPJFDNPAH;
class POFNNGOCEOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIIPJFDNPAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE702D0)
#define OIIPJFDNPAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE707C0)
#define OIIPJFDNPAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6FEA0)
#define OIIPJFDNPAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6FD90)
#define OIIPJFDNPAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6FD10)
#define OIIPJFDNPAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6FF30)
#define OIIPJFDNPAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6FF00)
#define OIIPJFDNPAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE700A0)
#define OIIPJFDNPAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE6FCD0)
#define OIIPJFDNPAH_KONKLKBPEKI_OFFSET UNITYSDK_OFFSET(0x1DE6FEF0)
#define OIIPJFDNPAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE70530)
#define OIIPJFDNPAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE703E0)
#define OIIPJFDNPAH_OHOJJOIMMLB_OFFSET UNITYSDK_OFFSET(0x1DE6FEE0)
#define OIIPJFDNPAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6FD00)
#define OIIPJFDNPAH_PEDDBEKOBFA_OFFSET UNITYSDK_OFFSET(0x1DE6FED0)
#define OIIPJFDNPAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE70150)
#define OIIPJFDNPAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE701B0)

	class OIIPJFDNPAH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FNMEHOIANGN*>* OHAPPIHOAIJ; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::POFNNGOCEOK*>* BLMHNBBKAGK; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::CLLBJDEJFNF*>* FHEGGABMOHA; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_FBILLEFIPNJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OIIPJFDNPAH")->GetStaticField(0x1C6C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OIIPJFDNPAH")->GetStaticField(0x1C6C8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FCPGGMAAGHG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OIIPJFDNPAH")->GetStaticField(0x1C6D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KAFPLMHOIKA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OIIPJFDNPAH")->GetStaticField(0x1C6D8);
		}

		// static const ::System::Object JJBFMNPDDMA; // 0x0
		// static const ::System::Object CKMEGMAOJOD; // 0x0
		// static const ::System::Object IGIFJJOJOKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIIPJFDNPAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIIPJFDNPAH*))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIIPJFDNPAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OIIPJFDNPAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIIPJFDNPAH* Clone()
		{
			return ((::OIIPJFDNPAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CLLBJDEJFNF*>* PEDDBEKOBFA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CLLBJDEJFNF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_PEDDBEKOBFA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FNMEHOIANGN*>* OHOJJOIMMLB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FNMEHOIANGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_OHOJJOIMMLB_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::POFNNGOCEOK*>* KONKLKBPEKI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::POFNNGOCEOK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_KONKLKBPEKI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIIPJFDNPAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIIPJFDNPAH*))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIIPJFDNPAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIIPJFDNPAH*))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIIPJFDNPAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
