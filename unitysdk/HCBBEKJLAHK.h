#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HCBBEKJLAHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149325D0)
#define HCBBEKJLAHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149324D0)
#define HCBBEKJLAHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149322C0)
#define HCBBEKJLAHK__CTOR_OFFSET UNITYSDK_OFFSET(0x149325C0)

inline static constexpr unsigned int HCBBEKJLAHK_TypeDefinitionIndex = 46475;

class HCBBEKJLAHK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::UnityEngine::Transform* FJGPOOLCOEP; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::FGCOIBFFCHB* GDLCCFGKNBD; // 0x30
	::UnityEngine::GameObject* NLNAHDIJEDM; // 0x38
	::LGINJIKKBJA* LNLGKJCALCM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NHFGBLBKOMF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBBEKJLAHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCBBEKJLAHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCBBEKJLAHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBBEKJLAHK_KGEBDLGBGNM_OFFSET))(this);
	}
};
