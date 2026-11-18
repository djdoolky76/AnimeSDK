#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GPNEJIBAHBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CDB900)
#define GPNEJIBAHBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CDB800)
#define GPNEJIBAHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDB8F0)

inline static constexpr unsigned int GPNEJIBAHBJ_TypeDefinitionIndex = 74937;

class GPNEJIBAHBJ : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* PJMDKBJFJJE; // 0x18
	::UnityEngine::GameObject* GPCNLECBJHG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GOBGFKJOLOH; // 0x28
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNEJIBAHBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPNEJIBAHBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPNEJIBAHBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
