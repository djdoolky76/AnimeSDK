#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EMEGDLBKKCF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1417C930)
#define EMEGDLBKKCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1417C890)
#define EMEGDLBKKCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1417C920)

inline static constexpr unsigned int EMEGDLBKKCF_TypeDefinitionIndex = 40494;

class EMEGDLBKKCF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OOHLDBNMLDM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEGDLBKKCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMEGDLBKKCF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMEGDLBKKCF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
