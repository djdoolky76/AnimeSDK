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

#define LDCHLAKNODJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C6FA0)
#define LDCHLAKNODJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C7300)
#define LDCHLAKNODJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C6970)
#define LDCHLAKNODJ_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E8C6A30)
#define LDCHLAKNODJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C6900)
#define LDCHLAKNODJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C68F0)
#define LDCHLAKNODJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C6B70)
#define LDCHLAKNODJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C6A70)
#define LDCHLAKNODJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8C6A00)
#define LDCHLAKNODJ_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E8C6A40)
#define LDCHLAKNODJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C6D10)
#define LDCHLAKNODJ_JFLOPGLLILL_OFFSET UNITYSDK_OFFSET(0x1E8C6A50)
#define LDCHLAKNODJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8C68B0)
#define LDCHLAKNODJ_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1E8C6A10)
#define LDCHLAKNODJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C7210)
#define LDCHLAKNODJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C7160)
#define LDCHLAKNODJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8C69F0)
#define LDCHLAKNODJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C68E0)
#define LDCHLAKNODJ_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1E8C6A20)
#define LDCHLAKNODJ_PHAOINMGMIC_OFFSET UNITYSDK_OFFSET(0x1E8C6A60)
#define LDCHLAKNODJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C6DB0)
#define LDCHLAKNODJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C6E10)

inline static constexpr unsigned int LDCHLAKNODJ_TypeDefinitionIndex = 30049;

	class LDCHLAKNODJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 MPFELJLKAFH; // 0x20
		::System::UInt32 OBNLHJDMDJH; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::LDCHLAKNODJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDCHLAKNODJ*>**)UnitySDK::FromName("", "LDCHLAKNODJ")->GetStaticField(0x2D0A0);
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
