#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHFAMIIIKAH;
class EEILAINOLPO;
class FKFOIDMNDFG;
class GPHMAJPGGEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CHFAMIIIKAH_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1F3950C0)
#define CHFAMIIIKAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3957C0)
#define CHFAMIIIKAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F395CD0)
#define CHFAMIIIKAH_CIDMAHFLBHE_OFFSET UNITYSDK_OFFSET(0x1F395090)
#define CHFAMIIIKAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F395050)
#define CHFAMIIIKAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F394EE0)
#define CHFAMIIIKAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F394ED0)
#define CHFAMIIIKAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F395150)
#define CHFAMIIIKAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F395120)
#define CHFAMIIIKAH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F3950F0)
#define CHFAMIIIKAH_FEPEMAACIBI_OFFSET UNITYSDK_OFFSET(0x1F395100)
#define CHFAMIIIKAH_FGLMHIPICNM_OFFSET UNITYSDK_OFFSET(0x1F3950B0)
#define CHFAMIIIKAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F395430)
#define CHFAMIIIKAH_HCJPMJCFFNK_OFFSET UNITYSDK_OFFSET(0x1F395110)
#define CHFAMIIIKAH_IMFFKGEJOKK_OFFSET UNITYSDK_OFFSET(0x1F395080)
#define CHFAMIIIKAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F394E90)
#define CHFAMIIIKAH_KAFMPINCMJJ_OFFSET UNITYSDK_OFFSET(0x1F3950A0)
#define CHFAMIIIKAH_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1F3950D0)
#define CHFAMIIIKAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F395B00)
#define CHFAMIIIKAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F395930)
#define CHFAMIIIKAH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F3950E0)
#define CHFAMIIIKAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F394EC0)
#define CHFAMIIIKAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F395570)
#define CHFAMIIIKAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3955D0)

inline static constexpr unsigned int CHFAMIIIKAH_TypeDefinitionIndex = 34446;

	class CHFAMIIIKAH : public ::System::Object
	{
	public:
		::GPHMAJPGGEK* NAKJGICHNEN; // 0x10
		::Proto::ItemList* PAOBKLAAPFF; // 0x18
		::FKFOIDMNDFG* GDLOOLAHGPP; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::EEILAINOLPO* NLIJNNMCAAO; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::MessageParser_1<::CHFAMIIIKAH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHFAMIIIKAH*>**)UnitySDK::FromName("", "CHFAMIIIKAH")->GetStaticField(0xF9E0);
		}

		// static const ::System::Object EJLJEAIFIFB; // 0x0
		// static const ::System::Object JDLHDMKEFKL; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PFMKJIJMEPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHFAMIIIKAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHFAMIIIKAH*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHFAMIIIKAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHFAMIIIKAH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHFAMIIIKAH*>*(*)())((::PBYTE)hIl2Cpp + CHFAMIIIKAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHFAMIIIKAH* Clone()
		{
			return ((::CHFAMIIIKAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* IMFFKGEJOKK()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_IMFFKGEJOKK_OFFSET))(this);
		}

		::System::Void CIDMAHFLBHE(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_CIDMAHFLBHE_OFFSET))(this, a1);
		}

		::FKFOIDMNDFG* KAFMPINCMJJ()
		{
			return ((::FKFOIDMNDFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_KAFMPINCMJJ_OFFSET))(this);
		}

		::System::Void FGLMHIPICNM(::FKFOIDMNDFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKFOIDMNDFG*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_FGLMHIPICNM_OFFSET))(this, a1);
		}

		::EEILAINOLPO* ADGLNFILOHI()
		{
			return ((::EEILAINOLPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::EEILAINOLPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEILAINOLPO*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GPHMAJPGGEK* FEPEMAACIBI()
		{
			return ((::GPHMAJPGGEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_FEPEMAACIBI_OFFSET))(this);
		}

		::System::Void HCJPMJCFFNK(::GPHMAJPGGEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPHMAJPGGEK*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_HCJPMJCFFNK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHFAMIIIKAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHFAMIIIKAH*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHFAMIIIKAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHFAMIIIKAH*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
