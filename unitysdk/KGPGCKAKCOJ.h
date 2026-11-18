#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KGPGCKAKCOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A2CAE00)
#define KGPGCKAKCOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A2CAD10)
#define KGPGCKAKCOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A2CAB70)
#define KGPGCKAKCOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CADF0)

inline static constexpr unsigned int KGPGCKAKCOJ_TypeDefinitionIndex = 75983;

class KGPGCKAKCOJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CEFBKCCMABN; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPGCKAKCOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGPGCKAKCOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPGCKAKCOJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGPGCKAKCOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
