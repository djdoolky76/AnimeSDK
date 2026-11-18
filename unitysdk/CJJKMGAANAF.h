#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPHCMONINBH.h"
#include "unitysdk/LPHCMONINBH_PCBAFNPNEGI.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class PFMILGFHOEM;
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }

#define CJJKMGAANAF_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1686DFD0)
#define CJJKMGAANAF_IMKFHOHPIFF_OFFSET UNITYSDK_OFFSET(0x1686DED0)
#define CJJKMGAANAF_LNFFPAGOEMM_OFFSET UNITYSDK_OFFSET(0x1686DE50)
#define CJJKMGAANAF_NEDFCEGCNBN_OFFSET UNITYSDK_OFFSET(0x1686DE40)
#define CJJKMGAANAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1686DE60)
#define CJJKMGAANAF_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x1686DFE0)
#define CJJKMGAANAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1686DFC0)

inline static constexpr unsigned int CJJKMGAANAF_TypeDefinitionIndex = 57932;

class CJJKMGAANAF : public ::LPHCMONINBH
{
public:
	::MoleMole::Config::ConfigHollowCameraStretchV2* _HPMJLHGNENP_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJKMGAANAF__CTOR_OFFSET))(this);
	}

	::LPHCMONINBH_PCBAFNPNEGI NEDFCEGCNBN()
	{
		return ((::LPHCMONINBH_PCBAFNPNEGI(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJKMGAANAF_NEDFCEGCNBN_OFFSET))(this);
	}

	::System::Boolean LNFFPAGOEMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJKMGAANAF_LNFFPAGOEMM_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CJJKMGAANAF_OJENCMOGDKL_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::PFMILGFHOEM* IMKFHOHPIFF(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::PFMILGFHOEM*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CJJKMGAANAF_IMKFHOHPIFF_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::MoleMole::Config::ConfigHollowCameraStretchV2* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigHollowCameraStretchV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJKMGAANAF_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigHollowCameraStretchV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraStretchV2*))((::PBYTE)hIl2Cpp + CJJKMGAANAF_OPIAMPMCMFA_OFFSET))(this, EGEGIMGMJHN);
	}
};
