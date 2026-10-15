#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJNNFOIKDKF;
class EHDNPMEKPCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJNNFOIKDKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D1F20)
#define DJNNFOIKDKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D21F0)
#define DJNNFOIKDKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D19E0)
#define DJNNFOIKDKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D1970)
#define DJNNFOIKDKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D1960)
#define DJNNFOIKDKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D1C20)
#define DJNNFOIKDKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D1AA0)
#define DJNNFOIKDKF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1D1A70)
#define DJNNFOIKDKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D1DA0)
#define DJNNFOIKDKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D1920)
#define DJNNFOIKDKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D2060)
#define DJNNFOIKDKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D1FF0)
#define DJNNFOIKDKF_NGOMLDBMEPF_OFFSET UNITYSDK_OFFSET(0x1E1D1A90)
#define DJNNFOIKDKF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1D1A60)
#define DJNNFOIKDKF_ONMBIFNELDB_OFFSET UNITYSDK_OFFSET(0x1E1D1A80)
#define DJNNFOIKDKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D1950)
#define DJNNFOIKDKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D1DE0)
#define DJNNFOIKDKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D1E40)

	class DJNNFOIKDKF : public ::System::Object
	{
	public:
		::EHDNPMEKPCA* IPEHFPAIHKH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DJNNFOIKDKF")->GetStaticField(0x39CD0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DJNNFOIKDKF_JJGHOBBFNJD_OFFSET))();
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
