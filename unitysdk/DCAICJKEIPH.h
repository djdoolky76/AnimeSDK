#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCAICJKEIPH;
class JBNGCJJDLHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DCAICJKEIPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4408B0)
#define DCAICJKEIPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F440CC0)
#define DCAICJKEIPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F440040)
#define DCAICJKEIPH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F440100)
#define DCAICJKEIPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F43FF90)
#define DCAICJKEIPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F43FF80)
#define DCAICJKEIPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F440390)
#define DCAICJKEIPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F440160)
#define DCAICJKEIPH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F440150)
#define DCAICJKEIPH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F440110)
#define DCAICJKEIPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4405C0)
#define DCAICJKEIPH_GLJGKEPKNFN_OFFSET UNITYSDK_OFFSET(0x1F440130)
#define DCAICJKEIPH_HPOFPOGCFKC_OFFSET UNITYSDK_OFFSET(0x1F440120)
#define DCAICJKEIPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F43FF40)
#define DCAICJKEIPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F440AB0)
#define DCAICJKEIPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4409C0)
#define DCAICJKEIPH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F440140)
#define DCAICJKEIPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F43FF70)
#define DCAICJKEIPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F440710)
#define DCAICJKEIPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F440770)

inline static constexpr unsigned int DCAICJKEIPH_TypeDefinitionIndex = 33357;

	class DCAICJKEIPH : public ::System::Object
	{
	public:
		::JBNGCJJDLHL* LBACLMBNFMG; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::DCAICJKEIPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCAICJKEIPH*>**)UnitySDK::FromName("", "DCAICJKEIPH")->GetStaticField(0x25570);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object MMMBDJJLJPI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCAICJKEIPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCAICJKEIPH*))((::PBYTE)hIl2Cpp + DCAICJKEIPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCAICJKEIPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCAICJKEIPH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCAICJKEIPH*>*(*)())((::PBYTE)hIl2Cpp + DCAICJKEIPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCAICJKEIPH* Clone()
		{
			return ((::DCAICJKEIPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DCAICJKEIPH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::JBNGCJJDLHL* HPOFPOGCFKC()
		{
			return ((::JBNGCJJDLHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH_HPOFPOGCFKC_OFFSET))(this);
		}

		::System::Void GLJGKEPKNFN(::JBNGCJJDLHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBNGCJJDLHL*))((::PBYTE)hIl2Cpp + DCAICJKEIPH_GLJGKEPKNFN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCAICJKEIPH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCAICJKEIPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCAICJKEIPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCAICJKEIPH*))((::PBYTE)hIl2Cpp + DCAICJKEIPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCAICJKEIPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAICJKEIPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCAICJKEIPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCAICJKEIPH*))((::PBYTE)hIl2Cpp + DCAICJKEIPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCAICJKEIPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
