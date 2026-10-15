#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAMBJHPNGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFAMBJHPNGE_BJFEELDOHJL_OFFSET UNITYSDK_OFFSET(0x1EA68B30)
#define BFAMBJHPNGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA68ED0)
#define BFAMBJHPNGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA690F0)
#define BFAMBJHPNGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA68AC0)
#define BFAMBJHPNGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA68A90)
#define BFAMBJHPNGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA68A80)
#define BFAMBJHPNGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA68C50)
#define BFAMBJHPNGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA68B50)
#define BFAMBJHPNGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA68DC0)
#define BFAMBJHPNGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA68A10)
#define BFAMBJHPNGE_LJFJADMIOFC_OFFSET UNITYSDK_OFFSET(0x1EA68B40)
#define BFAMBJHPNGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA68F90)
#define BFAMBJHPNGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA68F60)
#define BFAMBJHPNGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA68A70)
#define BFAMBJHPNGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA68DF0)
#define BFAMBJHPNGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA68E50)

inline static constexpr unsigned int BFAMBJHPNGE_TypeDefinitionIndex = 32884;

	class BFAMBJHPNGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MCJJLPELALP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BFAMBJHPNGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BFAMBJHPNGE*>**)UnitySDK::FromName("", "BFAMBJHPNGE")->GetStaticField(0x41C40);
		}

		// static const ::System::Object HABOCCDBEFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFAMBJHPNGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAMBJHPNGE*))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAMBJHPNGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BFAMBJHPNGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BFAMBJHPNGE*>*(*)())((::PBYTE)hIl2Cpp + BFAMBJHPNGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFAMBJHPNGE* Clone()
		{
			return ((::BFAMBJHPNGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_CLONE_OFFSET))(this);
		}

		::System::UInt32 BJFEELDOHJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_BJFEELDOHJL_OFFSET))(this);
		}

		::System::Void LJFJADMIOFC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_LJFJADMIOFC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFAMBJHPNGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFAMBJHPNGE*))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFAMBJHPNGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAMBJHPNGE*))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFAMBJHPNGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
