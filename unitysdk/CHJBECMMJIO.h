#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CHJBECMMJIO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10E3C6C0)
#define CHJBECMMJIO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10E3C5F0)
#define CHJBECMMJIO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E3C360)
#define CHJBECMMJIO__CTOR_OFFSET UNITYSDK_OFFSET(0x10E3C6B0)

inline static constexpr unsigned int CHJBECMMJIO_TypeDefinitionIndex = 48727;

class CHJBECMMJIO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* MFPOMPDIBIG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GBLCKLDKJHF; // 0x20
	::LGINJIKKBJA* IGEOGBGGINM; // 0x28
	::UnityEngine::GameObject* DINCNLKOJBA; // 0x30
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NDBMNBDNKJJ; // 0x40
	::UnityEngine::GameObject* KDHAKINDBEN; // 0x48
	::UnityEngine::GameObject* NNFCAIDBEPK; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58
	::UnityEngine::GameObject* ILPCFHCPFJA; // 0x60
	::LGINJIKKBJA* JOEDMFLBPON; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJBECMMJIO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHJBECMMJIO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHJBECMMJIO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJBECMMJIO_KGEBDLGBGNM_OFFSET))(this);
	}
};
