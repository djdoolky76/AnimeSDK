#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMLCKCIKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define JGAMLCKCIKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E734CC0)
#define JGAMLCKCIKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E735120)
#define JGAMLCKCIKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E734690)
#define JGAMLCKCIKB_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E734730)
#define JGAMLCKCIKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E734620)
#define JGAMLCKCIKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E734610)
#define JGAMLCKCIKB_DOKCLOPEKLK_OFFSET UNITYSDK_OFFSET(0x1E734760)
#define JGAMLCKCIKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E734900)
#define JGAMLCKCIKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E734770)
#define JGAMLCKCIKB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E734720)
#define JGAMLCKCIKB_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E734740)
#define JGAMLCKCIKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E734A90)
#define JGAMLCKCIKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7345D0)
#define JGAMLCKCIKB_LNACAEMACAD_OFFSET UNITYSDK_OFFSET(0x1E734750)
#define JGAMLCKCIKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E734EB0)
#define JGAMLCKCIKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E734E10)
#define JGAMLCKCIKB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E734710)
#define JGAMLCKCIKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E734600)
#define JGAMLCKCIKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E734B20)
#define JGAMLCKCIKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E734B80)

inline static constexpr unsigned int JGAMLCKCIKB_TypeDefinitionIndex = 32348;

	class JGAMLCKCIKB : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DJIJMBMGAPB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JGAMLCKCIKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGAMLCKCIKB*>**)UnitySDK::FromName("", "JGAMLCKCIKB")->GetStaticField(0x60510);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object HDEAOOJANDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGAMLCKCIKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMLCKCIKB*))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAMLCKCIKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGAMLCKCIKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGAMLCKCIKB*>*(*)())((::PBYTE)hIl2Cpp + JGAMLCKCIKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGAMLCKCIKB* Clone()
		{
			return ((::JGAMLCKCIKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 LNACAEMACAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_LNACAEMACAD_OFFSET))(this);
		}

		::System::Void DOKCLOPEKLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_DOKCLOPEKLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGAMLCKCIKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGAMLCKCIKB*))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGAMLCKCIKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMLCKCIKB*))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGAMLCKCIKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
