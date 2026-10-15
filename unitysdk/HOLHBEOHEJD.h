#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOLHBEOHEJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOLHBEOHEJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5ED980)
#define HOLHBEOHEJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EDC60)
#define HOLHBEOHEJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5ED4A0)
#define HOLHBEOHEJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5ED410)
#define HOLHBEOHEJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5ED3C0)
#define HOLHBEOHEJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5ED600)
#define HOLHBEOHEJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5ED500)
#define HOLHBEOHEJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5ED6F0)
#define HOLHBEOHEJD_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1E5ED4E0)
#define HOLHBEOHEJD_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1E5ED4D0)
#define HOLHBEOHEJD_ILBBLLKHJGK_OFFSET UNITYSDK_OFFSET(0x1E5ED4F0)
#define HOLHBEOHEJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5ED380)
#define HOLHBEOHEJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5EDAB0)
#define HOLHBEOHEJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5EDA60)
#define HOLHBEOHEJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5ED3B0)
#define HOLHBEOHEJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5ED840)
#define HOLHBEOHEJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5ED8A0)

	class HOLHBEOHEJD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* DHAJOOOOHCK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JEHBHEOHGLN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HOLHBEOHEJD")->GetStaticField(0x4E0C0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OGPLJEAKCII()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HOLHBEOHEJD")->GetStaticField(0x4E0C8);
		}

		// static const ::System::Object GEMDHFJFBHD; // 0x0
		// static const ::System::Object PDOENCHMFAE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOLHBEOHEJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOLHBEOHEJD*))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOLHBEOHEJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HOLHBEOHEJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOLHBEOHEJD* Clone()
		{
			return ((::HOLHBEOHEJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_CLONE_OFFSET))(this);
		}

		::System::UInt32 HLACEGGLEGF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* ILBBLLKHJGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_ILBBLLKHJGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOLHBEOHEJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOLHBEOHEJD*))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOLHBEOHEJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOLHBEOHEJD*))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOLHBEOHEJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
