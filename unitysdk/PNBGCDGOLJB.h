#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNBGCDGOLJB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define PNBGCDGOLJB_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1DFB2190)
#define PNBGCDGOLJB_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1DFB2160)
#define PNBGCDGOLJB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB2700)
#define PNBGCDGOLJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2A70)
#define PNBGCDGOLJB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB20D0)
#define PNBGCDGOLJB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB2050)
#define PNBGCDGOLJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2040)
#define PNBGCDGOLJB_EGNOAJGMHPB_OFFSET UNITYSDK_OFFSET(0x1DFB21C0)
#define PNBGCDGOLJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB22E0)
#define PNBGCDGOLJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB21E0)
#define PNBGCDGOLJB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DFB21B0)
#define PNBGCDGOLJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB2470)
#define PNBGCDGOLJB_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1DFB2180)
#define PNBGCDGOLJB_IPCECOKEEDF_OFFSET UNITYSDK_OFFSET(0x1DFB21D0)
#define PNBGCDGOLJB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFB2000)
#define PNBGCDGOLJB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB2980)
#define PNBGCDGOLJB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB28D0)
#define PNBGCDGOLJB_NGBNPMPMDEL_OFFSET UNITYSDK_OFFSET(0x1DFB2170)
#define PNBGCDGOLJB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DFB21A0)
#define PNBGCDGOLJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2030)
#define PNBGCDGOLJB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB2510)
#define PNBGCDGOLJB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB2570)

inline static constexpr unsigned int PNBGCDGOLJB_TypeDefinitionIndex = 30138;

	class PNBGCDGOLJB : public ::System::Object
	{
	public:
		::Proto::ItemList* MIEINLKPIMJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BFOBOOGAHKB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 MGEDACJPGJA; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNBGCDGOLJB")->GetStaticField(0x4E520);
		}

		// static const ::System::Object DFABHHAPAEA; // 0x0
		// static const ::System::Object HOHDLIKKMBH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LCBFDOBJKAE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNBGCDGOLJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNBGCDGOLJB*))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNBGCDGOLJB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNBGCDGOLJB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNBGCDGOLJB* Clone()
		{
			return ((::PNBGCDGOLJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CACOAPFOAAM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_CACOAPFOAAM_OFFSET))(this);
		}

		::System::Void NGBNPMPMDEL(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_NGBNPMPMDEL_OFFSET))(this, a1);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 EGNOAJGMHPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_EGNOAJGMHPB_OFFSET))(this);
		}

		::System::Void IPCECOKEEDF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_IPCECOKEEDF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNBGCDGOLJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNBGCDGOLJB*))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNBGCDGOLJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNBGCDGOLJB*))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNBGCDGOLJB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
