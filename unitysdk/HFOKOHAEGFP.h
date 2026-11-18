#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HFOKOHAEGFP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1FEC3A20)
#define HFOKOHAEGFP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1FEC3900)
#define HFOKOHAEGFP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FEC36D0)
#define HFOKOHAEGFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEC3A10)

inline static constexpr unsigned int HFOKOHAEGFP_TypeDefinitionIndex = 94909;

class HFOKOHAEGFP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PCCMCJBKJPA; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x28
	::FGCOIBFFCHB* KEHPAOOHNOI; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x48
	::UnityEngine::RectTransform* EJHNNMBHAPK; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOKOHAEGFP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFOKOHAEGFP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFOKOHAEGFP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOKOHAEGFP_KGEBDLGBGNM_OFFSET))(this);
	}
};
