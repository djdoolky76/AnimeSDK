#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIHLJLKOPEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIHLJLKOPEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF3AAC0)
#define PIHLJLKOPEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3AD90)
#define PIHLJLKOPEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF3A710)
#define PIHLJLKOPEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF3A6E0)
#define PIHLJLKOPEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF19B30)
#define PIHLJLKOPEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF3A880)
#define PIHLJLKOPEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF3A7A0)
#define PIHLJLKOPEE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF3A790)
#define PIHLJLKOPEE_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1DF3A760)
#define PIHLJLKOPEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF3A950)
#define PIHLJLKOPEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF19AF0)
#define PIHLJLKOPEE_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1DF3A770)
#define PIHLJLKOPEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF3AC10)
#define PIHLJLKOPEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF3ABD0)
#define PIHLJLKOPEE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF3A780)
#define PIHLJLKOPEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF19B20)
#define PIHLJLKOPEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF3A980)
#define PIHLJLKOPEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF3A9E0)

inline static constexpr unsigned int PIHLJLKOPEE_TypeDefinitionIndex = 30164;

	class PIHLJLKOPEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PIHLJLKOPEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIHLJLKOPEE*>**)UnitySDK::FromName("", "PIHLJLKOPEE")->GetStaticField(0x34C80);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIHLJLKOPEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHLJLKOPEE*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIHLJLKOPEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIHLJLKOPEE*>*(*)())((::PBYTE)hIl2Cpp + PIHLJLKOPEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIHLJLKOPEE* Clone()
		{
			return ((::PIHLJLKOPEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIHLJLKOPEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIHLJLKOPEE*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIHLJLKOPEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHLJLKOPEE*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIHLJLKOPEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
