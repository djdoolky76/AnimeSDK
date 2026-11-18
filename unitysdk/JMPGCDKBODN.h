#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define JMPGCDKBODN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A47E9D0)
#define JMPGCDKBODN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A47E900)
#define JMPGCDKBODN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A47E6D0)
#define JMPGCDKBODN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47E9C0)

inline static constexpr unsigned int JMPGCDKBODN_TypeDefinitionIndex = 84717;

class JMPGCDKBODN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x18
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x20
	::UnityEngine::Animation* MPCHAMOFLPN; // 0x28
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x30
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x38
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x40
	::UnityEngine::Animation* FBMMJECPBFK; // 0x48
	::UnityEngine::Animation* BILPEKOHGON; // 0x50
	::UnityEngine::Animation* PGJLPOAHMMK; // 0x58
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x60
	::FGCOIBFFCHB* LCIPNPLMICD; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPGCDKBODN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMPGCDKBODN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPGCDKBODN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMPGCDKBODN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
