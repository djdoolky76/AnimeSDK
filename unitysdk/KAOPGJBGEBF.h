#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAOPGJBGEBF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KAOPGJBGEBF_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E7BAE40)
#define KAOPGJBGEBF_BLKJCBBAFLH_OFFSET UNITYSDK_OFFSET(0x1E7BAE70)
#define KAOPGJBGEBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7BB1E0)
#define KAOPGJBGEBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BB590)
#define KAOPGJBGEBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7BADC0)
#define KAOPGJBGEBF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7BAD80)
#define KAOPGJBGEBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BAD70)
#define KAOPGJBGEBF_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E7BAE90)
#define KAOPGJBGEBF_EAKCCEICCJD_OFFSET UNITYSDK_OFFSET(0x1E7BAE60)
#define KAOPGJBGEBF_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E7BAE50)
#define KAOPGJBGEBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7BAF20)
#define KAOPGJBGEBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7BAEA0)
#define KAOPGJBGEBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7BAFF0)
#define KAOPGJBGEBF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7BAD00)
#define KAOPGJBGEBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7BB3F0)
#define KAOPGJBGEBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7BB3A0)
#define KAOPGJBGEBF_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E7BAE80)
#define KAOPGJBGEBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7BAD60)
#define KAOPGJBGEBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7BB020)
#define KAOPGJBGEBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7BB080)

inline static constexpr unsigned int KAOPGJBGEBF_TypeDefinitionIndex = 28293;

	class KAOPGJBGEBF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 DFKHBNCHKBI; // 0x18
		::System::UInt32 IAAJNAKLDGK; // 0x1C
		::System::UInt32 NPFBAFODCBI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KAOPGJBGEBF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KAOPGJBGEBF*>**)UnitySDK::FromName("", "KAOPGJBGEBF")->GetStaticField(0xD040);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object NDMEEJANMPP; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KAOPGJBGEBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAOPGJBGEBF*))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAOPGJBGEBF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KAOPGJBGEBF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KAOPGJBGEBF*>*(*)())((::PBYTE)hIl2Cpp + KAOPGJBGEBF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KAOPGJBGEBF* Clone()
		{
			return ((::KAOPGJBGEBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 EAKCCEICCJD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_EAKCCEICCJD_OFFSET))(this);
		}

		::System::Void BLKJCBBAFLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_BLKJCBBAFLH_OFFSET))(this, a1);
		}

		::System::Int32 MNLDMBGAJIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KAOPGJBGEBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAOPGJBGEBF*))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KAOPGJBGEBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAOPGJBGEBF*))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KAOPGJBGEBF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
