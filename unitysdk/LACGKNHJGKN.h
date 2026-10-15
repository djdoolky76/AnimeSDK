#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LACGKNHJGKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LACGKNHJGKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C8350)
#define LACGKNHJGKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C8730)
#define LACGKNHJGKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C7D10)
#define LACGKNHJGKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C7C90)
#define LACGKNHJGKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C7C80)
#define LACGKNHJGKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C7F90)
#define LACGKNHJGKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C7E00)
#define LACGKNHJGKN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8C7DD0)
#define LACGKNHJGKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C8120)
#define LACGKNHJGKN_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1E8C7DB0)
#define LACGKNHJGKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8C7C40)
#define LACGKNHJGKN_LCLPMNOJKAB_OFFSET UNITYSDK_OFFSET(0x1E8C7DE0)
#define LACGKNHJGKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C8550)
#define LACGKNHJGKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C84B0)
#define LACGKNHJGKN_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E8C7DA0)
#define LACGKNHJGKN_MNNLDMLJBJC_OFFSET UNITYSDK_OFFSET(0x1E8C7DF0)
#define LACGKNHJGKN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8C7DC0)
#define LACGKNHJGKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C7C70)
#define LACGKNHJGKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C81B0)
#define LACGKNHJGKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C8210)

inline static constexpr unsigned int LACGKNHJGKN_TypeDefinitionIndex = 34887;

	class LACGKNHJGKN : public ::System::Object
	{
	public:
		::Proto::ItemList* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 AEBPKJHHFFF; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LACGKNHJGKN")->GetStaticField(0x2E7C0);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EHFBKJCCDHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LACGKNHJGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LACGKNHJGKN*))((::PBYTE)hIl2Cpp + LACGKNHJGKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACGKNHJGKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LACGKNHJGKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LACGKNHJGKN* Clone()
		{
			return ((::LACGKNHJGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LACGKNHJGKN_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LACGKNHJGKN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 LCLPMNOJKAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN_LCLPMNOJKAB_OFFSET))(this);
		}

		::System::Void MNNLDMLJBJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LACGKNHJGKN_MNNLDMLJBJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LACGKNHJGKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LACGKNHJGKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LACGKNHJGKN*))((::PBYTE)hIl2Cpp + LACGKNHJGKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LACGKNHJGKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGKNHJGKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LACGKNHJGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LACGKNHJGKN*))((::PBYTE)hIl2Cpp + LACGKNHJGKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LACGKNHJGKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
