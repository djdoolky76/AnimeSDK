#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPHCMONINBH.h"
#include "unitysdk/LPHCMONINBH_PCBAFNPNEGI.h"
#include "unitysdk/EKLMJGLFFED.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class PFMILGFHOEM;
namespace MoleMole::Config { class ConfigHollowCameraShake; }

#define FDJGNIFGION_BJBAPNOKPOB_OFFSET UNITYSDK_OFFSET(0x14AC0220)
#define FDJGNIFGION_FLJEHKKNEAH_OFFSET UNITYSDK_OFFSET(0x14AC03E0)
#define FDJGNIFGION_IMKFHOHPIFF_OFFSET UNITYSDK_OFFSET(0x14ABFEC0)
#define FDJGNIFGION_LCPIOICOCMB_OFFSET UNITYSDK_OFFSET(0x14AC03D0)
#define FDJGNIFGION_LHCDAHFNOHH_OFFSET UNITYSDK_OFFSET(0x14AC0370)
#define FDJGNIFGION_LNFFPAGOEMM_OFFSET UNITYSDK_OFFSET(0x14ABFE40)
#define FDJGNIFGION_NEDFCEGCNBN_OFFSET UNITYSDK_OFFSET(0x14ABFE30)
#define FDJGNIFGION_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14ABFE50)
#define FDJGNIFGION__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC0360)

inline static constexpr unsigned int FDJGNIFGION_TypeDefinitionIndex = 54369;

class FDJGNIFGION : public ::LPHCMONINBH
{
public:
	::MoleMole::Config::ConfigHollowCameraShake* _IPCJDEFPPHJ_k__BackingField; // 0x78
	::System::Single EKKJPEDBFOI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJGNIFGION__CTOR_OFFSET))(this);
	}

	::LPHCMONINBH_PCBAFNPNEGI NEDFCEGCNBN()
	{
		return ((::LPHCMONINBH_PCBAFNPNEGI(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJGNIFGION_NEDFCEGCNBN_OFFSET))(this);
	}

	::System::Boolean LNFFPAGOEMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJGNIFGION_LNFFPAGOEMM_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + FDJGNIFGION_OJENCMOGDKL_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::PFMILGFHOEM* IMKFHOHPIFF(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::PFMILGFHOEM*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + FDJGNIFGION_IMKFHOHPIFF_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::System::Boolean BJBAPNOKPOB(::System::Single PMNLNNGEIFM, ::System::Single PENCLEDOJLL, ::MoleMole::UICameraAtom HFAMGAICNHP, ::MoleMole::UICameraAtom AIGOOKNCCNH, ::EKLMJGLFFED& AJMCCOEAIFE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::EKLMJGLFFED&))((::PBYTE)hIl2Cpp + FDJGNIFGION_BJBAPNOKPOB_OFFSET))(this, PMNLNNGEIFM, PENCLEDOJLL, HFAMGAICNHP, AIGOOKNCCNH, AJMCCOEAIFE);
	}

	::System::Boolean LHCDAHFNOHH(::System::Single MIALFKCCCPI, ::System::Single KMGKAIDEIBA, ::MoleMole::UICameraAtom FDHMCIFPNCK, ::MoleMole::UICameraAtom MPBJAGIKPJM, ::EKLMJGLFFED& DDMDINPGCFI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::EKLMJGLFFED&))((::PBYTE)hIl2Cpp + FDJGNIFGION_LHCDAHFNOHH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI);
	}

	::System::Void LCPIOICOCMB(::MoleMole::Config::ConfigHollowCameraShake* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*))((::PBYTE)hIl2Cpp + FDJGNIFGION_LCPIOICOCMB_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::ConfigHollowCameraShake* FLJEHKKNEAH()
	{
		return ((::MoleMole::Config::ConfigHollowCameraShake*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJGNIFGION_FLJEHKKNEAH_OFFSET))(this);
	}
};
