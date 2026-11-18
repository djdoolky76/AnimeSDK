#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class RectTransform; }

#define DECCABIDLMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x193FA400)
#define DECCABIDLMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x193FA2B0)
#define DECCABIDLMC__CTOR_OFFSET UNITYSDK_OFFSET(0x193FA3F0)

inline static constexpr unsigned int DECCABIDLMC_TypeDefinitionIndex = 62422;

class DECCABIDLMC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CircleCollider2D* GALHMINJEKJ; // 0x18
	::GCIMMDDIFBJ* KFNBKEHNINM; // 0x20
	::UnityEngine::CanvasGroup* GPHAEDMALMK; // 0x28
	::GCIMMDDIFBJ* IEOIENFFIGH; // 0x30
	::UnityEngine::RectTransform* KJNPDJADHAF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECCABIDLMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DECCABIDLMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DECCABIDLMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
