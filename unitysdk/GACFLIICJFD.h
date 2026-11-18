#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIMatchGameTrail; }

#define GACFLIICJFD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13244EF0)
#define GACFLIICJFD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13244E00)
#define GACFLIICJFD__CTOR_OFFSET UNITYSDK_OFFSET(0x13244EE0)

inline static constexpr unsigned int GACFLIICJFD_TypeDefinitionIndex = 54768;

class GACFLIICJFD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UIMatchGameTrail* FPBLNOADGNP; // 0x18
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACFLIICJFD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GACFLIICJFD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GACFLIICJFD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
