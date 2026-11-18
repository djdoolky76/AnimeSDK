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

#define NJBNBFCKBMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x105BC6D0)
#define NJBNBFCKBMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x105BC5B0)
#define NJBNBFCKBMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x105BC380)
#define NJBNBFCKBMA__CTOR_OFFSET UNITYSDK_OFFSET(0x105BC6C0)

inline static constexpr unsigned int NJBNBFCKBMA_TypeDefinitionIndex = 55668;

class NJBNBFCKBMA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* GDLCCFGKNBD; // 0x18
	::LGINJIKKBJA* PMBLECALCKB; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::UnityEngine::Transform* FJGPOOLCOEP; // 0x30
	::LGINJIKKBJA* LNLGKJCALCM; // 0x38
	::UnityEngine::GameObject* NLNAHDIJEDM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NHFGBLBKOMF; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNBFCKBMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJBNBFCKBMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNBFCKBMA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NJBNBFCKBMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
