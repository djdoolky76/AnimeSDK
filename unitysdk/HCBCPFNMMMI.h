#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBCPFNMMMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCBCPFNMMMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5330D0)
#define HCBCPFNMMMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5333A0)
#define HCBCPFNMMMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E532D20)
#define HCBCPFNMMMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E532CF0)
#define HCBCPFNMMMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E532CE0)
#define HCBCPFNMMMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E532E90)
#define HCBCPFNMMMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E532DB0)
#define HCBCPFNMMMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E532F60)
#define HCBCPFNMMMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E532CA0)
#define HCBCPFNMMMI_LCNHPMCNIEN_OFFSET UNITYSDK_OFFSET(0x1E532D90)
#define HCBCPFNMMMI_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1E532D70)
#define HCBCPFNMMMI_LKKFLPIDKDJ_OFFSET UNITYSDK_OFFSET(0x1E532DA0)
#define HCBCPFNMMMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E533220)
#define HCBCPFNMMMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5331E0)
#define HCBCPFNMMMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E532CD0)
#define HCBCPFNMMMI_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1E532D80)
#define HCBCPFNMMMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E532F90)
#define HCBCPFNMMMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E532FF0)

inline static constexpr unsigned int HCBCPFNMMMI_TypeDefinitionIndex = 28064;

	class HCBCPFNMMMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJPCMINMFBI; // 0x18
		::System::UInt32 NOKCOPOOLBF; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCBCPFNMMMI")->GetStaticField(0x2F520);
		}

		// static const ::System::Object ACLGGLDCAEC; // 0x0
		// static const ::System::Object KKCKINEDDNC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCBCPFNMMMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBCPFNMMMI*))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCBCPFNMMMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCBCPFNMMMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCBCPFNMMMI* Clone()
		{
			return ((::HCBCPFNMMMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::UInt32 LCNHPMCNIEN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_LCNHPMCNIEN_OFFSET))(this);
		}

		::System::Void LKKFLPIDKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_LKKFLPIDKDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCBCPFNMMMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCBCPFNMMMI*))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCBCPFNMMMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBCPFNMMMI*))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCBCPFNMMMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
