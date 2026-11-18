#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define KHPHCNNEICE_BHOKHOCCKOG_OFFSET UNITYSDK_OFFSET(0x13C60910)
#define KHPHCNNEICE_DEFCHMBLCAH_OFFSET UNITYSDK_OFFSET(0x13C608E0)
#define KHPHCNNEICE_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x13C60630)
#define KHPHCNNEICE_EPKONPLGDDG_OFFSET UNITYSDK_OFFSET(0x13C608F0)
#define KHPHCNNEICE_GNMBGKLENJG_OFFSET UNITYSDK_OFFSET(0x13C60900)
#define KHPHCNNEICE_HOKOEMCPMGB_OFFSET UNITYSDK_OFFSET(0x13C60930)
#define KHPHCNNEICE_JDABIDMNLBC_OFFSET UNITYSDK_OFFSET(0x13C60920)
#define KHPHCNNEICE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C605B0)
#define KHPHCNNEICE_LGGPNDPLLDD_OFFSET UNITYSDK_OFFSET(0x13C60940)
#define KHPHCNNEICE_LIEHMJFKNOO_OFFSET UNITYSDK_OFFSET(0x13C608D0)
#define KHPHCNNEICE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C603F0)
#define KHPHCNNEICE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C60840)

inline static constexpr unsigned int KHPHCNNEICE_TypeDefinitionIndex = 77667;

class KHPHCNNEICE : public ::IOOIHHOJOPI
{
public:
	::LGINJIKKBJA* _PAKDBFAMOAE_k__BackingField; // 0x28
	::MonoUITableScrollV2* _IBFBIAIIAAG_k__BackingField; // 0x30
	::MoleMole::MonoGamepadModule* _MHABODKDDIA_k__BackingField; // 0x38
	::ADEJAGFCBHK* _GCDCBMNNGFH_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPHCNNEICE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KHPHCNNEICE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void LIEHMJFKNOO(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + KHPHCNNEICE_LIEHMJFKNOO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DEFCHMBLCAH(::MoleMole::MonoGamepadModule* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + KHPHCNNEICE_DEFCHMBLCAH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EPKONPLGDDG(::ADEJAGFCBHK* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ADEJAGFCBHK*))((::PBYTE)hIl2Cpp + KHPHCNNEICE_EPKONPLGDDG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MonoUITableScrollV2* GNMBGKLENJG()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPHCNNEICE_GNMBGKLENJG_OFFSET))(this);
	}

	::MoleMole::MonoGamepadModule* BHOKHOCCKOG()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPHCNNEICE_BHOKHOCCKOG_OFFSET))(this);
	}

	::LGINJIKKBJA* JDABIDMNLBC()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPHCNNEICE_JDABIDMNLBC_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPHCNNEICE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void HOKOEMCPMGB(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + KHPHCNNEICE_HOKOEMCPMGB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPHCNNEICE_EFKGNFCEENK_OFFSET))(this);
	}

	::ADEJAGFCBHK* LGGPNDPLLDD()
	{
		return ((::ADEJAGFCBHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPHCNNEICE_LGGPNDPLLDD_OFFSET))(this);
	}
};
