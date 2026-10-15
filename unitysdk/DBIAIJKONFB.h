#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBIAIJKONFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DBIAIJKONFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E15CF90)
#define DBIAIJKONFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15D2B0)
#define DBIAIJKONFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E15CA00)
#define DBIAIJKONFB_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E15CAA0)
#define DBIAIJKONFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E15C990)
#define DBIAIJKONFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15C980)
#define DBIAIJKONFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E15CC40)
#define DBIAIJKONFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E15CAC0)
#define DBIAIJKONFB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E15CA90)
#define DBIAIJKONFB_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E15CAB0)
#define DBIAIJKONFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E15CDC0)
#define DBIAIJKONFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E15C940)
#define DBIAIJKONFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E15D0F0)
#define DBIAIJKONFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E15D060)
#define DBIAIJKONFB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E15CA80)
#define DBIAIJKONFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E15C970)
#define DBIAIJKONFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E15CE50)
#define DBIAIJKONFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E15CEB0)

	class DBIAIJKONFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBIAIJKONFB")->GetStaticField(0x25F00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAIJKONFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBIAIJKONFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBIAIJKONFB*))((::PBYTE)hIl2Cpp + DBIAIJKONFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBIAIJKONFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBIAIJKONFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAIJKONFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBIAIJKONFB* Clone()
		{
			return ((::DBIAIJKONFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAIJKONFB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAIJKONFB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBIAIJKONFB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAIJKONFB_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DBIAIJKONFB_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBIAIJKONFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBIAIJKONFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBIAIJKONFB*))((::PBYTE)hIl2Cpp + DBIAIJKONFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAIJKONFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAIJKONFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBIAIJKONFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAIJKONFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBIAIJKONFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBIAIJKONFB*))((::PBYTE)hIl2Cpp + DBIAIJKONFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBIAIJKONFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
