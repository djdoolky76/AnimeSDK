#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define KBGNKPBGJAI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1632C6A0)
#define KBGNKPBGJAI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1632C560)
#define KBGNKPBGJAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1632C690)

inline static constexpr unsigned int KBGNKPBGJAI_TypeDefinitionIndex = 84487;

class KBGNKPBGJAI : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OOMGDIIHIGG; // 0x18
	::UnityEngine::Transform* PDACHPLBKIE; // 0x20
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x28
	::UnityEngine::Transform* BJNAGALBJNB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGNKPBGJAI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBGNKPBGJAI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBGNKPBGJAI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
