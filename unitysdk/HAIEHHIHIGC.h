#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAIEHHIHIGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAIEHHIHIGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F819B30)
#define HAIEHHIHIGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F819DB0)
#define HAIEHHIHIGC_CDDICDNOAMC_OFFSET UNITYSDK_OFFSET(0x1F819640)
#define HAIEHHIHIGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8195B0)
#define HAIEHHIHIGC_COKNAPCCAOF_OFFSET UNITYSDK_OFFSET(0x1F819650)
#define HAIEHHIHIGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F819570)
#define HAIEHHIHIGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F819560)
#define HAIEHHIHIGC_DMHEFIBNFPC_OFFSET UNITYSDK_OFFSET(0x1F819630)
#define HAIEHHIHIGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8196D0)
#define HAIEHHIHIGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F819670)
#define HAIEHHIHIGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8198C0)
#define HAIEHHIHIGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8194F0)
#define HAIEHHIHIGC_JLDMEDLCKGI_OFFSET UNITYSDK_OFFSET(0x1F819660)
#define HAIEHHIHIGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F819C30)
#define HAIEHHIHIGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F819BE0)
#define HAIEHHIHIGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F819550)
#define HAIEHHIHIGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8199E0)
#define HAIEHHIHIGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F819A40)

inline static constexpr unsigned int HAIEHHIHIGC_TypeDefinitionIndex = 26532;

	class HAIEHHIHIGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double NOILEBPNLBP; // 0x18
		::System::UInt32 DCGBJMPOIJG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HAIEHHIHIGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HAIEHHIHIGC*>**)UnitySDK::FromName("", "HAIEHHIHIGC")->GetStaticField(0x1EFA0);
		}

		// static const ::System::Object OBBKCFGGOJH; // 0x0
		// static const ::System::Object EEHNPGPJBMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAIEHHIHIGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAIEHHIHIGC*))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAIEHHIHIGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HAIEHHIHIGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HAIEHHIHIGC*>*(*)())((::PBYTE)hIl2Cpp + HAIEHHIHIGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAIEHHIHIGC* Clone()
		{
			return ((::HAIEHHIHIGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_CLONE_OFFSET))(this);
		}

		::System::Double DMHEFIBNFPC()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_DMHEFIBNFPC_OFFSET))(this);
		}

		::System::Void CDDICDNOAMC(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_CDDICDNOAMC_OFFSET))(this, a1);
		}

		::System::UInt32 COKNAPCCAOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_COKNAPCCAOF_OFFSET))(this);
		}

		::System::Void JLDMEDLCKGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_JLDMEDLCKGI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAIEHHIHIGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAIEHHIHIGC*))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAIEHHIHIGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAIEHHIHIGC*))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAIEHHIHIGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
