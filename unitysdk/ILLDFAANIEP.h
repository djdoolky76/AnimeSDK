#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILLDFAANIEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define ILLDFAANIEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B0FB0)
#define ILLDFAANIEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B1320)
#define ILLDFAANIEP_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1E6B0A50)
#define ILLDFAANIEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B0980)
#define ILLDFAANIEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B0900)
#define ILLDFAANIEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B08F0)
#define ILLDFAANIEP_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1E6B0A10)
#define ILLDFAANIEP_EFNDGKJCBAI_OFFSET UNITYSDK_OFFSET(0x1E6B0A40)
#define ILLDFAANIEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B0B90)
#define ILLDFAANIEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B0A90)
#define ILLDFAANIEP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6B0A80)
#define ILLDFAANIEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B0D20)
#define ILLDFAANIEP_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1E6B0A20)
#define ILLDFAANIEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B08B0)
#define ILLDFAANIEP_LHLBIEMKJGL_OFFSET UNITYSDK_OFFSET(0x1E6B0A30)
#define ILLDFAANIEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B1230)
#define ILLDFAANIEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B1180)
#define ILLDFAANIEP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6B0A70)
#define ILLDFAANIEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B08E0)
#define ILLDFAANIEP_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1E6B0A60)
#define ILLDFAANIEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B0DC0)
#define ILLDFAANIEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B0E20)

	class ILLDFAANIEP : public ::System::Object
	{
	public:
		::Proto::ItemList* JEDJCPJBEOM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 PHDGEOFBHGM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 DNIPIFDDAAE; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ILLDFAANIEP")->GetStaticField(0x56720);
		}

		// static const ::System::Object HPGDFCOBPGH; // 0x0
		// static const ::System::Object EGEDNCDAKPM; // 0x0
		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILLDFAANIEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILLDFAANIEP*))((::PBYTE)hIl2Cpp + ILLDFAANIEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILLDFAANIEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ILLDFAANIEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILLDFAANIEP* Clone()
		{
			return ((::ILLDFAANIEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* DPKOHJLBEBB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_DPKOHJLBEBB_OFFSET))(this);
		}

		::System::Void IJPLICKGMHC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + ILLDFAANIEP_IJPLICKGMHC_OFFSET))(this, a1);
		}

		::System::UInt32 LHLBIEMKJGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_LHLBIEMKJGL_OFFSET))(this);
		}

		::System::Void EFNDGKJCBAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILLDFAANIEP_EFNDGKJCBAI_OFFSET))(this, a1);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILLDFAANIEP_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILLDFAANIEP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILLDFAANIEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILLDFAANIEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILLDFAANIEP*))((::PBYTE)hIl2Cpp + ILLDFAANIEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILLDFAANIEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILLDFAANIEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILLDFAANIEP*))((::PBYTE)hIl2Cpp + ILLDFAANIEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILLDFAANIEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
