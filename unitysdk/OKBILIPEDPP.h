#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDLCMMOPKNG;
class OKBILIPEDPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKBILIPEDPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE8EFB0)
#define OKBILIPEDPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8F2A0)
#define OKBILIPEDPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE8EA60)
#define OKBILIPEDPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE8E9F0)
#define OKBILIPEDPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E9E0)
#define OKBILIPEDPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE8ECA0)
#define OKBILIPEDPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE8EB20)
#define OKBILIPEDPP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE8EB10)
#define OKBILIPEDPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE8EE20)
#define OKBILIPEDPP_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1DE8EAE0)
#define OKBILIPEDPP_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1DE8EAF0)
#define OKBILIPEDPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE8E9A0)
#define OKBILIPEDPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE8F100)
#define OKBILIPEDPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE8F080)
#define OKBILIPEDPP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE8EB00)
#define OKBILIPEDPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E9D0)
#define OKBILIPEDPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE8EE70)
#define OKBILIPEDPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE8EED0)

inline static constexpr unsigned int OKBILIPEDPP_TypeDefinitionIndex = 28159;

	class OKBILIPEDPP : public ::System::Object
	{
	public:
		::LDLCMMOPKNG* ODEBGOBLILD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OKBILIPEDPP")->GetStaticField(0x208C0);
		}

		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKBILIPEDPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKBILIPEDPP*))((::PBYTE)hIl2Cpp + OKBILIPEDPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKBILIPEDPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OKBILIPEDPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKBILIPEDPP* Clone()
		{
			return ((::OKBILIPEDPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_CLONE_OFFSET))(this);
		}

		::LDLCMMOPKNG* GPCIDCAANHB()
		{
			return ((::LDLCMMOPKNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::LDLCMMOPKNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDLCMMOPKNG*))((::PBYTE)hIl2Cpp + OKBILIPEDPP_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKBILIPEDPP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKBILIPEDPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKBILIPEDPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKBILIPEDPP*))((::PBYTE)hIl2Cpp + OKBILIPEDPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKBILIPEDPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKBILIPEDPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKBILIPEDPP*))((::PBYTE)hIl2Cpp + OKBILIPEDPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKBILIPEDPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
