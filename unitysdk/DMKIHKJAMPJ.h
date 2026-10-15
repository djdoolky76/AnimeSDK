#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMKIHKJAMPJ;
class JOFHMCJPBCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMKIHKJAMPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1F0870)
#define DMKIHKJAMPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F0C00)
#define DMKIHKJAMPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F0410)
#define DMKIHKJAMPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F0320)
#define DMKIHKJAMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F02A0)
#define DMKIHKJAMPJ_DPKFIAFCMIK_OFFSET UNITYSDK_OFFSET(0x1E1F0440)
#define DMKIHKJAMPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F0490)
#define DMKIHKJAMPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F0460)
#define DMKIHKJAMPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1F05E0)
#define DMKIHKJAMPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1F0260)
#define DMKIHKJAMPJ_LLBEGICOGAP_OFFSET UNITYSDK_OFFSET(0x1E1F0450)
#define DMKIHKJAMPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1F0A00)
#define DMKIHKJAMPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1F0950)
#define DMKIHKJAMPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F0290)
#define DMKIHKJAMPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1F0730)
#define DMKIHKJAMPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1F0790)

	class DMKIHKJAMPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JOFHMCJPBCE*>* OFALGJGEJNG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMJNIEBEGBK; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_PBACLJHECAB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DMKIHKJAMPJ")->GetStaticField(0x3F370);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DMKIHKJAMPJ")->GetStaticField(0x3F378);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DKPBLBKFDIF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DMKIHKJAMPJ")->GetStaticField(0x3F380);
		}

		// static const ::System::Object HGGGPJMBHAH; // 0x0
		// static const ::System::Object HJCIAKPLNPB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMKIHKJAMPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMKIHKJAMPJ*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMKIHKJAMPJ* Clone()
		{
			return ((::DMKIHKJAMPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOFHMCJPBCE*>* DPKFIAFCMIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOFHMCJPBCE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_DPKFIAFCMIK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LLBEGICOGAP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_LLBEGICOGAP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMKIHKJAMPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMKIHKJAMPJ*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMKIHKJAMPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMKIHKJAMPJ*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
