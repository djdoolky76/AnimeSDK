#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJMEGHIEIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define BPJMEGHIEIN_ANKEGLNNHFF_OFFSET UNITYSDK_OFFSET(0x1E049A60)
#define BPJMEGHIEIN_BGGEFJFNMDE_OFFSET UNITYSDK_OFFSET(0x1E049A00)
#define BPJMEGHIEIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E04A000)
#define BPJMEGHIEIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04A2F0)
#define BPJMEGHIEIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E049970)
#define BPJMEGHIEIN_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E049A30)
#define BPJMEGHIEIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E049900)
#define BPJMEGHIEIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0498F0)
#define BPJMEGHIEIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E049B90)
#define BPJMEGHIEIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E049A70)
#define BPJMEGHIEIN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E049A20)
#define BPJMEGHIEIN_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E049A40)
#define BPJMEGHIEIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E049D30)
#define BPJMEGHIEIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0498B0)
#define BPJMEGHIEIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E04A200)
#define BPJMEGHIEIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E04A150)
#define BPJMEGHIEIN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E049A10)
#define BPJMEGHIEIN_OCKPPOCHBHD_OFFSET UNITYSDK_OFFSET(0x1E049A50)
#define BPJMEGHIEIN_OJNOGEFJDDI_OFFSET UNITYSDK_OFFSET(0x1E0499F0)
#define BPJMEGHIEIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0498E0)
#define BPJMEGHIEIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E049DD0)
#define BPJMEGHIEIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E049E30)

	class BPJMEGHIEIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 LPLIGHEFFPL; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::Boolean KNDCKLFAMIG; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPJMEGHIEIN")->GetStaticField(0x55380);
		}

		// static const ::System::Object JEDEAHEFIDG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object KDNIGGADKHC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPJMEGHIEIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPJMEGHIEIN*))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPJMEGHIEIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPJMEGHIEIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPJMEGHIEIN* Clone()
		{
			return ((::BPJMEGHIEIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_CLONE_OFFSET))(this);
		}

		::System::Boolean OJNOGEFJDDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_OJNOGEFJDDI_OFFSET))(this);
		}

		::System::Void BGGEFJFNMDE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_BGGEFJFNMDE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OCKPPOCHBHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_OCKPPOCHBHD_OFFSET))(this);
		}

		::System::Void ANKEGLNNHFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_ANKEGLNNHFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPJMEGHIEIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPJMEGHIEIN*))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPJMEGHIEIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPJMEGHIEIN*))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPJMEGHIEIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
