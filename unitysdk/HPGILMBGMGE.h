#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPHCMONINBH.h"
#include "unitysdk/LPHCMONINBH_PCBAFNPNEGI.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class PFMILGFHOEM;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class String; }

#define HPGILMBGMGE_IMKFHOHPIFF_OFFSET UNITYSDK_OFFSET(0x1012A190)
#define HPGILMBGMGE_LNFFPAGOEMM_OFFSET UNITYSDK_OFFSET(0x1012A0A0)
#define HPGILMBGMGE_MGOIHFAPLBF_OFFSET UNITYSDK_OFFSET(0x1012A300)
#define HPGILMBGMGE_NEDFCEGCNBN_OFFSET UNITYSDK_OFFSET(0x1012A090)
#define HPGILMBGMGE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1012A0B0)
#define HPGILMBGMGE_OKBIBAGOGCM_OFFSET UNITYSDK_OFFSET(0x1012A310)
#define HPGILMBGMGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1012A2F0)

inline static constexpr unsigned int HPGILMBGMGE_TypeDefinitionIndex = 71126;

class HPGILMBGMGE : public ::LPHCMONINBH
{
public:
	::System::String* _FGBFAOGHNOI_k__BackingField; // 0x78
	::MoleMole::ConfigAnimationCurveGroup* JOMJOEOPPAB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGILMBGMGE__CTOR_OFFSET))(this);
	}

	::LPHCMONINBH_PCBAFNPNEGI NEDFCEGCNBN()
	{
		return ((::LPHCMONINBH_PCBAFNPNEGI(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGILMBGMGE_NEDFCEGCNBN_OFFSET))(this);
	}

	::System::Boolean LNFFPAGOEMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGILMBGMGE_LNFFPAGOEMM_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + HPGILMBGMGE_OJENCMOGDKL_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::PFMILGFHOEM* IMKFHOHPIFF(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::PFMILGFHOEM*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + HPGILMBGMGE_IMKFHOHPIFF_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::System::Void MGOIHFAPLBF(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPGILMBGMGE_MGOIHFAPLBF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* OKBIBAGOGCM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGILMBGMGE_OKBIBAGOGCM_OFFSET))(this);
	}
};
