#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCLPBMPOHLI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCLPBMPOHLI_AFEIIEMGPMC_OFFSET UNITYSDK_OFFSET(0x1E413E60)
#define GCLPBMPOHLI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E414210)
#define GCLPBMPOHLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E414510)
#define GCLPBMPOHLI_CFEHJKILMBC_OFFSET UNITYSDK_OFFSET(0x1E413E70)
#define GCLPBMPOHLI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E413DE0)
#define GCLPBMPOHLI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E413DB0)
#define GCLPBMPOHLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E413DA0)
#define GCLPBMPOHLI_DFODJPODHBI_OFFSET UNITYSDK_OFFSET(0x1E413E50)
#define GCLPBMPOHLI_EKHJEOJMPOP_OFFSET UNITYSDK_OFFSET(0x1E413E90)
#define GCLPBMPOHLI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E413F00)
#define GCLPBMPOHLI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E413EB0)
#define GCLPBMPOHLI_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E413E40)
#define GCLPBMPOHLI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E413FE0)
#define GCLPBMPOHLI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E413D60)
#define GCLPBMPOHLI_KCLCAHMBDEJ_OFFSET UNITYSDK_OFFSET(0x1E413EA0)
#define GCLPBMPOHLI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E414470)
#define GCLPBMPOHLI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E414420)
#define GCLPBMPOHLI_NJBGHAGDIFN_OFFSET UNITYSDK_OFFSET(0x1E413E80)
#define GCLPBMPOHLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E413D90)
#define GCLPBMPOHLI_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E413E30)
#define GCLPBMPOHLI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E414020)
#define GCLPBMPOHLI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E414080)

inline static constexpr unsigned int GCLPBMPOHLI_TypeDefinitionIndex = 31319;

	class GCLPBMPOHLI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBHLHPDBNFD; // 0x18
		::System::UInt32 DHAOGAKEICO; // 0x1C
		::System::UInt32 PJMAPJIAFKI; // 0x20
		::System::UInt32 LMMHJENCICN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GCLPBMPOHLI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GCLPBMPOHLI*>**)UnitySDK::FromName("", "GCLPBMPOHLI")->GetStaticField(0xF080);
		}

		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object FMNBJEPDOFL; // 0x0
		// static const ::System::Object KNCHBKADOHB; // 0x0
		// static const ::System::Object OADCKLMLGIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCLPBMPOHLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCLPBMPOHLI*))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCLPBMPOHLI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GCLPBMPOHLI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GCLPBMPOHLI*>*(*)())((::PBYTE)hIl2Cpp + GCLPBMPOHLI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCLPBMPOHLI* Clone()
		{
			return ((::GCLPBMPOHLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::UInt32 DFODJPODHBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_DFODJPODHBI_OFFSET))(this);
		}

		::System::Void AFEIIEMGPMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_AFEIIEMGPMC_OFFSET))(this, a1);
		}

		::System::UInt32 CFEHJKILMBC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_CFEHJKILMBC_OFFSET))(this);
		}

		::System::Void NJBGHAGDIFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_NJBGHAGDIFN_OFFSET))(this, a1);
		}

		::System::UInt32 EKHJEOJMPOP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_EKHJEOJMPOP_OFFSET))(this);
		}

		::System::Void KCLCAHMBDEJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_KCLCAHMBDEJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCLPBMPOHLI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCLPBMPOHLI*))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCLPBMPOHLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCLPBMPOHLI*))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCLPBMPOHLI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
