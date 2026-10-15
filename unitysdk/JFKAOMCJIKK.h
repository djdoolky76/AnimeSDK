#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKAOMCJIKK;
class KFAIFLHPEIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFKAOMCJIKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72DE10)
#define JFKAOMCJIKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72E120)
#define JFKAOMCJIKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72D840)
#define JFKAOMCJIKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72D7B0)
#define JFKAOMCJIKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72D7A0)
#define JFKAOMCJIKK_DGJJKKNBBHO_OFFSET UNITYSDK_OFFSET(0x1E72D920)
#define JFKAOMCJIKK_EIGGOMFFLGG_OFFSET UNITYSDK_OFFSET(0x1E72D940)
#define JFKAOMCJIKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72DB00)
#define JFKAOMCJIKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72D950)
#define JFKAOMCJIKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72DC80)
#define JFKAOMCJIKK_GJFLEDCJGPG_OFFSET UNITYSDK_OFFSET(0x1E72D930)
#define JFKAOMCJIKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72D730)
#define JFKAOMCJIKK_KOMMBCKFOGP_OFFSET UNITYSDK_OFFSET(0x1E72D910)
#define JFKAOMCJIKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72DF70)
#define JFKAOMCJIKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72DEE0)
#define JFKAOMCJIKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72D790)
#define JFKAOMCJIKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72DCD0)
#define JFKAOMCJIKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72DD30)

inline static constexpr unsigned int JFKAOMCJIKK_TypeDefinitionIndex = 28297;

	class JFKAOMCJIKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KFAIFLHPEIE* CDAJGBKIOHN; // 0x18
		::System::UInt32 JEPIGMEMEKE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFKAOMCJIKK")->GetStaticField(0x5FDD0);
		}

		// static const ::System::Object JKDHJEFBNFC; // 0x0
		// static const ::System::Object GEPLKKBDGGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFKAOMCJIKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFKAOMCJIKK*))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFKAOMCJIKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFKAOMCJIKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFKAOMCJIKK* Clone()
		{
			return ((::JFKAOMCJIKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_CLONE_OFFSET))(this);
		}

		::KFAIFLHPEIE* KOMMBCKFOGP()
		{
			return ((::KFAIFLHPEIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_KOMMBCKFOGP_OFFSET))(this);
		}

		::System::Void DGJJKKNBBHO(::KFAIFLHPEIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFAIFLHPEIE*))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_DGJJKKNBBHO_OFFSET))(this, a1);
		}

		::System::UInt32 GJFLEDCJGPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_GJFLEDCJGPG_OFFSET))(this);
		}

		::System::Void EIGGOMFFLGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_EIGGOMFFLGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFKAOMCJIKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFKAOMCJIKK*))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFKAOMCJIKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFKAOMCJIKK*))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFKAOMCJIKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
