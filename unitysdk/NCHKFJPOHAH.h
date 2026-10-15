#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCHKFJPOHAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCHKFJPOHAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EADEC60)
#define NCHKFJPOHAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADEEC0)
#define NCHKFJPOHAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EADE860)
#define NCHKFJPOHAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EADE7D0)
#define NCHKFJPOHAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADE780)
#define NCHKFJPOHAH_EBPKBBDOBNC_OFFSET UNITYSDK_OFFSET(0x1EADE890)
#define NCHKFJPOHAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EADE990)
#define NCHKFJPOHAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EADE8A0)
#define NCHKFJPOHAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EADEA80)
#define NCHKFJPOHAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EADE740)
#define NCHKFJPOHAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EADED20)
#define NCHKFJPOHAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EADECD0)
#define NCHKFJPOHAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EADE770)
#define NCHKFJPOHAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EADEB80)
#define NCHKFJPOHAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EADEBE0)

	class NCHKFJPOHAH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPHOFPDFOLJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_PMCJBHIIPDN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NCHKFJPOHAH")->GetStaticField(0x5D2F0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NCHKFJPOHAH")->GetStaticField(0x5D2F8);
		}

		// static const ::System::Object MPGNKBCIMDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCHKFJPOHAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCHKFJPOHAH*))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCHKFJPOHAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NCHKFJPOHAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCHKFJPOHAH* Clone()
		{
			return ((::NCHKFJPOHAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EBPKBBDOBNC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_EBPKBBDOBNC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCHKFJPOHAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCHKFJPOHAH*))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCHKFJPOHAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCHKFJPOHAH*))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCHKFJPOHAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
