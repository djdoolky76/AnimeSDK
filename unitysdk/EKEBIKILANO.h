#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define EKEBIKILANO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F3C240)
#define EKEBIKILANO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F3C1B0)
#define EKEBIKILANO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F3C000)
#define EKEBIKILANO__CTOR_OFFSET UNITYSDK_OFFSET(0x10F3C230)

inline static constexpr unsigned int EKEBIKILANO_TypeDefinitionIndex = 57200;

class EKEBIKILANO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x28
	::UnityEngine::GameObject* GJJKEOLNAJG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEBIKILANO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKEBIKILANO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKEBIKILANO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEBIKILANO_KGEBDLGBGNM_OFFSET))(this);
	}
};
