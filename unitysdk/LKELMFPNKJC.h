#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKCDOOFJDKO;
class LKELMFPNKJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LKELMFPNKJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E960730)
#define LKELMFPNKJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E960BD0)
#define LKELMFPNKJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E95FF80)
#define LKELMFPNKJC_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E960070)
#define LKELMFPNKJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E95FEE0)
#define LKELMFPNKJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95FED0)
#define LKELMFPNKJC_EOBKNHHFEAB_OFFSET UNITYSDK_OFFSET(0x1E960060)
#define LKELMFPNKJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9602C0)
#define LKELMFPNKJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E960090)
#define LKELMFPNKJC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E960040)
#define LKELMFPNKJC_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E960080)
#define LKELMFPNKJC_GDMPEALDBPH_OFFSET UNITYSDK_OFFSET(0x1E960050)
#define LKELMFPNKJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9604F0)
#define LKELMFPNKJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E95FE90)
#define LKELMFPNKJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9609A0)
#define LKELMFPNKJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E960830)
#define LKELMFPNKJC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E960030)
#define LKELMFPNKJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E95FEC0)
#define LKELMFPNKJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E960590)
#define LKELMFPNKJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9605F0)

inline static constexpr unsigned int LKELMFPNKJC_TypeDefinitionIndex = 25936;

	class LKELMFPNKJC : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::IKCDOOFJDKO* DBBOMOKJNGE; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::LKELMFPNKJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LKELMFPNKJC*>**)UnitySDK::FromName("", "LKELMFPNKJC")->GetStaticField(0x3A160);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EMGPBNAFCPP; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKELMFPNKJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKELMFPNKJC*))((::PBYTE)hIl2Cpp + LKELMFPNKJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKELMFPNKJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LKELMFPNKJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LKELMFPNKJC*>*(*)())((::PBYTE)hIl2Cpp + LKELMFPNKJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKELMFPNKJC* Clone()
		{
			return ((::LKELMFPNKJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKELMFPNKJC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::IKCDOOFJDKO* GDMPEALDBPH()
		{
			return ((::IKCDOOFJDKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC_GDMPEALDBPH_OFFSET))(this);
		}

		::System::Void EOBKNHHFEAB(::IKCDOOFJDKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCDOOFJDKO*))((::PBYTE)hIl2Cpp + LKELMFPNKJC_EOBKNHHFEAB_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LKELMFPNKJC_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKELMFPNKJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKELMFPNKJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKELMFPNKJC*))((::PBYTE)hIl2Cpp + LKELMFPNKJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKELMFPNKJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKELMFPNKJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKELMFPNKJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKELMFPNKJC*))((::PBYTE)hIl2Cpp + LKELMFPNKJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKELMFPNKJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
