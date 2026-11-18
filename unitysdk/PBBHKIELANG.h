#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define PBBHKIELANG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A82EB0)
#define PBBHKIELANG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A82DE0)
#define PBBHKIELANG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A82C60)
#define PBBHKIELANG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A82EA0)

inline static constexpr unsigned int PBBHKIELANG_TypeDefinitionIndex = 58692;

class PBBHKIELANG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x20
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x28
	::UnityEngine::RectTransform* MLHMOBNFPMK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBHKIELANG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBBHKIELANG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBBHKIELANG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBHKIELANG_KGEBDLGBGNM_OFFSET))(this);
	}
};
