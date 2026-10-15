#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPKDOKMHBKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FPKDOKMHBKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E40B650)
#define FPKDOKMHBKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40BA30)
#define FPKDOKMHBKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E40B010)
#define FPKDOKMHBKN_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E40B0A0)
#define FPKDOKMHBKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E40AF90)
#define FPKDOKMHBKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40AF80)
#define FPKDOKMHBKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E40B290)
#define FPKDOKMHBKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E40B100)
#define FPKDOKMHBKN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E40B0D0)
#define FPKDOKMHBKN_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E40B0B0)
#define FPKDOKMHBKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E40B420)
#define FPKDOKMHBKN_HGNNGJAIOLF_OFFSET UNITYSDK_OFFSET(0x1E40B0F0)
#define FPKDOKMHBKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E40AF40)
#define FPKDOKMHBKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E40B850)
#define FPKDOKMHBKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E40B7B0)
#define FPKDOKMHBKN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E40B0C0)
#define FPKDOKMHBKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E40AF70)
#define FPKDOKMHBKN_PJGDGMIGHNM_OFFSET UNITYSDK_OFFSET(0x1E40B0E0)
#define FPKDOKMHBKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E40B4B0)
#define FPKDOKMHBKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E40B510)

	class FPKDOKMHBKN : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AFOPKCDLNHE; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FPKDOKMHBKN")->GetStaticField(0x696B0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NHJCMCFOMEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPKDOKMHBKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPKDOKMHBKN*))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPKDOKMHBKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FPKDOKMHBKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPKDOKMHBKN* Clone()
		{
			return ((::FPKDOKMHBKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PJGDGMIGHNM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_PJGDGMIGHNM_OFFSET))(this);
		}

		::System::Void HGNNGJAIOLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_HGNNGJAIOLF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPKDOKMHBKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPKDOKMHBKN*))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPKDOKMHBKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPKDOKMHBKN*))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPKDOKMHBKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
