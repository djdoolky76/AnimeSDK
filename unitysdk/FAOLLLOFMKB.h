#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAOLLLOFMKB;
class FLCPJJMHAGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FAOLLLOFMKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32C210)
#define FAOLLLOFMKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32C660)
#define FAOLLLOFMKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32B9F0)
#define FAOLLLOFMKB_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E32BB10)
#define FAOLLLOFMKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32B920)
#define FAOLLLOFMKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32B910)
#define FAOLLLOFMKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32BD60)
#define FAOLLLOFMKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32BB30)
#define FAOLLLOFMKB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E32BB00)
#define FAOLLLOFMKB_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E32BB20)
#define FAOLLLOFMKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32BF90)
#define FAOLLLOFMKB_IIAFBICFDNM_OFFSET UNITYSDK_OFFSET(0x1E32BAD0)
#define FAOLLLOFMKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E32B8D0)
#define FAOLLLOFMKB_LBAIFEMOBID_OFFSET UNITYSDK_OFFSET(0x1E32BAE0)
#define FAOLLLOFMKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32C450)
#define FAOLLLOFMKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32C320)
#define FAOLLLOFMKB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E32BAF0)
#define FAOLLLOFMKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32B900)
#define FAOLLLOFMKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32C070)
#define FAOLLLOFMKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32C0D0)

	class FAOLLLOFMKB : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::FLCPJJMHAGO* FDLPOJFIPAH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FAOLLLOFMKB")->GetStaticField(0x58960);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FAOLLLOFMKB_JJGHOBBFNJD_OFFSET))();
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
