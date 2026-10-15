#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDABMABJFII.h"
#include "unitysdk/System/Object.h"
class BBIPCFPDEJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBIPCFPDEJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C7200)
#define BBIPCFPDEJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7560)
#define BBIPCFPDEJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C6DD0)
#define BBIPCFPDEJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C6D90)
#define BBIPCFPDEJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C6D80)
#define BBIPCFPDEJN_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1E7C6E70)
#define BBIPCFPDEJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C6FA0)
#define BBIPCFPDEJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C6E90)
#define BBIPCFPDEJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C7070)
#define BBIPCFPDEJN_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1E7C6E80)
#define BBIPCFPDEJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C6D10)
#define BBIPCFPDEJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C73E0)
#define BBIPCFPDEJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C73A0)
#define BBIPCFPDEJN_NCKALKBFLEK_OFFSET UNITYSDK_OFFSET(0x1E7C6E60)
#define BBIPCFPDEJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C6D70)
#define BBIPCFPDEJN_PJEOEGGFGIE_OFFSET UNITYSDK_OFFSET(0x1E7C6E50)
#define BBIPCFPDEJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C70B0)
#define BBIPCFPDEJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C7110)

inline static constexpr unsigned int BBIPCFPDEJN_TypeDefinitionIndex = 30029;

	class BBIPCFPDEJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 JBMPECCIBJK; // 0x18
		::CDABMABJFII EMHBAOIIKLC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BBIPCFPDEJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBIPCFPDEJN*>**)UnitySDK::FromName("", "BBIPCFPDEJN")->GetStaticField(0x47DB0);
		}

		// static const ::System::Object DJDEJENDCBC; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBIPCFPDEJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBIPCFPDEJN*))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBIPCFPDEJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BBIPCFPDEJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBIPCFPDEJN*>*(*)())((::PBYTE)hIl2Cpp + BBIPCFPDEJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBIPCFPDEJN* Clone()
		{
			return ((::BBIPCFPDEJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_CLONE_OFFSET))(this);
		}

		::System::UInt64 PJEOEGGFGIE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_PJEOEGGFGIE_OFFSET))(this);
		}

		::System::Void NCKALKBFLEK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_NCKALKBFLEK_OFFSET))(this, a1);
		}

		::CDABMABJFII EJDIMEGMAKG()
		{
			return ((::CDABMABJFII(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::CDABMABJFII a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDABMABJFII))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBIPCFPDEJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBIPCFPDEJN*))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBIPCFPDEJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBIPCFPDEJN*))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBIPCFPDEJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
