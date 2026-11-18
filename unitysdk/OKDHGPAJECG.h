#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define OKDHGPAJECG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B7A1630)
#define OKDHGPAJECG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B7A14B0)
#define OKDHGPAJECG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A1620)

inline static constexpr unsigned int OKDHGPAJECG_TypeDefinitionIndex = 85449;

class OKDHGPAJECG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* BIGMJMIKDBE; // 0x18
	::UnityEngine::GameObject* KICBOIFECNG; // 0x20
	::UnityEngine::GameObject* MICALPKCKDC; // 0x28
	::GCIMMDDIFBJ* MDKFCDCODPJ; // 0x30
	::UnityEngine::GameObject* JDIDBBIOEOP; // 0x38
	::UnityEngine::GameObject* CNNFIMPMJBC; // 0x40
	::UnityEngine::GameObject* IKDOCKFBOIB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDHGPAJECG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKDHGPAJECG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKDHGPAJECG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
