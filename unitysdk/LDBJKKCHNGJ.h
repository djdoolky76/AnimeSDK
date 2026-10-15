#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDBJKKCHNGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDBJKKCHNGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F17C0)
#define LDBJKKCHNGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F1A20)
#define LDBJKKCHNGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F13C0)
#define LDBJKKCHNGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F1330)
#define LDBJKKCHNGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F12E0)
#define LDBJKKCHNGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F14F0)
#define LDBJKKCHNGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F1400)
#define LDBJKKCHNGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F15E0)
#define LDBJKKCHNGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F12A0)
#define LDBJKKCHNGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F1880)
#define LDBJKKCHNGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F1830)
#define LDBJKKCHNGJ_OODENDBBAJP_OFFSET UNITYSDK_OFFSET(0x1E8F13F0)
#define LDBJKKCHNGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F12D0)
#define LDBJKKCHNGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F16E0)
#define LDBJKKCHNGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F1740)

	class LDBJKKCHNGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBEIGKKDDAF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LDBJKKCHNGJ")->GetStaticField(0x33670);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KDADAEGMHIO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LDBJKKCHNGJ")->GetStaticField(0x33678);
		}

		// static const ::System::Object LLJHJADNDKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDBJKKCHNGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDBJKKCHNGJ*))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDBJKKCHNGJ* Clone()
		{
			return ((::LDBJKKCHNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OODENDBBAJP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_OODENDBBAJP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDBJKKCHNGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDBJKKCHNGJ*))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDBJKKCHNGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDBJKKCHNGJ*))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
