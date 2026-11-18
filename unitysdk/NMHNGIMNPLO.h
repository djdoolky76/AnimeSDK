#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define NMHNGIMNPLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE59D7B0)
#define NMHNGIMNPLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE59D680)
#define NMHNGIMNPLO__CTOR_OFFSET UNITYSDK_OFFSET(0xE59D7A0)

inline static constexpr unsigned int NMHNGIMNPLO_TypeDefinitionIndex = 92619;

class NMHNGIMNPLO : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x18
	::UnityEngine::Transform* DPNLLKMJMMB; // 0x20
	::UnityEngine::RectTransform* NIJMIHAPEEI; // 0x28
	::UnityEngine::Transform* JOBJDBBKHBM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHNGIMNPLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMHNGIMNPLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMHNGIMNPLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
