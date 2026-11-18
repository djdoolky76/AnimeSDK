#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define HNKGBHEJJGK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19E35360)
#define HNKGBHEJJGK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19E35240)
#define HNKGBHEJJGK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E35350)

inline static constexpr unsigned int HNKGBHEJJGK_TypeDefinitionIndex = 56593;

class HNKGBHEJJGK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::UnityEngine::RectTransform* KCNJIGMHCBH; // 0x20
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKGBHEJJGK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNKGBHEJJGK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNKGBHEJJGK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
