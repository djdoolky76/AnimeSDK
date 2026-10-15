#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AACJBNFGABA;
class BPONKBLGNNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AACJBNFGABA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB7B00)
#define AACJBNFGABA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB7E00)
#define AACJBNFGABA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB7680)
#define AACJBNFGABA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB75D0)
#define AACJBNFGABA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB7580)
#define AACJBNFGABA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB7860)
#define AACJBNFGABA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB76E0)
#define AACJBNFGABA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB7980)
#define AACJBNFGABA_JFENPNKDNNO_OFFSET UNITYSDK_OFFSET(0x1DDB76D0)
#define AACJBNFGABA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDB7510)
#define AACJBNFGABA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB7C40)
#define AACJBNFGABA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB7BA0)
#define AACJBNFGABA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB7570)
#define AACJBNFGABA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB79F0)
#define AACJBNFGABA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB7A50)

	class AACJBNFGABA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BPONKBLGNNL*>* DNEGCPEICDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_EMGMHKKJPNC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AACJBNFGABA")->GetStaticField(0x368C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AACJBNFGABA")->GetStaticField(0x368C8);
		}

		// static const ::System::Object JNJNDDPKJHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJBNFGABA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AACJBNFGABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AACJBNFGABA*))((::PBYTE)hIl2Cpp + AACJBNFGABA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AACJBNFGABA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AACJBNFGABA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJBNFGABA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AACJBNFGABA* Clone()
		{
			return ((::AACJBNFGABA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJBNFGABA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BPONKBLGNNL*>* JFENPNKDNNO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BPONKBLGNNL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJBNFGABA_JFENPNKDNNO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AACJBNFGABA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AACJBNFGABA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AACJBNFGABA*))((::PBYTE)hIl2Cpp + AACJBNFGABA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJBNFGABA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJBNFGABA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AACJBNFGABA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJBNFGABA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AACJBNFGABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AACJBNFGABA*))((::PBYTE)hIl2Cpp + AACJBNFGABA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AACJBNFGABA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
