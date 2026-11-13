#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPLFEKKNLDO;
class GNMCIEPEBPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPLFEKKNLDO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204EBA30)
#define CPLFEKKNLDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x204EBDD0)
#define CPLFEKKNLDO_CLONE_OFFSET UNITYSDK_OFFSET(0x204EB470)
#define CPLFEKKNLDO_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x204EB570)
#define CPLFEKKNLDO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204EB3E0)
#define CPLFEKKNLDO_CTOR_OFFSET UNITYSDK_OFFSET(0x204EB3D0)
#define CPLFEKKNLDO_EBNIHELLMGJ_OFFSET UNITYSDK_OFFSET(0x204EB520)
#define CPLFEKKNLDO_ECKHFFNPDKF_OFFSET UNITYSDK_OFFSET(0x204EB540)
#define CPLFEKKNLDO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204EB610)
#define CPLFEKKNLDO_EQUALS_OFFSET UNITYSDK_OFFSET(0x204EB590)
#define CPLFEKKNLDO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x204EB560)
#define CPLFEKKNLDO_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x204EB580)
#define CPLFEKKNLDO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204EB7B0)
#define CPLFEKKNLDO_IDAMGMKBLJM_OFFSET UNITYSDK_OFFSET(0x204EB530)
#define CPLFEKKNLDO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204EB390)
#define CPLFEKKNLDO_LMDEHJOALHN_OFFSET UNITYSDK_OFFSET(0x204EB510)
#define CPLFEKKNLDO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204EBC90)
#define CPLFEKKNLDO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204EBB80)
#define CPLFEKKNLDO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x204EB550)
#define CPLFEKKNLDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204EB3C0)
#define CPLFEKKNLDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204EB800)
#define CPLFEKKNLDO_WRITETO_OFFSET UNITYSDK_OFFSET(0x204EB860)

inline static constexpr unsigned int CPLFEKKNLDO_TypeDefinitionIndex = 32847;

	class CPLFEKKNLDO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GNMCIEPEBPK* JDAFJANAEBG; // 0x18
		::System::Boolean PKOJJDDADLO; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 KGHDHDBLGAO; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CPLFEKKNLDO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPLFEKKNLDO*>**)UnitySDK::FromName("", "CPLFEKKNLDO")->GetStaticField(0x19BA0);
		}

		// static const ::System::Object JLOGLBHDPMH; // 0x0
		// static const ::System::Object DGKOBHIACHK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPLFEKKNLDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPLFEKKNLDO*))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPLFEKKNLDO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPLFEKKNLDO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPLFEKKNLDO*>*(*)())((::PBYTE)hIl2Cpp + CPLFEKKNLDO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPLFEKKNLDO* Clone()
		{
			return ((::CPLFEKKNLDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_CLONE_OFFSET))(this);
		}

		::System::UInt32 LMDEHJOALHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_LMDEHJOALHN_OFFSET))(this);
		}

		::System::Void EBNIHELLMGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_EBNIHELLMGJ_OFFSET))(this, a1);
		}

		::System::Boolean IDAMGMKBLJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_IDAMGMKBLJM_OFFSET))(this);
		}

		::System::Void ECKHFFNPDKF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_ECKHFFNPDKF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GNMCIEPEBPK* CPCEGCCEMIM()
		{
			return ((::GNMCIEPEBPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::GNMCIEPEBPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNMCIEPEBPK*))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPLFEKKNLDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPLFEKKNLDO*))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPLFEKKNLDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPLFEKKNLDO*))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPLFEKKNLDO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
