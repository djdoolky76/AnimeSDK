#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEKIMHBEOGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define AEKIMHBEOGP_ANKPMKDIJOD_OFFSET UNITYSDK_OFFSET(0x1F5DFA90)
#define AEKIMHBEOGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5E0030)
#define AEKIMHBEOGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5E0400)
#define AEKIMHBEOGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5DFA00)
#define AEKIMHBEOGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5DF990)
#define AEKIMHBEOGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DF980)
#define AEKIMHBEOGP_EKCMIABFCFE_OFFSET UNITYSDK_OFFSET(0x1F5DFA80)
#define AEKIMHBEOGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5DFC70)
#define AEKIMHBEOGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5DFAE0)
#define AEKIMHBEOGP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F5DFAD0)
#define AEKIMHBEOGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5DFE00)
#define AEKIMHBEOGP_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1F5DFAB0)
#define AEKIMHBEOGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5DF940)
#define AEKIMHBEOGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5E0220)
#define AEKIMHBEOGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5E0180)
#define AEKIMHBEOGP_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1F5DFAA0)
#define AEKIMHBEOGP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F5DFAC0)
#define AEKIMHBEOGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5DF970)
#define AEKIMHBEOGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5DFE90)
#define AEKIMHBEOGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5DFEF0)

inline static constexpr unsigned int AEKIMHBEOGP_TypeDefinitionIndex = 27265;

	class AEKIMHBEOGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* DALKEINMPBH; // 0x18
		::System::UInt32 JJIICCLJJLN; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::AEKIMHBEOGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AEKIMHBEOGP*>**)UnitySDK::FromName("", "AEKIMHBEOGP")->GetStaticField(0x3CD70);
		}

		// static const ::System::Object FKCBFKLGBPD; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEKIMHBEOGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEKIMHBEOGP*))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEKIMHBEOGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AEKIMHBEOGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AEKIMHBEOGP*>*(*)())((::PBYTE)hIl2Cpp + AEKIMHBEOGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEKIMHBEOGP* Clone()
		{
			return ((::AEKIMHBEOGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_CLONE_OFFSET))(this);
		}

		::System::UInt32 EKCMIABFCFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_EKCMIABFCFE_OFFSET))(this);
		}

		::System::Void ANKPMKDIJOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_ANKPMKDIJOD_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEKIMHBEOGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEKIMHBEOGP*))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEKIMHBEOGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEKIMHBEOGP*))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEKIMHBEOGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
