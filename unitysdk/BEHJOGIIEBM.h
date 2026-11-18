#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define BEHJOGIIEBM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1506EDE0)
#define BEHJOGIIEBM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1506ED40)
#define BEHJOGIIEBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1506EDD0)

inline static constexpr unsigned int BEHJOGIIEBM_TypeDefinitionIndex = 61248;

class BEHJOGIIEBM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PLLECLICGGC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHJOGIIEBM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BEHJOGIIEBM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BEHJOGIIEBM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
