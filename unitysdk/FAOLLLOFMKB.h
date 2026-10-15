#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAOLLLOFMKB;
class FLCPJJMHAGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FAOLLLOFMKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2FEB80)
#define FAOLLLOFMKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FEFD0)
#define FAOLLLOFMKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FE360)
#define FAOLLLOFMKB_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E2FE480)
#define FAOLLLOFMKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FE290)
#define FAOLLLOFMKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FE280)
#define FAOLLLOFMKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2FE6D0)
#define FAOLLLOFMKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FE4A0)
#define FAOLLLOFMKB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2FE470)
#define FAOLLLOFMKB_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E2FE490)
#define FAOLLLOFMKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2FE900)
#define FAOLLLOFMKB_IIAFBICFDNM_OFFSET UNITYSDK_OFFSET(0x1E2FE440)
#define FAOLLLOFMKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FE240)
#define FAOLLLOFMKB_LBAIFEMOBID_OFFSET UNITYSDK_OFFSET(0x1E2FE450)
#define FAOLLLOFMKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FEDC0)
#define FAOLLLOFMKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FEC90)
#define FAOLLLOFMKB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2FE460)
#define FAOLLLOFMKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FE270)
#define FAOLLLOFMKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2FE9E0)
#define FAOLLLOFMKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2FEA40)

inline static constexpr unsigned int FAOLLLOFMKB_TypeDefinitionIndex = 32772;

	class FAOLLLOFMKB : public ::System::Object
	{
	public:
		::FLCPJJMHAGO* FDLPOJFIPAH; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::FAOLLLOFMKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAOLLLOFMKB*>**)UnitySDK::FromName("", "FAOLLLOFMKB")->GetStaticField(0x4D720);
		}

		// static const ::System::Object HEMMOAJDEFK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAOLLLOFMKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAOLLLOFMKB*))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAOLLLOFMKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FAOLLLOFMKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FAOLLLOFMKB*>*(*)())((::PBYTE)hIl2Cpp + FAOLLLOFMKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAOLLLOFMKB* Clone()
		{
			return ((::FAOLLLOFMKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_CLONE_OFFSET))(this);
		}

		::FLCPJJMHAGO* IIAFBICFDNM()
		{
			return ((::FLCPJJMHAGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_IIAFBICFDNM_OFFSET))(this);
		}

		::System::Void LBAIFEMOBID(::FLCPJJMHAGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCPJJMHAGO*))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_LBAIFEMOBID_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAOLLLOFMKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAOLLLOFMKB*))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAOLLLOFMKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAOLLLOFMKB*))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAOLLLOFMKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
