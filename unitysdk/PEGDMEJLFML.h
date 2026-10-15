#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEGDMEJLFML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class Item; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define PEGDMEJLFML_AHDMAMMBDIC_OFFSET UNITYSDK_OFFSET(0x1DF189D0)
#define PEGDMEJLFML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF19230)
#define PEGDMEJLFML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF19550)
#define PEGDMEJLFML_CJCOLPJIACP_OFFSET UNITYSDK_OFFSET(0x1DF189E0)
#define PEGDMEJLFML_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF18960)
#define PEGDMEJLFML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF18880)
#define PEGDMEJLFML_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF18870)
#define PEGDMEJLFML_DPLKNPKOMBA_OFFSET UNITYSDK_OFFSET(0x1DF18A00)
#define PEGDMEJLFML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF18C20)
#define PEGDMEJLFML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF18A30)
#define PEGDMEJLFML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF18EE0)
#define PEGDMEJLFML_GGPOMCLEADI_OFFSET UNITYSDK_OFFSET(0x1DF18A20)
#define PEGDMEJLFML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF18800)
#define PEGDMEJLFML_LGDJHPOEEIJ_OFFSET UNITYSDK_OFFSET(0x1DF189F0)
#define PEGDMEJLFML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF19410)
#define PEGDMEJLFML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF192F0)
#define PEGDMEJLFML_MFPDCEHGPML_OFFSET UNITYSDK_OFFSET(0x1DF189C0)
#define PEGDMEJLFML_MIDMLNAJCJD_OFFSET UNITYSDK_OFFSET(0x1DF18A10)
#define PEGDMEJLFML_NNEKFAODIAJ_OFFSET UNITYSDK_OFFSET(0x1DF189B0)
#define PEGDMEJLFML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF18860)
#define PEGDMEJLFML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF19000)
#define PEGDMEJLFML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF19060)

	class PEGDMEJLFML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::Item* KFPOEJMNAHG; // 0x18
		::Proto::ItemList* HOPONLNEGOA; // 0x20
		::Proto::ItemList* DDCFGAMIIHN; // 0x28
		::System::Boolean DHMADBLCKKD; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PEGDMEJLFML")->GetStaticField(0x38D70);
		}

		// static const ::System::Object OFMLLNDPBAM; // 0x0
		// static const ::System::Object OOLLDLHKDOH; // 0x0
		// static const ::System::Object KOKPPJDDOAH; // 0x0
		// static const ::System::Object PFJLHDMLHIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEGDMEJLFML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGDMEJLFML*))((::PBYTE)hIl2Cpp + PEGDMEJLFML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEGDMEJLFML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PEGDMEJLFML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEGDMEJLFML* Clone()
		{
			return ((::PEGDMEJLFML*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* NNEKFAODIAJ()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_NNEKFAODIAJ_OFFSET))(this);
		}

		::System::Void MFPDCEHGPML(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PEGDMEJLFML_MFPDCEHGPML_OFFSET))(this, a1);
		}

		::System::Boolean AHDMAMMBDIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_AHDMAMMBDIC_OFFSET))(this);
		}

		::System::Void CJCOLPJIACP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEGDMEJLFML_CJCOLPJIACP_OFFSET))(this, a1);
		}

		::Proto::ItemList* LGDJHPOEEIJ()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_LGDJHPOEEIJ_OFFSET))(this);
		}

		::System::Void DPLKNPKOMBA(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PEGDMEJLFML_DPLKNPKOMBA_OFFSET))(this, a1);
		}

		::Proto::Item* MIDMLNAJCJD()
		{
			return ((::Proto::Item*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_MIDMLNAJCJD_OFFSET))(this);
		}

		::System::Void GGPOMCLEADI(::Proto::Item* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Item*))((::PBYTE)hIl2Cpp + PEGDMEJLFML_GGPOMCLEADI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEGDMEJLFML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEGDMEJLFML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEGDMEJLFML*))((::PBYTE)hIl2Cpp + PEGDMEJLFML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEGDMEJLFML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEGDMEJLFML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGDMEJLFML*))((::PBYTE)hIl2Cpp + PEGDMEJLFML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEGDMEJLFML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
