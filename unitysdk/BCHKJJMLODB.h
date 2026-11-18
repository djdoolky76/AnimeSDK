#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define BCHKJJMLODB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143CC210)
#define BCHKJJMLODB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x143CC180)
#define BCHKJJMLODB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143CBFD0)
#define BCHKJJMLODB__CTOR_OFFSET UNITYSDK_OFFSET(0x143CC200)

inline static constexpr unsigned int BCHKJJMLODB_TypeDefinitionIndex = 63146;

class BCHKJJMLODB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHKJJMLODB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCHKJJMLODB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHKJJMLODB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCHKJJMLODB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
