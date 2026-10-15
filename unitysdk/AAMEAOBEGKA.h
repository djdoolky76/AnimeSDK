#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAMEAOBEGKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAMEAOBEGKA_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1DDBFCE0)
#define AAMEAOBEGKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC0050)
#define AAMEAOBEGKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC0270)
#define AAMEAOBEGKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDBFCA0)
#define AAMEAOBEGKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDBFC70)
#define AAMEAOBEGKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBFC60)
#define AAMEAOBEGKA_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1DDBFCF0)
#define AAMEAOBEGKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDBFDD0)
#define AAMEAOBEGKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDBFD00)
#define AAMEAOBEGKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDBFF40)
#define AAMEAOBEGKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDBFC20)
#define AAMEAOBEGKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC0110)
#define AAMEAOBEGKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC00E0)
#define AAMEAOBEGKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDBFC50)
#define AAMEAOBEGKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDBFF70)
#define AAMEAOBEGKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDBFFD0)

inline static constexpr unsigned int AAMEAOBEGKA_TypeDefinitionIndex = 29558;

	class AAMEAOBEGKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NPFBAFODCBI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AAMEAOBEGKA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AAMEAOBEGKA*>**)UnitySDK::FromName("", "AAMEAOBEGKA")->GetStaticField(0x375C0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAMEAOBEGKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAMEAOBEGKA*))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAMEAOBEGKA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AAMEAOBEGKA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AAMEAOBEGKA*>*(*)())((::PBYTE)hIl2Cpp + AAMEAOBEGKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAMEAOBEGKA* Clone()
		{
			return ((::AAMEAOBEGKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAMEAOBEGKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAMEAOBEGKA*))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAMEAOBEGKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAMEAOBEGKA*))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAMEAOBEGKA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
