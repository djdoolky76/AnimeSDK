#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJGFHIIBNGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define AJGFHIIBNGP_AJINEBLMBNB_OFFSET UNITYSDK_OFFSET(0x1E3C0E80)
#define AJGFHIIBNGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C13F0)
#define AJGFHIIBNGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C17D0)
#define AJGFHIIBNGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C0DB0)
#define AJGFHIIBNGP_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E3C0E40)
#define AJGFHIIBNGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C0D30)
#define AJGFHIIBNGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0D20)
#define AJGFHIIBNGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C1030)
#define AJGFHIIBNGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C0EA0)
#define AJGFHIIBNGP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3C0E70)
#define AJGFHIIBNGP_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E3C0E50)
#define AJGFHIIBNGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C11C0)
#define AJGFHIIBNGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C0CE0)
#define AJGFHIIBNGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C15F0)
#define AJGFHIIBNGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C1550)
#define AJGFHIIBNGP_OAECBHKJCEF_OFFSET UNITYSDK_OFFSET(0x1E3C0E90)
#define AJGFHIIBNGP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3C0E60)
#define AJGFHIIBNGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C0D10)
#define AJGFHIIBNGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C1250)
#define AJGFHIIBNGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C12B0)

	class AJGFHIIBNGP : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 DLAENJMCANJ; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AJGFHIIBNGP")->GetStaticField(0x34EE0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CNLGPDPICBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJGFHIIBNGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJGFHIIBNGP*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AJGFHIIBNGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJGFHIIBNGP* Clone()
		{
			return ((::AJGFHIIBNGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AJINEBLMBNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_AJINEBLMBNB_OFFSET))(this);
		}

		::System::Void OAECBHKJCEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_OAECBHKJCEF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJGFHIIBNGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJGFHIIBNGP*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJGFHIIBNGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJGFHIIBNGP*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
