#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define BAOCHCJBMPC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14239C70)
#define BAOCHCJBMPC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14239BD0)
#define BAOCHCJBMPC__CTOR_OFFSET UNITYSDK_OFFSET(0x14239C60)

inline static constexpr unsigned int BAOCHCJBMPC_TypeDefinitionIndex = 43944;

class BAOCHCJBMPC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FJBMCPMIMJK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOCHCJBMPC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BAOCHCJBMPC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BAOCHCJBMPC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
