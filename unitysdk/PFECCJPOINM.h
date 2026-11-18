#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJPMFCGOGKA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PFECCJPOINM_CKNPDAJMFAE_OFFSET UNITYSDK_OFFSET(0x1EDFEF20)
#define PFECCJPOINM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1EDFF410)
#define PFECCJPOINM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1EDFF060)
#define PFECCJPOINM_GBOLDFJEGEO_OFFSET UNITYSDK_OFFSET(0x1EDFF500)
#define PFECCJPOINM_KBIIPJALCNE_OFFSET UNITYSDK_OFFSET(0x1EDFEDE0)
#define PFECCJPOINM_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1EDFF2D0)
#define PFECCJPOINM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1EDFF180)
#define PFECCJPOINM_NMKANJPEPBH_OFFSET UNITYSDK_OFFSET(0x1EDFF190)
#define PFECCJPOINM_PHALDLDFONO_OFFSET UNITYSDK_OFFSET(0x1EDFF070)
#define PFECCJPOINM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDFEDD0)

inline static constexpr unsigned int PFECCJPOINM_TypeDefinitionIndex = 11378;

class PFECCJPOINM : public ::System::Object
{
public:
	::NJPMFCGOGKA HBDPAIKANDB; // 0x10
	::System::String* KAJMHMJKJPD; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 LJPJBMNNKDG; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte GCHCDJCFCEG; // 0x36
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x37
	::System::Int32 GLDINPBKMPJ; // 0x38
	::System::Int32 OGAGKPKBBCG; // 0x3C
	::System::Int32 CBJPNLODMDM; // 0x40
	::System::Int32 MFAAMEMILEM; // 0x44

	::System::Void _ctor(::NJPMFCGOGKA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NJPMFCGOGKA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PFECCJPOINM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KBIIPJALCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECCJPOINM_KBIIPJALCNE_OFFSET))(this);
	}

	::System::Int32 CKNPDAJMFAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECCJPOINM_CKNPDAJMFAE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFECCJPOINM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PHALDLDFONO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECCJPOINM_PHALDLDFONO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECCJPOINM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 NMKANJPEPBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECCJPOINM_NMKANJPEPBH_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECCJPOINM_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECCJPOINM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GBOLDFJEGEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECCJPOINM_GBOLDFJEGEO_OFFSET))(this);
	}
};
