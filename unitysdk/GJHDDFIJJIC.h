#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJHDDFIJJIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define GJHDDFIJJIC_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1E47A380)
#define GJHDDFIJJIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E47A8F0)
#define GJHDDFIJJIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47ACB0)
#define GJHDDFIJJIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E47A2C0)
#define GJHDDFIJJIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E47A250)
#define GJHDDFIJJIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47A240)
#define GJHDDFIJJIC_EGNOAJGMHPB_OFFSET UNITYSDK_OFFSET(0x1E47A340)
#define GJHDDFIJJIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E47A530)
#define GJHDDFIJJIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E47A3A0)
#define GJHDDFIJJIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E47A370)
#define GJHDDFIJJIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E47A6C0)
#define GJHDDFIJJIC_IPCECOKEEDF_OFFSET UNITYSDK_OFFSET(0x1E47A350)
#define GJHDDFIJJIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E47A200)
#define GJHDDFIJJIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E47AAD0)
#define GJHDDFIJJIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E47AA30)
#define GJHDDFIJJIC_NGBNPMPMDEL_OFFSET UNITYSDK_OFFSET(0x1E47A390)
#define GJHDDFIJJIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E47A360)
#define GJHDDFIJJIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E47A230)
#define GJHDDFIJJIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E47A750)
#define GJHDDFIJJIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E47A7B0)

inline static constexpr unsigned int GJHDDFIJJIC_TypeDefinitionIndex = 30142;

	class GJHDDFIJJIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* MIEINLKPIMJ; // 0x18
		::System::UInt32 MGEDACJPGJA; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GJHDDFIJJIC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GJHDDFIJJIC*>**)UnitySDK::FromName("", "GJHDDFIJJIC")->GetStaticField(0x19F60);
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

		static ::Google::Protobuf::MessageParser_1<::GJHDDFIJJIC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GJHDDFIJJIC*>*(*)())((::PBYTE)hIl2Cpp + GJHDDFIJJIC_JJGHOBBFNJD_OFFSET))();
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
