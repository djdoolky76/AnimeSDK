#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLGFDCAPOOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define BLGFDCAPOOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF336A0)
#define BLGFDCAPOOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF33A60)
#define BLGFDCAPOOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF33070)
#define BLGFDCAPOOH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DF33110)
#define BLGFDCAPOOH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1DF33130)
#define BLGFDCAPOOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF33000)
#define BLGFDCAPOOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF32FF0)
#define BLGFDCAPOOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF332E0)
#define BLGFDCAPOOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF33150)
#define BLGFDCAPOOH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF33100)
#define BLGFDCAPOOH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1DF33140)
#define BLGFDCAPOOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF33470)
#define BLGFDCAPOOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF32FB0)
#define BLGFDCAPOOH_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DF33120)
#define BLGFDCAPOOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF33880)
#define BLGFDCAPOOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF337E0)
#define BLGFDCAPOOH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF330F0)
#define BLGFDCAPOOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF32FE0)
#define BLGFDCAPOOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF33500)
#define BLGFDCAPOOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF33560)

inline static constexpr unsigned int BLGFDCAPOOH_TypeDefinitionIndex = 27864;

	class BLGFDCAPOOH : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::BLGFDCAPOOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BLGFDCAPOOH*>**)UnitySDK::FromName("", "BLGFDCAPOOH")->GetStaticField(0x5B4C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLGFDCAPOOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLGFDCAPOOH*))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLGFDCAPOOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BLGFDCAPOOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BLGFDCAPOOH*>*(*)())((::PBYTE)hIl2Cpp + BLGFDCAPOOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLGFDCAPOOH* Clone()
		{
			return ((::BLGFDCAPOOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLGFDCAPOOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLGFDCAPOOH*))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLGFDCAPOOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLGFDCAPOOH*))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLGFDCAPOOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
