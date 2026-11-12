#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEFFOCFJNBF;
class CAGKEDMHEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEFFOCFJNBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFEEEF0)
#define AEFFOCFJNBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFEF210)
#define AEFFOCFJNBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFEE8F0)
#define AEFFOCFJNBF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFEE880)
#define AEFFOCFJNBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFEE870)
#define AEFFOCFJNBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFEEB90)
#define AEFFOCFJNBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFEE9E0)
#define AEFFOCFJNBF_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1EFEE9D0)
#define AEFFOCFJNBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFEED10)
#define AEFFOCFJNBF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFEE800)
#define AEFFOCFJNBF_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1EFEE9A0)
#define AEFFOCFJNBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFEF050)
#define AEFFOCFJNBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFEEFC0)
#define AEFFOCFJNBF_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1EFEE9C0)
#define AEFFOCFJNBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFEE860)
#define AEFFOCFJNBF_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1EFEE9B0)
#define AEFFOCFJNBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFEEDB0)
#define AEFFOCFJNBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFEEE10)

inline static constexpr unsigned int AEFFOCFJNBF_TypeDefinitionIndex = 33559;

	class AEFFOCFJNBF : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AEFFOCFJNBF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AEFFOCFJNBF*>**)UnitySDK::FromName("", "AEFFOCFJNBF")->GetStaticField(0x2F030);
		}

		// static const ::System::Object NGPKIDLBPIA; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEFFOCFJNBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEFFOCFJNBF*))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEFFOCFJNBF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AEFFOCFJNBF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AEFFOCFJNBF*>*(*)())((::PBYTE)hIl2Cpp + AEFFOCFJNBF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEFFOCFJNBF* Clone()
		{
			return ((::AEFFOCFJNBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEFFOCFJNBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEFFOCFJNBF*))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEFFOCFJNBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEFFOCFJNBF*))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEFFOCFJNBF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
