#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DIKGCAHKLEN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19D64C90)
#define DIKGCAHKLEN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19D64B30)
#define DIKGCAHKLEN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19D64910)
#define DIKGCAHKLEN__CTOR_OFFSET UNITYSDK_OFFSET(0x19D64C80)

inline static constexpr unsigned int DIKGCAHKLEN_TypeDefinitionIndex = 65004;

class DIKGCAHKLEN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OIIJOFKFAKO; // 0x18
	::LGINJIKKBJA* EEFGHMBAGAK; // 0x20
	::FGCOIBFFCHB* MDIMNEDAOPF; // 0x28
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x30
	::FGCOIBFFCHB* ILOBEELCFOK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x40
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKGCAHKLEN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIKGCAHKLEN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKGCAHKLEN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIKGCAHKLEN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
