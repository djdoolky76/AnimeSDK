#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAPHLHEJGEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define EAPHLHEJGEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E202500)
#define EAPHLHEJGEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E202860)
#define EAPHLHEJGEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E201ED0)
#define EAPHLHEJGEI_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E201F50)
#define EAPHLHEJGEI_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E201F70)
#define EAPHLHEJGEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E201E60)
#define EAPHLHEJGEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E201E50)
#define EAPHLHEJGEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2020D0)
#define EAPHLHEJGEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E201FD0)
#define EAPHLHEJGEI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E201FA0)
#define EAPHLHEJGEI_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E201F80)
#define EAPHLHEJGEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E202270)
#define EAPHLHEJGEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E201E10)
#define EAPHLHEJGEI_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E201F60)
#define EAPHLHEJGEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E202770)
#define EAPHLHEJGEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2026C0)
#define EAPHLHEJGEI_NECKAHHFCLI_OFFSET UNITYSDK_OFFSET(0x1E201FC0)
#define EAPHLHEJGEI_NPCOIAEPGPA_OFFSET UNITYSDK_OFFSET(0x1E201FB0)
#define EAPHLHEJGEI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E201F90)
#define EAPHLHEJGEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E201E40)
#define EAPHLHEJGEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E202310)
#define EAPHLHEJGEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E202370)

inline static constexpr unsigned int EAPHLHEJGEI_TypeDefinitionIndex = 34185;

	class EAPHLHEJGEI : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 JENHMINODOE; // 0x28
		static ::Google::Protobuf::MessageParser_1<::EAPHLHEJGEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EAPHLHEJGEI*>**)UnitySDK::FromName("", "EAPHLHEJGEI")->GetStaticField(0x3E600);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PMFNLNMINAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAPHLHEJGEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAPHLHEJGEI*))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAPHLHEJGEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EAPHLHEJGEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EAPHLHEJGEI*>*(*)())((::PBYTE)hIl2Cpp + EAPHLHEJGEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAPHLHEJGEI* Clone()
		{
			return ((::EAPHLHEJGEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NPCOIAEPGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_NPCOIAEPGPA_OFFSET))(this);
		}

		::System::Void NECKAHHFCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_NECKAHHFCLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAPHLHEJGEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAPHLHEJGEI*))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAPHLHEJGEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAPHLHEJGEI*))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAPHLHEJGEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
