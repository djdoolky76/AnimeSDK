#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJALEDGKEPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CJALEDGKEPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0DA200)
#define CJALEDGKEPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DA520)
#define CJALEDGKEPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D9C60)
#define CJALEDGKEPJ_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E0D9CE0)
#define CJALEDGKEPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D9BF0)
#define CJALEDGKEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D9BE0)
#define CJALEDGKEPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D9EA0)
#define CJALEDGKEPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D9D20)
#define CJALEDGKEPJ_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E0D9CF0)
#define CJALEDGKEPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0DA020)
#define CJALEDGKEPJ_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1E0D9D10)
#define CJALEDGKEPJ_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1E0D9D00)
#define CJALEDGKEPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D9BA0)
#define CJALEDGKEPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0DA360)
#define CJALEDGKEPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0DA2D0)
#define CJALEDGKEPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D9BD0)
#define CJALEDGKEPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0DA0C0)
#define CJALEDGKEPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0DA120)

	class CJALEDGKEPJ : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AJPNGCJCMEB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CJALEDGKEPJ")->GetStaticField(0x18D20);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object FBCFBAPNOGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJALEDGKEPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJALEDGKEPJ*))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJALEDGKEPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CJALEDGKEPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJALEDGKEPJ* Clone()
		{
			return ((::CJALEDGKEPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJALEDGKEPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJALEDGKEPJ*))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJALEDGKEPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJALEDGKEPJ*))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJALEDGKEPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
