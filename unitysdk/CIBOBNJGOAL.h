#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CIBOBNJGOAL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16958E10)
#define CIBOBNJGOAL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16958D80)
#define CIBOBNJGOAL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16958BD0)
#define CIBOBNJGOAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16958E00)

inline static constexpr unsigned int CIBOBNJGOAL_TypeDefinitionIndex = 90994;

class CIBOBNJGOAL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28
	::UnityEngine::RectTransform* FBLDNPFLAED; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBOBNJGOAL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIBOBNJGOAL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIBOBNJGOAL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBOBNJGOAL_KGEBDLGBGNM_OFFSET))(this);
	}
};
