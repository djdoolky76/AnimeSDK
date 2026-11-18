#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define PHMJMECGCGG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C658DB0)
#define PHMJMECGCGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C658D10)
#define PHMJMECGCGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C658DA0)

inline static constexpr unsigned int PHMJMECGCGG_TypeDefinitionIndex = 85085;

class PHMJMECGCGG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MIOFCHHGMAG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMJMECGCGG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHMJMECGCGG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHMJMECGCGG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
