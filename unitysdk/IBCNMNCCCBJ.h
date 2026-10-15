#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBCNMNCCCBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define IBCNMNCCCBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E610FB0)
#define IBCNMNCCCBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6112D0)
#define IBCNMNCCCBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6109B0)
#define IBCNMNCCCBJ_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E610A60)
#define IBCNMNCCCBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E610940)
#define IBCNMNCCCBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E610930)
#define IBCNMNCCCBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E610C50)
#define IBCNMNCCCBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E610AA0)
#define IBCNMNCCCBJ_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E610A70)
#define IBCNMNCCCBJ_FKEHDJHGBKA_OFFSET UNITYSDK_OFFSET(0x1E610A80)
#define IBCNMNCCCBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E610DD0)
#define IBCNMNCCCBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6108C0)
#define IBCNMNCCCBJ_KEIGMKMNENL_OFFSET UNITYSDK_OFFSET(0x1E610A90)
#define IBCNMNCCCBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E611110)
#define IBCNMNCCCBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E611080)
#define IBCNMNCCCBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E610920)
#define IBCNMNCCCBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E610E70)
#define IBCNMNCCCBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E610ED0)

inline static constexpr unsigned int IBCNMNCCCBJ_TypeDefinitionIndex = 26963;

	class IBCNMNCCCBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 BJBJNDBMOBB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IBCNMNCCCBJ")->GetStaticField(0x14E10);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object MNGIGJBIIBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBCNMNCCCBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBCNMNCCCBJ*))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBCNMNCCCBJ* Clone()
		{
			return ((::IBCNMNCCCBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 FKEHDJHGBKA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_FKEHDJHGBKA_OFFSET))(this);
		}

		::System::Void KEIGMKMNENL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_KEIGMKMNENL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBCNMNCCCBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBCNMNCCCBJ*))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBCNMNCCCBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBCNMNCCCBJ*))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
