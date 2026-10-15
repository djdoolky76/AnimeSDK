#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMEEKFKDPFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMEEKFKDPFD_BBEEHOABADN_OFFSET UNITYSDK_OFFSET(0x1E2DF430)
#define EMEEKFKDPFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2DF860)
#define EMEEKFKDPFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DFB20)
#define EMEEKFKDPFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2DF3E0)
#define EMEEKFKDPFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2DF350)
#define EMEEKFKDPFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DF300)
#define EMEEKFKDPFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2DF560)
#define EMEEKFKDPFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2DF440)
#define EMEEKFKDPFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2DF650)
#define EMEEKFKDPFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2DF290)
#define EMEEKFKDPFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2DF950)
#define EMEEKFKDPFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2DF900)
#define EMEEKFKDPFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2DF2F0)
#define EMEEKFKDPFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2DF750)
#define EMEEKFKDPFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2DF7B0)

inline static constexpr unsigned int EMEEKFKDPFD_TypeDefinitionIndex = 34772;

	class EMEEKFKDPFD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGKECLGFAPK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IDKOJMEEPIF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EMEEKFKDPFD")->GetStaticField(0x529B0);
		}

		static ::Google::Protobuf::MessageParser_1<::EMEEKFKDPFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMEEKFKDPFD*>**)UnitySDK::FromName("", "EMEEKFKDPFD")->GetStaticField(0x529B8);
		}

		// static const ::System::Object PDCALHCNGCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMEEKFKDPFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMEEKFKDPFD*))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMEEKFKDPFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMEEKFKDPFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMEEKFKDPFD*>*(*)())((::PBYTE)hIl2Cpp + EMEEKFKDPFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMEEKFKDPFD* Clone()
		{
			return ((::EMEEKFKDPFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBEEHOABADN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_BBEEHOABADN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMEEKFKDPFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMEEKFKDPFD*))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMEEKFKDPFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMEEKFKDPFD*))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMEEKFKDPFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
