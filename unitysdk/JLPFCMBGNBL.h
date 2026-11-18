#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define JLPFCMBGNBL_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x155A4440)
#define JLPFCMBGNBL_EEMNHJCGPBE_OFFSET UNITYSDK_OFFSET(0x155A4400)
#define JLPFCMBGNBL_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x155A4140)
#define JLPFCMBGNBL_EMAFOMGMOHM_OFFSET UNITYSDK_OFFSET(0x155A4450)
#define JLPFCMBGNBL_HOGPKIIBAMC_OFFSET UNITYSDK_OFFSET(0x155A4430)
#define JLPFCMBGNBL_JEOJKAMEKBI_OFFSET UNITYSDK_OFFSET(0x155A43E0)
#define JLPFCMBGNBL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x155A40C0)
#define JLPFCMBGNBL_KGFIHPGLJDH_OFFSET UNITYSDK_OFFSET(0x155A4420)
#define JLPFCMBGNBL_LLFEMMEBPLB_OFFSET UNITYSDK_OFFSET(0x155A43F0)
#define JLPFCMBGNBL_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x155A4410)
#define JLPFCMBGNBL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155A3F30)
#define JLPFCMBGNBL__CTOR_OFFSET UNITYSDK_OFFSET(0x155A4350)

inline static constexpr unsigned int JLPFCMBGNBL_TypeDefinitionIndex = 56941;

class JLPFCMBGNBL : public ::IOOIHHOJOPI
{
public:
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x28
	::LGINJIKKBJA* _HDJCAAOFAHG_k__BackingField; // 0x30
	::MoleMole::MonoGamepadCustomList* _FOMGLFCKLFI_k__BackingField; // 0x38
	::MoleMole::UIGeneralButtonController* _AJNDPMNDDEF_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPFCMBGNBL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_EFKGNFCEENK_OFFSET))(this);
	}

	::MoleMole::UIGeneralButtonController* JEOJKAMEKBI()
	{
		return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_JEOJKAMEKBI_OFFSET))(this);
	}

	::System::Void LLFEMMEBPLB(::MoleMole::MonoGamepadCustomList* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadCustomList*))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_LLFEMMEBPLB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EEMNHJCGPBE(::MoleMole::UIGeneralButtonController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_EEMNHJCGPBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MonoGamepadCustomList* KGFIHPGLJDH()
	{
		return ((::MoleMole::MonoGamepadCustomList*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_KGFIHPGLJDH_OFFSET))(this);
	}

	::LGINJIKKBJA* HOGPKIIBAMC()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_HOGPKIIBAMC_OFFSET))(this);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void EMAFOMGMOHM(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + JLPFCMBGNBL_EMAFOMGMOHM_OFFSET))(this, EGEGIMGMJHN);
	}
};
