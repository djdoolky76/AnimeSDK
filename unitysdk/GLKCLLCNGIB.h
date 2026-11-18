#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define GLKCLLCNGIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13DE5760)
#define GLKCLLCNGIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13DE56B0)
#define GLKCLLCNGIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13DE54B0)
#define GLKCLLCNGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE5750)

inline static constexpr unsigned int GLKCLLCNGIB_TypeDefinitionIndex = 74067;

class GLKCLLCNGIB : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIGeneralFilterItemRowWidgetController*>* NOOMBIKGCCG; // 0x18
	::GCIMMDDIFBJ* GLNADJDOHJM; // 0x20
	::FGCOIBFFCHB* PKGMPPJKKLB; // 0x28
	::UnityEngine::GameObject* JGKDHDBDGPH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ONKNBBOFKJN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKCLLCNGIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLKCLLCNGIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLKCLLCNGIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKCLLCNGIB_KGEBDLGBGNM_OFFSET))(this);
	}
};
