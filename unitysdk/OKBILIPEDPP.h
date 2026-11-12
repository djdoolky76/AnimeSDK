#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDLCMMOPKNG;
class OKBILIPEDPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKBILIPEDPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1371F0)
#define OKBILIPEDPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1374E0)
#define OKBILIPEDPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F136CB0)
#define OKBILIPEDPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F136C40)
#define OKBILIPEDPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F136C30)
#define OKBILIPEDPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F136EF0)
#define OKBILIPEDPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F136D70)
#define OKBILIPEDPP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F136D40)
#define OKBILIPEDPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F137070)
#define OKBILIPEDPP_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1F136D50)
#define OKBILIPEDPP_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1F136D60)
#define OKBILIPEDPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F136BF0)
#define OKBILIPEDPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F137340)
#define OKBILIPEDPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1372C0)
#define OKBILIPEDPP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F136D30)
#define OKBILIPEDPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F136C20)
#define OKBILIPEDPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1370B0)
#define OKBILIPEDPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F137110)

inline static constexpr unsigned int OKBILIPEDPP_TypeDefinitionIndex = 28749;

	class OKBILIPEDPP : public ::System::Object
	{
	public:
		::LDLCMMOPKNG* ODEBGOBLILD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OKBILIPEDPP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKBILIPEDPP*>**)UnitySDK::FromName("", "OKBILIPEDPP")->GetStaticField(0x1C1D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IFAMDLCBOAE; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::OKBILIPEDPP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKBILIPEDPP*>*(*)())((::PBYTE)hIl2Cpp + OKBILIPEDPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKBILIPEDPP* Clone()
		{
			return ((::OKBILIPEDPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKBILIPEDPP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::LDLCMMOPKNG* GPCIDCAANHB()
		{
			return ((::LDLCMMOPKNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBILIPEDPP_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::LDLCMMOPKNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDLCMMOPKNG*))((::PBYTE)hIl2Cpp + OKBILIPEDPP_JDLIMFLEDNJ_OFFSET))(this, a1);
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
