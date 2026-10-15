#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPHCFHCEGOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CPHCFHCEGOG_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x1E13E1C0)
#define CPHCFHCEGOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13E720)
#define CPHCFHCEGOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13EA90)
#define CPHCFHCEGOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E13E0F0)
#define CPHCFHCEGOG_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E13E180)
#define CPHCFHCEGOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E13E070)
#define CPHCFHCEGOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13E060)
#define CPHCFHCEGOG_DBBJMKJJDMB_OFFSET UNITYSDK_OFFSET(0x1E13E1D0)
#define CPHCFHCEGOG_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E13E1E0)
#define CPHCFHCEGOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13E300)
#define CPHCFHCEGOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E13E200)
#define CPHCFHCEGOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E13E1B0)
#define CPHCFHCEGOG_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E13E190)
#define CPHCFHCEGOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13E490)
#define CPHCFHCEGOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E13E020)
#define CPHCFHCEGOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13E9A0)
#define CPHCFHCEGOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13E8F0)
#define CPHCFHCEGOG_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E13E1F0)
#define CPHCFHCEGOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E13E1A0)
#define CPHCFHCEGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E13E050)
#define CPHCFHCEGOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13E530)
#define CPHCFHCEGOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13E590)

	class CPHCFHCEGOG : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AIKAJDGKENP; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPHCFHCEGOG")->GetStaticField(0x22670);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CEFHBPCEDIF; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPHCFHCEGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPHCFHCEGOG*))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPHCFHCEGOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPHCFHCEGOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPHCFHCEGOG* Clone()
		{
			return ((::CPHCFHCEGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AFDDABNNLJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_AFDDABNNLJP_OFFSET))(this);
		}

		::System::Void DBBJMKJJDMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_DBBJMKJJDMB_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPHCFHCEGOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPHCFHCEGOG*))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPHCFHCEGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPHCFHCEGOG*))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPHCFHCEGOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
