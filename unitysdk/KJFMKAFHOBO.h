#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define KJFMKAFHOBO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15213B10)
#define KJFMKAFHOBO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15213A60)
#define KJFMKAFHOBO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15213890)
#define KJFMKAFHOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x15213B00)

inline static constexpr unsigned int KJFMKAFHOBO_TypeDefinitionIndex = 48673;

class KJFMKAFHOBO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JHLNILOJCCC; // 0x18
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x20
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x28
	::UnityEngine::RectTransform* FBLDNPFLAED; // 0x30
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFMKAFHOBO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJFMKAFHOBO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJFMKAFHOBO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFMKAFHOBO_KGEBDLGBGNM_OFFSET))(this);
	}
};
