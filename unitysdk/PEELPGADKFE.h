#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define PEELPGADKFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B62910)
#define PEELPGADKFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B62850)
#define PEELPGADKFE__CTOR_OFFSET UNITYSDK_OFFSET(0x11B62900)

inline static constexpr unsigned int PEELPGADKFE_TypeDefinitionIndex = 44401;

class PEELPGADKFE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELPGADKFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEELPGADKFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEELPGADKFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
