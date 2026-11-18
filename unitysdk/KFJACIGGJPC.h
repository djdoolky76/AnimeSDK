#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define KFJACIGGJPC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C56000)
#define KFJACIGGJPC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C55F10)
#define KFJACIGGJPC__CTOR_OFFSET UNITYSDK_OFFSET(0x13C55FF0)

inline static constexpr unsigned int KFJACIGGJPC_TypeDefinitionIndex = 74147;

class KFJACIGGJPC : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* HFHKAFPLPAI; // 0x18
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJACIGGJPC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFJACIGGJPC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFJACIGGJPC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
