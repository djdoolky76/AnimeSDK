#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJHDDFIJJIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define GJHDDFIJJIC_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1E4A7A10)
#define GJHDDFIJJIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A7F80)
#define GJHDDFIJJIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A8340)
#define GJHDDFIJJIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A7950)
#define GJHDDFIJJIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A78E0)
#define GJHDDFIJJIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A78D0)
#define GJHDDFIJJIC_EGNOAJGMHPB_OFFSET UNITYSDK_OFFSET(0x1E4A79D0)
#define GJHDDFIJJIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A7BC0)
#define GJHDDFIJJIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A7A30)
#define GJHDDFIJJIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4A7A00)
#define GJHDDFIJJIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A7D50)
#define GJHDDFIJJIC_IPCECOKEEDF_OFFSET UNITYSDK_OFFSET(0x1E4A79E0)
#define GJHDDFIJJIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A7890)
#define GJHDDFIJJIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A8160)
#define GJHDDFIJJIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A80C0)
#define GJHDDFIJJIC_NGBNPMPMDEL_OFFSET UNITYSDK_OFFSET(0x1E4A7A20)
#define GJHDDFIJJIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4A79F0)
#define GJHDDFIJJIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A78C0)
#define GJHDDFIJJIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A7DE0)
#define GJHDDFIJJIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A7E40)

	class GJHDDFIJJIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* MIEINLKPIMJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 MGEDACJPGJA; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GJHDDFIJJIC")->GetStaticField(0x1B880);
		}

		// static const ::System::Object LCBFDOBJKAE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DFABHHAPAEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GJHDDFIJJIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJHDDFIJJIC*))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJHDDFIJJIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GJHDDFIJJIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GJHDDFIJJIC* Clone()
		{
			return ((::GJHDDFIJJIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGNOAJGMHPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_EGNOAJGMHPB_OFFSET))(this);
		}

		::System::Void IPCECOKEEDF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_IPCECOKEEDF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CACOAPFOAAM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_CACOAPFOAAM_OFFSET))(this);
		}

		::System::Void NGBNPMPMDEL(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_NGBNPMPMDEL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJHDDFIJJIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJHDDFIJJIC*))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GJHDDFIJJIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJHDDFIJJIC*))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GJHDDFIJJIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
