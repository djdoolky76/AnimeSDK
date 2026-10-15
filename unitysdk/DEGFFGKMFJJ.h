#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEGFFGKMFJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEGFFGKMFJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1924A0)
#define DEGFFGKMFJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E192790)
#define DEGFFGKMFJJ_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1E192040)
#define DEGFFGKMFJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E192010)
#define DEGFFGKMFJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E191F80)
#define DEGFFGKMFJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E191F30)
#define DEGFFGKMFJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E192170)
#define DEGFFGKMFJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E192070)
#define DEGFFGKMFJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E192260)
#define DEGFFGKMFJJ_HNDDBDBLIHM_OFFSET UNITYSDK_OFFSET(0x1E192060)
#define DEGFFGKMFJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E191EF0)
#define DEGFFGKMFJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1925D0)
#define DEGFFGKMFJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E192580)
#define DEGFFGKMFJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E191F20)
#define DEGFFGKMFJJ_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1E192050)
#define DEGFFGKMFJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E192360)
#define DEGFFGKMFJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1923C0)

inline static constexpr unsigned int DEGFFGKMFJJ_TypeDefinitionIndex = 27697;

	class DEGFFGKMFJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BLEMBMNIANE; // 0x18
		::System::UInt32 DNIPIFDDAAE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DEGFFGKMFJJ")->GetStaticField(0x30B30);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EFPBLMFIFFJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DEGFFGKMFJJ")->GetStaticField(0x30B38);
		}

		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		// static const ::System::Object JBCDJHLJOHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEGFFGKMFJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEGFFGKMFJJ*))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEGFFGKMFJJ* Clone()
		{
			return ((::DEGFFGKMFJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HNDDBDBLIHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_HNDDBDBLIHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEGFFGKMFJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEGFFGKMFJJ*))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEGFFGKMFJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEGFFGKMFJJ*))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEGFFGKMFJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
