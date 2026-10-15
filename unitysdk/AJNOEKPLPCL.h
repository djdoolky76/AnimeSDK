#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNOEKPLPCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJNOEKPLPCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C6C50)
#define AJNOEKPLPCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C70D0)
#define AJNOEKPLPCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C6650)
#define AJNOEKPLPCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C6610)
#define AJNOEKPLPCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C6600)
#define AJNOEKPLPCL_DCHOJKFAOEE_OFFSET UNITYSDK_OFFSET(0x1E3C66D0)
#define AJNOEKPLPCL_EAIOAKFPHOI_OFFSET UNITYSDK_OFFSET(0x1E3C6730)
#define AJNOEKPLPCL_EMCNLKPLJCK_OFFSET UNITYSDK_OFFSET(0x1E3C6780)
#define AJNOEKPLPCL_ENMNDNEHGPB_OFFSET UNITYSDK_OFFSET(0x1E3C6720)
#define AJNOEKPLPCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C6860)
#define AJNOEKPLPCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C67B0)
#define AJNOEKPLPCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C68D0)
#define AJNOEKPLPCL_GONFLNEBJPF_OFFSET UNITYSDK_OFFSET(0x1E3C6700)
#define AJNOEKPLPCL_HEAOLCMBPLB_OFFSET UNITYSDK_OFFSET(0x1E3C66E0)
#define AJNOEKPLPCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C6590)
#define AJNOEKPLPCL_KGPCPDAFLFF_OFFSET UNITYSDK_OFFSET(0x1E3C6770)
#define AJNOEKPLPCL_LCKMAAIDAAC_OFFSET UNITYSDK_OFFSET(0x1E3C6740)
#define AJNOEKPLPCL_LGENOLKFOLJ_OFFSET UNITYSDK_OFFSET(0x1E3C67A0)
#define AJNOEKPLPCL_LMOAMDCGPIG_OFFSET UNITYSDK_OFFSET(0x1E3C66F0)
#define AJNOEKPLPCL_MEJMEMAKDNJ_OFFSET UNITYSDK_OFFSET(0x1E3C6760)
#define AJNOEKPLPCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C6FD0)
#define AJNOEKPLPCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C6F60)
#define AJNOEKPLPCL_NBJEFDPAODD_OFFSET UNITYSDK_OFFSET(0x1E3C6790)
#define AJNOEKPLPCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C65F0)
#define AJNOEKPLPCL_PEJOEOMHNKM_OFFSET UNITYSDK_OFFSET(0x1E3C6750)
#define AJNOEKPLPCL_PLGMGJFBIBF_OFFSET UNITYSDK_OFFSET(0x1E3C6710)
#define AJNOEKPLPCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C6910)
#define AJNOEKPLPCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C6970)

inline static constexpr unsigned int AJNOEKPLPCL_TypeDefinitionIndex = 33450;

	class AJNOEKPLPCL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEBLLLEALOF; // 0x18
		::System::UInt32 EJBHLLHIAOE; // 0x1C
		::System::UInt32 OIOOADOPAJC; // 0x20
		::System::UInt32 BKJJAAFOLCN; // 0x24
		::System::Boolean OPFHEDNFECL; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 LKALCFONCLE; // 0x2C
		::System::UInt32 BDLHPBLODJJ; // 0x30
		static ::Google::Protobuf::MessageParser_1<::AJNOEKPLPCL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJNOEKPLPCL*>**)UnitySDK::FromName("", "AJNOEKPLPCL")->GetStaticField(0x35E20);
		}

		// static const ::System::Object CEINPGIKIOP; // 0x0
		// static const ::System::Object KGKFEPAEPIN; // 0x0
		// static const ::System::Object KCGHFLNGIGL; // 0x0
		// static const ::System::Object NPDFIBAPDCB; // 0x0
		// static const ::System::Object HEKBMLEBKEK; // 0x0
		// static const ::System::Object MKLPBDFJKJG; // 0x0
		// static const ::System::Object CDLHOPODMGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJNOEKPLPCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJNOEKPLPCL*))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJNOEKPLPCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJNOEKPLPCL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJNOEKPLPCL*>*(*)())((::PBYTE)hIl2Cpp + AJNOEKPLPCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJNOEKPLPCL* Clone()
		{
			return ((::AJNOEKPLPCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_CLONE_OFFSET))(this);
		}

		::System::UInt32 DCHOJKFAOEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_DCHOJKFAOEE_OFFSET))(this);
		}

		::System::Void HEAOLCMBPLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_HEAOLCMBPLB_OFFSET))(this, a1);
		}

		::System::UInt32 LMOAMDCGPIG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_LMOAMDCGPIG_OFFSET))(this);
		}

		::System::Void GONFLNEBJPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_GONFLNEBJPF_OFFSET))(this, a1);
		}

		::System::UInt32 PLGMGJFBIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_PLGMGJFBIBF_OFFSET))(this);
		}

		::System::Void ENMNDNEHGPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_ENMNDNEHGPB_OFFSET))(this, a1);
		}

		::System::Boolean EAIOAKFPHOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_EAIOAKFPHOI_OFFSET))(this);
		}

		::System::Void LCKMAAIDAAC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_LCKMAAIDAAC_OFFSET))(this, a1);
		}

		::System::UInt32 PEJOEOMHNKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_PEJOEOMHNKM_OFFSET))(this);
		}

		::System::Void MEJMEMAKDNJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_MEJMEMAKDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 KGPCPDAFLFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_KGPCPDAFLFF_OFFSET))(this);
		}

		::System::Void EMCNLKPLJCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_EMCNLKPLJCK_OFFSET))(this, a1);
		}

		::System::UInt32 NBJEFDPAODD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_NBJEFDPAODD_OFFSET))(this);
		}

		::System::Void LGENOLKFOLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_LGENOLKFOLJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJNOEKPLPCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJNOEKPLPCL*))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJNOEKPLPCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJNOEKPLPCL*))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJNOEKPLPCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
