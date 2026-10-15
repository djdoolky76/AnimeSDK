#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDCHLAKNODJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LDCHLAKNODJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F4540)
#define LDCHLAKNODJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F48A0)
#define LDCHLAKNODJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F3F10)
#define LDCHLAKNODJ_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E8F3FD0)
#define LDCHLAKNODJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F3EA0)
#define LDCHLAKNODJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F3E90)
#define LDCHLAKNODJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F4110)
#define LDCHLAKNODJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F4010)
#define LDCHLAKNODJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8F3FA0)
#define LDCHLAKNODJ_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E8F3FE0)
#define LDCHLAKNODJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F42B0)
#define LDCHLAKNODJ_JFLOPGLLILL_OFFSET UNITYSDK_OFFSET(0x1E8F3FF0)
#define LDCHLAKNODJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F3E50)
#define LDCHLAKNODJ_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1E8F3FB0)
#define LDCHLAKNODJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F47B0)
#define LDCHLAKNODJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F4700)
#define LDCHLAKNODJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8F3F90)
#define LDCHLAKNODJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F3E80)
#define LDCHLAKNODJ_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1E8F3FC0)
#define LDCHLAKNODJ_PHAOINMGMIC_OFFSET UNITYSDK_OFFSET(0x1E8F4000)
#define LDCHLAKNODJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F4350)
#define LDCHLAKNODJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F43B0)

inline static constexpr unsigned int LDCHLAKNODJ_TypeDefinitionIndex = 30049;

	class LDCHLAKNODJ : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 MPFELJLKAFH; // 0x24
		::System::UInt32 OBNLHJDMDJH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::LDCHLAKNODJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDCHLAKNODJ*>**)UnitySDK::FromName("", "LDCHLAKNODJ")->GetStaticField(0x339E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CODFBJPPBGL; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object MMKBIMNHKON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDCHLAKNODJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCHLAKNODJ*))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDCHLAKNODJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDCHLAKNODJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDCHLAKNODJ*>*(*)())((::PBYTE)hIl2Cpp + LDCHLAKNODJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDCHLAKNODJ* Clone()
		{
			return ((::LDCHLAKNODJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 JFLOPGLLILL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_JFLOPGLLILL_OFFSET))(this);
		}

		::System::Void PHAOINMGMIC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_PHAOINMGMIC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDCHLAKNODJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDCHLAKNODJ*))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDCHLAKNODJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCHLAKNODJ*))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDCHLAKNODJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
