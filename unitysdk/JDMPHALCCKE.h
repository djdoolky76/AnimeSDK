#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDMPHALCCKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define JDMPHALCCKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E70FBC0)
#define JDMPHALCCKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70FF90)
#define JDMPHALCCKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E70F590)
#define JDMPHALCCKE_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E70F650)
#define JDMPHALCCKE_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E70F630)
#define JDMPHALCCKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E70F520)
#define JDMPHALCCKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70F510)
#define JDMPHALCCKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E70F800)
#define JDMPHALCCKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E70F670)
#define JDMPHALCCKE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E70F620)
#define JDMPHALCCKE_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E70F640)
#define JDMPHALCCKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E70F990)
#define JDMPHALCCKE_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E70F660)
#define JDMPHALCCKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E70F4D0)
#define JDMPHALCCKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E70FDB0)
#define JDMPHALCCKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E70FD10)
#define JDMPHALCCKE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E70F610)
#define JDMPHALCCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E70F500)
#define JDMPHALCCKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E70FA20)
#define JDMPHALCCKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E70FA80)

inline static constexpr unsigned int JDMPHALCCKE_TypeDefinitionIndex = 31400;

	class JDMPHALCCKE : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 KJAENGKDFJD; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JDMPHALCCKE")->GetStaticField(0x5E080);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDMPHALCCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDMPHALCCKE*))((::PBYTE)hIl2Cpp + JDMPHALCCKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDMPHALCCKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JDMPHALCCKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDMPHALCCKE* Clone()
		{
			return ((::JDMPHALCCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDMPHALCCKE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + JDMPHALCCKE_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDMPHALCCKE_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDMPHALCCKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDMPHALCCKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDMPHALCCKE*))((::PBYTE)hIl2Cpp + JDMPHALCCKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDMPHALCCKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMPHALCCKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDMPHALCCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDMPHALCCKE*))((::PBYTE)hIl2Cpp + JDMPHALCCKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDMPHALCCKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
