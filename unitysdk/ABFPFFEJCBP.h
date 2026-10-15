#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFPFFEJCBP;
class ECLGDFGGOFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABFPFFEJCBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDCBB60)
#define ABFPFFEJCBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCBEF0)
#define ABFPFFEJCBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDCB6B0)
#define ABFPFFEJCBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDCB620)
#define ABFPFFEJCBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCB5E0)
#define ABFPFFEJCBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDCB860)
#define ABFPFFEJCBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDCB710)
#define ABFPFFEJCBP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDCB700)
#define ABFPFFEJCBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDCB980)
#define ABFPFFEJCBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDCB5A0)
#define ABFPFFEJCBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDCBD30)
#define ABFPFFEJCBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDCBC90)
#define ABFPFFEJCBP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDCB6F0)
#define ABFPFFEJCBP_OJINIFKLIHM_OFFSET UNITYSDK_OFFSET(0x1DDCB6E0)
#define ABFPFFEJCBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDCB5D0)
#define ABFPFFEJCBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDCB9F0)
#define ABFPFFEJCBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDCBA50)

inline static constexpr unsigned int ABFPFFEJCBP_TypeDefinitionIndex = 32354;

	class ABFPFFEJCBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ECLGDFGGOFH*>* NKDOGFNMCHJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_GJFPDLPBKIL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ABFPFFEJCBP")->GetStaticField(0x391B0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABFPFFEJCBP")->GetStaticField(0x391B8);
		}

		// static const ::System::Object IPHKHCHMPAN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABFPFFEJCBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABFPFFEJCBP*))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABFPFFEJCBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABFPFFEJCBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABFPFFEJCBP* Clone()
		{
			return ((::ABFPFFEJCBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ECLGDFGGOFH*>* OJINIFKLIHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ECLGDFGGOFH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_OJINIFKLIHM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABFPFFEJCBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABFPFFEJCBP*))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABFPFFEJCBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABFPFFEJCBP*))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABFPFFEJCBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
