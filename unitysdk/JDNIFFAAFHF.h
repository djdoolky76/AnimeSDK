#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define JDNIFFAAFHF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1944D640)
#define JDNIFFAAFHF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1944D550)
#define JDNIFFAAFHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1944D3E0)
#define JDNIFFAAFHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1944D630)

inline static constexpr unsigned int JDNIFFAAFHF_TypeDefinitionIndex = 81815;

class JDNIFFAAFHF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PDACHPLBKIE; // 0x18
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNIFFAAFHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDNIFFAAFHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDNIFFAAFHF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNIFFAAFHF_KGEBDLGBGNM_OFFSET))(this);
	}
};
