#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJNNFOIKDKF;
class EHDNPMEKPCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJNNFOIKDKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4ADAD0)
#define DJNNFOIKDKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4ADDA0)
#define DJNNFOIKDKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4AD590)
#define DJNNFOIKDKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4AD520)
#define DJNNFOIKDKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4AD510)
#define DJNNFOIKDKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4AD7D0)
#define DJNNFOIKDKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4AD650)
#define DJNNFOIKDKF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F4AD620)
#define DJNNFOIKDKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4AD950)
#define DJNNFOIKDKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4AD4D0)
#define DJNNFOIKDKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4ADC10)
#define DJNNFOIKDKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4ADBA0)
#define DJNNFOIKDKF_NGOMLDBMEPF_OFFSET UNITYSDK_OFFSET(0x1F4AD640)
#define DJNNFOIKDKF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F4AD610)
#define DJNNFOIKDKF_ONMBIFNELDB_OFFSET UNITYSDK_OFFSET(0x1F4AD630)
#define DJNNFOIKDKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4AD500)
#define DJNNFOIKDKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4AD990)
#define DJNNFOIKDKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4AD9F0)

inline static constexpr unsigned int DJNNFOIKDKF_TypeDefinitionIndex = 32438;

	class DJNNFOIKDKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EHDNPMEKPCA* IPEHFPAIHKH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DJNNFOIKDKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJNNFOIKDKF*>**)UnitySDK::FromName("", "DJNNFOIKDKF")->GetStaticField(0x354D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FCDELJIKPMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJNNFOIKDKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJNNFOIKDKF*))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJNNFOIKDKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DJNNFOIKDKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJNNFOIKDKF*>*(*)())((::PBYTE)hIl2Cpp + DJNNFOIKDKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJNNFOIKDKF* Clone()
		{
			return ((::DJNNFOIKDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::EHDNPMEKPCA* ONMBIFNELDB()
		{
			return ((::EHDNPMEKPCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_ONMBIFNELDB_OFFSET))(this);
		}

		::System::Void NGOMLDBMEPF(::EHDNPMEKPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHDNPMEKPCA*))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_NGOMLDBMEPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJNNFOIKDKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJNNFOIKDKF*))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJNNFOIKDKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJNNFOIKDKF*))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJNNFOIKDKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
