#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHFAMIIIKAH;
class EEILAINOLPO;
class FKFOIDMNDFG;
class GPHMAJPGGEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CHFAMIIIKAH_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E0C4BA0)
#define CHFAMIIIKAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C52A0)
#define CHFAMIIIKAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C57C0)
#define CHFAMIIIKAH_CIDMAHFLBHE_OFFSET UNITYSDK_OFFSET(0x1E0C4BD0)
#define CHFAMIIIKAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C4B30)
#define CHFAMIIIKAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C49A0)
#define CHFAMIIIKAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4990)
#define CHFAMIIIKAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C4C30)
#define CHFAMIIIKAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C4C00)
#define CHFAMIIIKAH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0C4BF0)
#define CHFAMIIIKAH_FEPEMAACIBI_OFFSET UNITYSDK_OFFSET(0x1E0C4B60)
#define CHFAMIIIKAH_FGLMHIPICNM_OFFSET UNITYSDK_OFFSET(0x1E0C4B90)
#define CHFAMIIIKAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C4F10)
#define CHFAMIIIKAH_HCJPMJCFFNK_OFFSET UNITYSDK_OFFSET(0x1E0C4B70)
#define CHFAMIIIKAH_IMFFKGEJOKK_OFFSET UNITYSDK_OFFSET(0x1E0C4BC0)
#define CHFAMIIIKAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C4950)
#define CHFAMIIIKAH_KAFMPINCMJJ_OFFSET UNITYSDK_OFFSET(0x1E0C4B80)
#define CHFAMIIIKAH_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E0C4BB0)
#define CHFAMIIIKAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C55F0)
#define CHFAMIIIKAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C5420)
#define CHFAMIIIKAH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0C4BE0)
#define CHFAMIIIKAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4980)
#define CHFAMIIIKAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C5050)
#define CHFAMIIIKAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C50B0)

inline static constexpr unsigned int CHFAMIIIKAH_TypeDefinitionIndex = 33531;

	class CHFAMIIIKAH : public ::System::Object
	{
	public:
		::GPHMAJPGGEK* NAKJGICHNEN; // 0x10
		::FKFOIDMNDFG* GDLOOLAHGPP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::EEILAINOLPO* NLIJNNMCAAO; // 0x28
		::Proto::ItemList* PAOBKLAAPFF; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CHFAMIIIKAH")->GetStaticField(0x163C0);
		}

		// static const ::System::Object PFMKJIJMEPK; // 0x0
		// static const ::System::Object JDLHDMKEFKL; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object EJLJEAIFIFB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CHFAMIIIKAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHFAMIIIKAH* Clone()
		{
			return ((::CHFAMIIIKAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_CLONE_OFFSET))(this);
		}

		::GPHMAJPGGEK* FEPEMAACIBI()
		{
			return ((::GPHMAJPGGEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_FEPEMAACIBI_OFFSET))(this);
		}

		::System::Void HCJPMJCFFNK(::GPHMAJPGGEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPHMAJPGGEK*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_HCJPMJCFFNK_OFFSET))(this, a1);
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

		::Proto::ItemList* IMFFKGEJOKK()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_IMFFKGEJOKK_OFFSET))(this);
		}

		::System::Void CIDMAHFLBHE(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_CIDMAHFLBHE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHFAMIIIKAH_FAEKBILGPCO_OFFSET))(this, a1);
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
