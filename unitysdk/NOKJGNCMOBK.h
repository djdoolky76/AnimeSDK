#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOKJGNCMOBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define NOKJGNCMOBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB8D8D0)
#define NOKJGNCMOBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8DCA0)
#define NOKJGNCMOBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB8D2A0)
#define NOKJGNCMOBK_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1EB8D340)
#define NOKJGNCMOBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB8D230)
#define NOKJGNCMOBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8D220)
#define NOKJGNCMOBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB8D510)
#define NOKJGNCMOBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB8D380)
#define NOKJGNCMOBK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB8D330)
#define NOKJGNCMOBK_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1EB8D350)
#define NOKJGNCMOBK_FKEHDJHGBKA_OFFSET UNITYSDK_OFFSET(0x1EB8D360)
#define NOKJGNCMOBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB8D6A0)
#define NOKJGNCMOBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB8D1E0)
#define NOKJGNCMOBK_KEIGMKMNENL_OFFSET UNITYSDK_OFFSET(0x1EB8D370)
#define NOKJGNCMOBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB8DAC0)
#define NOKJGNCMOBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB8DA20)
#define NOKJGNCMOBK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB8D320)
#define NOKJGNCMOBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB8D210)
#define NOKJGNCMOBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB8D730)
#define NOKJGNCMOBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB8D790)

inline static constexpr unsigned int NOKJGNCMOBK_TypeDefinitionIndex = 32398;

	class NOKJGNCMOBK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 BJBJNDBMOBB; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NOKJGNCMOBK")->GetStaticField(0xCB20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object MNGIGJBIIBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOKJGNCMOBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOKJGNCMOBK*))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOKJGNCMOBK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NOKJGNCMOBK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOKJGNCMOBK* Clone()
		{
			return ((::NOKJGNCMOBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 FKEHDJHGBKA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_FKEHDJHGBKA_OFFSET))(this);
		}

		::System::Void KEIGMKMNENL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_KEIGMKMNENL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOKJGNCMOBK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOKJGNCMOBK*))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOKJGNCMOBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOKJGNCMOBK*))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOKJGNCMOBK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
