#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define ADPAOKFABDM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x154E4780)
#define ADPAOKFABDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154E4630)
#define ADPAOKFABDM__CTOR_OFFSET UNITYSDK_OFFSET(0x154E4770)

inline static constexpr unsigned int ADPAOKFABDM_TypeDefinitionIndex = 83078;

class ADPAOKFABDM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* IKDOCKFBOIB; // 0x18
	::UnityEngine::GameObject* KICBOIFECNG; // 0x20
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x28
	::UnityEngine::RectTransform* GJFKDEHNOFK; // 0x30
	::UnityEngine::GameObject* CNNFIMPMJBC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPAOKFABDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADPAOKFABDM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADPAOKFABDM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
