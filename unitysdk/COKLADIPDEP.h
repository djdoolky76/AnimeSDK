#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define COKLADIPDEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1457FA80)
#define COKLADIPDEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1457F9D0)
#define COKLADIPDEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1457F830)
#define COKLADIPDEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1457FA70)

inline static constexpr unsigned int COKLADIPDEP_TypeDefinitionIndex = 74288;

class COKLADIPDEP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::LGINJIKKBJA* NPHPKPAPBNF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKLADIPDEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COKLADIPDEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKLADIPDEP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COKLADIPDEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
