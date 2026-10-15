#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPCDHLLOEJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPCDHLLOEJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA86A70)
#define MPCDHLLOEJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA86E00)
#define MPCDHLLOEJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA86650)
#define MPCDHLLOEJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA86610)
#define MPCDHLLOEJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA86600)
#define MPCDHLLOEJM_ENDBLFECBCB_OFFSET UNITYSDK_OFFSET(0x1EA866A0)
#define MPCDHLLOEJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA867E0)
#define MPCDHLLOEJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA86700)
#define MPCDHLLOEJM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA866D0)
#define MPCDHLLOEJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA868B0)
#define MPCDHLLOEJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA865C0)
#define MPCDHLLOEJM_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1EA866E0)
#define MPCDHLLOEJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA86C50)
#define MPCDHLLOEJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA86C00)
#define MPCDHLLOEJM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA866C0)
#define MPCDHLLOEJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA865F0)
#define MPCDHLLOEJM_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1EA866F0)
#define MPCDHLLOEJM_PPCFBDNNBCC_OFFSET UNITYSDK_OFFSET(0x1EA866B0)
#define MPCDHLLOEJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA868E0)
#define MPCDHLLOEJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA86940)

inline static constexpr unsigned int MPCDHLLOEJM_TypeDefinitionIndex = 30626;

	class MPCDHLLOEJM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 HJPCMINMFBI; // 0x1C
		::System::UInt32 NECNCPDGBOO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MPCDHLLOEJM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPCDHLLOEJM*>**)UnitySDK::FromName("", "MPCDHLLOEJM")->GetStaticField(0x5B5B0);
		}

		// static const ::System::Object IOAMBHCDNBJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ACLGGLDCAEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPCDHLLOEJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPCDHLLOEJM*))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPCDHLLOEJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPCDHLLOEJM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPCDHLLOEJM*>*(*)())((::PBYTE)hIl2Cpp + MPCDHLLOEJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPCDHLLOEJM* Clone()
		{
			return ((::MPCDHLLOEJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENDBLFECBCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_ENDBLFECBCB_OFFSET))(this);
		}

		::System::Void PPCFBDNNBCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_PPCFBDNNBCC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPCDHLLOEJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPCDHLLOEJM*))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPCDHLLOEJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPCDHLLOEJM*))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPCDHLLOEJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
