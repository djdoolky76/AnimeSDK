#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LADNPPKPJGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LADNPPKPJGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20385240)
#define LADNPPKPJGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x20385620)
#define LADNPPKPJGM_CLONE_OFFSET UNITYSDK_OFFSET(0x20384C00)
#define LADNPPKPJGM_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x20384C90)
#define LADNPPKPJGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20384B80)
#define LADNPPKPJGM_CTOR_OFFSET UNITYSDK_OFFSET(0x20384B70)
#define LADNPPKPJGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20384E80)
#define LADNPPKPJGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20384CF0)
#define LADNPPKPJGM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20384CC0)
#define LADNPPKPJGM_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x20384CA0)
#define LADNPPKPJGM_GBLDMKDBOIB_OFFSET UNITYSDK_OFFSET(0x20384CE0)
#define LADNPPKPJGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20385010)
#define LADNPPKPJGM_GLPDJFFEILA_OFFSET UNITYSDK_OFFSET(0x20384CD0)
#define LADNPPKPJGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20384B30)
#define LADNPPKPJGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20385440)
#define LADNPPKPJGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203853A0)
#define LADNPPKPJGM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20384CB0)
#define LADNPPKPJGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20384B60)
#define LADNPPKPJGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203850A0)
#define LADNPPKPJGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x20385100)

inline static constexpr unsigned int LADNPPKPJGM_TypeDefinitionIndex = 35471;

	class LADNPPKPJGM : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KDHBDECBPJK; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LADNPPKPJGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LADNPPKPJGM*>**)UnitySDK::FromName("", "LADNPPKPJGM")->GetStaticField(0x236F0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ELFBAKNFEIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LADNPPKPJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LADNPPKPJGM*))((::PBYTE)hIl2Cpp + LADNPPKPJGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LADNPPKPJGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LADNPPKPJGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LADNPPKPJGM*>*(*)())((::PBYTE)hIl2Cpp + LADNPPKPJGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LADNPPKPJGM* Clone()
		{
			return ((::LADNPPKPJGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LADNPPKPJGM_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LADNPPKPJGM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GLPDJFFEILA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM_GLPDJFFEILA_OFFSET))(this);
		}

		::System::Void GBLDMKDBOIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LADNPPKPJGM_GBLDMKDBOIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LADNPPKPJGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LADNPPKPJGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LADNPPKPJGM*))((::PBYTE)hIl2Cpp + LADNPPKPJGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LADNPPKPJGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LADNPPKPJGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LADNPPKPJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LADNPPKPJGM*))((::PBYTE)hIl2Cpp + LADNPPKPJGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LADNPPKPJGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
