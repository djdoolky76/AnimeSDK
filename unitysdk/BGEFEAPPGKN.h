#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGEFEAPPGKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define BGEFEAPPGKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA72BE0)
#define BGEFEAPPGKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA72FC0)
#define BGEFEAPPGKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA725A0)
#define BGEFEAPPGKN_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1EA72630)
#define BGEFEAPPGKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA72520)
#define BGEFEAPPGKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA72510)
#define BGEFEAPPGKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA72820)
#define BGEFEAPPGKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA72690)
#define BGEFEAPPGKN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA72680)
#define BGEFEAPPGKN_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1EA72640)
#define BGEFEAPPGKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA729B0)
#define BGEFEAPPGKN_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1EA72660)
#define BGEFEAPPGKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA724D0)
#define BGEFEAPPGKN_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1EA72650)
#define BGEFEAPPGKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA72DE0)
#define BGEFEAPPGKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA72D40)
#define BGEFEAPPGKN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA72670)
#define BGEFEAPPGKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA72500)
#define BGEFEAPPGKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA72A40)
#define BGEFEAPPGKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA72AA0)

	class BGEFEAPPGKN : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGEFEAPPGKN")->GetStaticField(0x42A20);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGEFEAPPGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGEFEAPPGKN*))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGEFEAPPGKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGEFEAPPGKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGEFEAPPGKN* Clone()
		{
			return ((::BGEFEAPPGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGEFEAPPGKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGEFEAPPGKN*))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGEFEAPPGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGEFEAPPGKN*))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGEFEAPPGKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
