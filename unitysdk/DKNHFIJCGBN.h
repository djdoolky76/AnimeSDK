#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define DKNHFIJCGBN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149B4C30)
#define DKNHFIJCGBN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149B4A90)
#define DKNHFIJCGBN__CTOR_OFFSET UNITYSDK_OFFSET(0x149B4C20)

inline static constexpr unsigned int DKNHFIJCGBN_TypeDefinitionIndex = 86020;

class DKNHFIJCGBN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NLIONPFPHKE; // 0x18
	::UnityEngine::RectTransform* KDCBOCGOIJA; // 0x20
	::UnityEngine::RectTransform* EGFPKLKNFPB; // 0x28
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x30
	::UnityEngine::RectTransform* HNKHOLIJNEP; // 0x38
	::UnityEngine::CanvasGroup* PDACHPLBKIE; // 0x40
	::UnityEngine::RectTransform* MCADMPIHECL; // 0x48
	::UnityEngine::RectTransform* BODKGCCMOAP; // 0x50
	::UnityEngine::RectTransform* CFKBOHAEGBE; // 0x58
	::UnityEngine::RectTransform* MBELFAOMJIH; // 0x60
	::UnityEngine::GameObject* IGNNFHCLDFJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHFIJCGBN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKNHFIJCGBN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKNHFIJCGBN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
