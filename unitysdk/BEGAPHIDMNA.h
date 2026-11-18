#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGDMBLLCLBF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEGAPHIDMNA_APNJCFCPEBC_OFFSET UNITYSDK_OFFSET(0x1C5112D0)
#define BEGAPHIDMNA_CNMIEHAMJKO_OFFSET UNITYSDK_OFFSET(0x1C5115A0)
#define BEGAPHIDMNA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C511CE0)
#define BEGAPHIDMNA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C511DD0)
#define BEGAPHIDMNA_KBIIPJALCNE_OFFSET UNITYSDK_OFFSET(0x1C511BA0)
#define BEGAPHIDMNA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C511B90)
#define BEGAPHIDMNA_OHKJHAOGDKD_OFFSET UNITYSDK_OFFSET(0x1C511A80)
#define BEGAPHIDMNA_OOIENFMMADN_OFFSET UNITYSDK_OFFSET(0x1C511820)
#define BEGAPHIDMNA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C5116E0)
#define BEGAPHIDMNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5112C0)

inline static constexpr unsigned int BEGAPHIDMNA_TypeDefinitionIndex = 12493;

class BEGAPHIDMNA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* KMGEHJHBMLE; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* APPKHABFOAI; // 0x20
	::EGDMBLLCLBF HBDPAIKANDB; // 0x28
	::System::String* BGCNKPBEOOB; // 0x38
	::System::Int32 KGKIAMJCHMI; // 0x40
	::System::Int32 JCBLGAEENBO; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x4C
	::System::Int32 OGAGKPKBBCG; // 0x50

	::System::Void _ctor(::EGDMBLLCLBF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EGDMBLLCLBF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BEGAPHIDMNA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* APNJCFCPEBC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGAPHIDMNA_APNJCFCPEBC_OFFSET))(this);
	}

	::System::Int32 CNMIEHAMJKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGAPHIDMNA_CNMIEHAMJKO_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGAPHIDMNA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* OOIENFMMADN()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGAPHIDMNA_OOIENFMMADN_OFFSET))(this);
	}

	::System::String* OHKJHAOGDKD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGAPHIDMNA_OHKJHAOGDKD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGAPHIDMNA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KBIIPJALCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGAPHIDMNA_KBIIPJALCNE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGAPHIDMNA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEGAPHIDMNA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
