#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLKIBIFDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABFLKIBIFDM_AIJLBLCJEGD_OFFSET UNITYSDK_OFFSET(0x1DDCA420)
#define ABFLKIBIFDM_APHIGFCHPOG_OFFSET UNITYSDK_OFFSET(0x1DDCA480)
#define ABFLKIBIFDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDCB040)
#define ABFLKIBIFDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCB3D0)
#define ABFLKIBIFDM_CKIBCLAENCA_OFFSET UNITYSDK_OFFSET(0x1DDCA450)
#define ABFLKIBIFDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDCA360)
#define ABFLKIBIFDM_CMAPIKKGDMP_OFFSET UNITYSDK_OFFSET(0x1DDCA400)
#define ABFLKIBIFDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDCA310)
#define ABFLKIBIFDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCA300)
#define ABFLKIBIFDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDCA530)
#define ABFLKIBIFDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDCA4D0)
#define ABFLKIBIFDM_FDBMIBCAFFC_OFFSET UNITYSDK_OFFSET(0x1DDCA440)
#define ABFLKIBIFDM_FPPMMHPDILM_OFFSET UNITYSDK_OFFSET(0x1DDCA490)
#define ABFLKIBIFDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDCA870)
#define ABFLKIBIFDM_GKJPMGDAIGN_OFFSET UNITYSDK_OFFSET(0x1DDCA410)
#define ABFLKIBIFDM_HFDDKJGGPMF_OFFSET UNITYSDK_OFFSET(0x1DDCA4A0)
#define ABFLKIBIFDM_HFEDNMNAOIL_OFFSET UNITYSDK_OFFSET(0x1DDCA470)
#define ABFLKIBIFDM_IAFBIAAIIBI_OFFSET UNITYSDK_OFFSET(0x1DDCA4C0)
#define ABFLKIBIFDM_IDLAEKALJMC_OFFSET UNITYSDK_OFFSET(0x1DDCA430)
#define ABFLKIBIFDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDCA290)
#define ABFLKIBIFDM_JNBHINBDOFD_OFFSET UNITYSDK_OFFSET(0x1DDCA460)
#define ABFLKIBIFDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDCB2D0)
#define ABFLKIBIFDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDCB210)
#define ABFLKIBIFDM_MOANNDPFEAE_OFFSET UNITYSDK_OFFSET(0x1DDCA4B0)
#define ABFLKIBIFDM_NMGLCCFHOMK_OFFSET UNITYSDK_OFFSET(0x1DDCA3F0)
#define ABFLKIBIFDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDCA2F0)
#define ABFLKIBIFDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDCACC0)
#define ABFLKIBIFDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDCAD20)

inline static constexpr unsigned int ABFLKIBIFDM_TypeDefinitionIndex = 25590;

	class ABFLKIBIFDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double HMPGHDNAMDL; // 0x18
		::System::Double PKLOBKNIIEO; // 0x20
		::System::Double LFLIBPKEAMD; // 0x28
		::System::UInt32 IHDCFMCKDIK; // 0x30
		::System::UInt32 AEMKEEECFCA; // 0x34
		::System::UInt32 NLJHLLLBKLM; // 0x38
		::System::Byte _padding0[0x4];
		::System::Double KNCHOHAFMEC; // 0x40
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABFLKIBIFDM")->GetStaticField(0x38F60);
		}

		// static const ::System::Object EHPLEFGHPFM; // 0x0
		// static const ::System::Object NAIIDLCOKGK; // 0x0
		// static const ::System::Object DPLJFJDNOEF; // 0x0
		// static const ::System::Object MIGBHKHLKLN; // 0x0
		// static const ::System::Object AKJHDEOGPMG; // 0x0
		// static const ::System::Object BMACHGLKAHA; // 0x0
		// static const ::System::Object IBADICAFGKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABFLKIBIFDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABFLKIBIFDM*))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABFLKIBIFDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABFLKIBIFDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABFLKIBIFDM* Clone()
		{
			return ((::ABFLKIBIFDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_CLONE_OFFSET))(this);
		}

		::System::UInt32 NMGLCCFHOMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_NMGLCCFHOMK_OFFSET))(this);
		}

		::System::Void CMAPIKKGDMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_CMAPIKKGDMP_OFFSET))(this, a1);
		}

		::System::Double GKJPMGDAIGN()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_GKJPMGDAIGN_OFFSET))(this);
		}

		::System::Void AIJLBLCJEGD(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_AIJLBLCJEGD_OFFSET))(this, a1);
		}

		::System::Double IDLAEKALJMC()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_IDLAEKALJMC_OFFSET))(this);
		}

		::System::Void FDBMIBCAFFC(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_FDBMIBCAFFC_OFFSET))(this, a1);
		}

		::System::UInt32 CKIBCLAENCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_CKIBCLAENCA_OFFSET))(this);
		}

		::System::Void JNBHINBDOFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_JNBHINBDOFD_OFFSET))(this, a1);
		}

		::System::UInt32 HFEDNMNAOIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_HFEDNMNAOIL_OFFSET))(this);
		}

		::System::Void APHIGFCHPOG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_APHIGFCHPOG_OFFSET))(this, a1);
		}

		::System::Double FPPMMHPDILM()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_FPPMMHPDILM_OFFSET))(this);
		}

		::System::Void HFDDKJGGPMF(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_HFDDKJGGPMF_OFFSET))(this, a1);
		}

		::System::Double MOANNDPFEAE()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_MOANNDPFEAE_OFFSET))(this);
		}

		::System::Void IAFBIAAIIBI(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_IAFBIAAIIBI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABFLKIBIFDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABFLKIBIFDM*))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABFLKIBIFDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABFLKIBIFDM*))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABFLKIBIFDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
