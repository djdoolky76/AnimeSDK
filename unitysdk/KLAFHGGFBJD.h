#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLAFHGGFBJD;
class PICDJHEPJLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLAFHGGFBJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB9CE50)
#define KLAFHGGFBJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB9D120)
#define KLAFHGGFBJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB9C7C0)
#define KLAFHGGFBJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB9C710)
#define KLAFHGGFBJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB9C700)
#define KLAFHGGFBJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB9CA10)
#define KLAFHGGFBJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB9C8A0)
#define KLAFHGGFBJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB9CCE0)
#define KLAFHGGFBJD_IKONBPCNMAF_OFFSET UNITYSDK_OFFSET(0x1FB9C890)
#define KLAFHGGFBJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB9C6C0)
#define KLAFHGGFBJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB9CF70)
#define KLAFHGGFBJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB9CEB0)
#define KLAFHGGFBJD_NMMJOLDIHKE_OFFSET UNITYSDK_OFFSET(0x1FB9C880)
#define KLAFHGGFBJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB9C6F0)
#define KLAFHGGFBJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB9CD60)
#define KLAFHGGFBJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB9CDC0)

inline static constexpr unsigned int KLAFHGGFBJD_TypeDefinitionIndex = 26799;

	class KLAFHGGFBJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PICDJHEPJLC* CDLJOLFLPHN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KLAFHGGFBJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLAFHGGFBJD*>**)UnitySDK::FromName("", "KLAFHGGFBJD")->GetStaticField(0x17610);
		}

		// static const ::System::Object NKDCCHAFPFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLAFHGGFBJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLAFHGGFBJD*))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLAFHGGFBJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLAFHGGFBJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLAFHGGFBJD*>*(*)())((::PBYTE)hIl2Cpp + KLAFHGGFBJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLAFHGGFBJD* Clone()
		{
			return ((::KLAFHGGFBJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_CLONE_OFFSET))(this);
		}

		::PICDJHEPJLC* NMMJOLDIHKE()
		{
			return ((::PICDJHEPJLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_NMMJOLDIHKE_OFFSET))(this);
		}

		::System::Void IKONBPCNMAF(::PICDJHEPJLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICDJHEPJLC*))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_IKONBPCNMAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLAFHGGFBJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLAFHGGFBJD*))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLAFHGGFBJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLAFHGGFBJD*))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLAFHGGFBJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
