#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CGHNPNCALLG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1153DBF0)
#define CGHNPNCALLG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1153DB10)
#define CGHNPNCALLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1153DBE0)

inline static constexpr unsigned int CGHNPNCALLG_TypeDefinitionIndex = 76968;

class CGHNPNCALLG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ADPDNNPBOLP; // 0x18
	::UnityEngine::RectTransform* EJOGBDADACO; // 0x20
	::UnityEngine::GameObject* KAJPLEBMADN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHNPNCALLG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGHNPNCALLG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGHNPNCALLG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
