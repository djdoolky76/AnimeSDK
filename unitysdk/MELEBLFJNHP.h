#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPHCMONINBH.h"
#include "unitysdk/LPHCMONINBH_PCBAFNPNEGI.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/EKLMJGLFFED.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class PFMILGFHOEM;
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace System { class String; }

#define MELEBLFJNHP_BJBAPNOKPOB_OFFSET UNITYSDK_OFFSET(0x15929680)
#define MELEBLFJNHP_BKDDEBHCMCL_OFFSET UNITYSDK_OFFSET(0x15929850)
#define MELEBLFJNHP_IMKFHOHPIFF_OFFSET UNITYSDK_OFFSET(0x15929590)
#define MELEBLFJNHP_KIAKIIGNKEA_OFFSET UNITYSDK_OFFSET(0x159297C0)
#define MELEBLFJNHP_LHCDAHFNOHH_OFFSET UNITYSDK_OFFSET(0x159297E0)
#define MELEBLFJNHP_LNFFPAGOEMM_OFFSET UNITYSDK_OFFSET(0x15929470)
#define MELEBLFJNHP_LPNOCMBMJKF_OFFSET UNITYSDK_OFFSET(0x159297D0)
#define MELEBLFJNHP_MINIGDBCHFF_OFFSET UNITYSDK_OFFSET(0x15929840)
#define MELEBLFJNHP_NEDFCEGCNBN_OFFSET UNITYSDK_OFFSET(0x15929460)
#define MELEBLFJNHP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15929480)
#define MELEBLFJNHP__CTOR_OFFSET UNITYSDK_OFFSET(0x159297B0)

inline static constexpr unsigned int MELEBLFJNHP_TypeDefinitionIndex = 39515;

class MELEBLFJNHP : public ::LPHCMONINBH
{
public:
	::System::String* _PLELPJOAKLE_k__BackingField; // 0x78
	::MoleMole::Config::ConfigHollowCameraStretchV2* GPBNBLHDGKC; // 0x80
	::System::Boolean _KMAGOIJFDGK_k__BackingField; // 0x88
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 OBHADCGHPBE; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELEBLFJNHP__CTOR_OFFSET))(this);
	}

	::LPHCMONINBH_PCBAFNPNEGI NEDFCEGCNBN()
	{
		return ((::LPHCMONINBH_PCBAFNPNEGI(*)(::PVOID))((::PBYTE)hIl2Cpp + MELEBLFJNHP_NEDFCEGCNBN_OFFSET))(this);
	}

	::System::Boolean LNFFPAGOEMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MELEBLFJNHP_LNFFPAGOEMM_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MELEBLFJNHP_OJENCMOGDKL_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::PFMILGFHOEM* IMKFHOHPIFF(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::PFMILGFHOEM*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + MELEBLFJNHP_IMKFHOHPIFF_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::System::Boolean BJBAPNOKPOB(::System::Single PMNLNNGEIFM, ::System::Single PENCLEDOJLL, ::MoleMole::UICameraAtom HFAMGAICNHP, ::MoleMole::UICameraAtom AIGOOKNCCNH, ::EKLMJGLFFED& AJMCCOEAIFE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::EKLMJGLFFED&))((::PBYTE)hIl2Cpp + MELEBLFJNHP_BJBAPNOKPOB_OFFSET))(this, PMNLNNGEIFM, PENCLEDOJLL, HFAMGAICNHP, AIGOOKNCCNH, AJMCCOEAIFE);
	}

	::System::String* KIAKIIGNKEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELEBLFJNHP_KIAKIIGNKEA_OFFSET))(this);
	}

	::System::Boolean LPNOCMBMJKF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MELEBLFJNHP_LPNOCMBMJKF_OFFSET))(this);
	}

	::System::Boolean LHCDAHFNOHH(::System::Single MIALFKCCCPI, ::System::Single KMGKAIDEIBA, ::MoleMole::UICameraAtom FDHMCIFPNCK, ::MoleMole::UICameraAtom MPBJAGIKPJM, ::EKLMJGLFFED& DDMDINPGCFI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::EKLMJGLFFED&))((::PBYTE)hIl2Cpp + MELEBLFJNHP_LHCDAHFNOHH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI);
	}

	::System::Void MINIGDBCHFF(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MELEBLFJNHP_MINIGDBCHFF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BKDDEBHCMCL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MELEBLFJNHP_BKDDEBHCMCL_OFFSET))(this, EGEGIMGMJHN);
	}
};
