#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMBBHFNJILI;
class NEMJDLLBBGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEMJDLLBBGN_AONMKBBPNJP_OFFSET UNITYSDK_OFFSET(0x1EAFDCA0)
#define NEMJDLLBBGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAFE290)
#define NEMJDLLBBGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAFE580)
#define NEMJDLLBBGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAFDC50)
#define NEMJDLLBBGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAFDB30)
#define NEMJDLLBBGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFDAE0)
#define NEMJDLLBBGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAFDE50)
#define NEMJDLLBBGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAFDCB0)
#define NEMJDLLBBGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAFDFF0)
#define NEMJDLLBBGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAFDAA0)
#define NEMJDLLBBGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAFE3B0)
#define NEMJDLLBBGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAFE330)
#define NEMJDLLBBGN_NGIIMFAECGG_OFFSET UNITYSDK_OFFSET(0x1EAFDC90)
#define NEMJDLLBBGN_OFOEOCIPKFK_OFFSET UNITYSDK_OFFSET(0x1EAFDC80)
#define NEMJDLLBBGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAFDAD0)
#define NEMJDLLBBGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAFE150)
#define NEMJDLLBBGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAFE1B0)

	class NEMJDLLBBGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ODOKFLGMOEK; // 0x18
		::MMBBHFNJILI* FIIMNKHCEMN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEMJDLLBBGN")->GetStaticField(0x5E420);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PKCGJNOAPBE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NEMJDLLBBGN")->GetStaticField(0x5E428);
		}

		// static const ::System::Object AEBDCJLPGOA; // 0x0
		// static const ::System::Object GOGLCJEPJBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEMJDLLBBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMJDLLBBGN*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEMJDLLBBGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEMJDLLBBGN* Clone()
		{
			return ((::NEMJDLLBBGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OFOEOCIPKFK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_OFOEOCIPKFK_OFFSET))(this);
		}

		::MMBBHFNJILI* NGIIMFAECGG()
		{
			return ((::MMBBHFNJILI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_NGIIMFAECGG_OFFSET))(this);
		}

		::System::Void AONMKBBPNJP(::MMBBHFNJILI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMBBHFNJILI*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_AONMKBBPNJP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEMJDLLBBGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEMJDLLBBGN*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEMJDLLBBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMJDLLBBGN*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEMJDLLBBGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
