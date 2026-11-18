#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define FJCLJHKOIHF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AD6F30)
#define FJCLJHKOIHF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14AD6EA0)
#define FJCLJHKOIHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AD6CE0)
#define FJCLJHKOIHF__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD6F20)

inline static constexpr unsigned int FJCLJHKOIHF_TypeDefinitionIndex = 89694;

class FJCLJHKOIHF : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* AEHDLBEKKEL; // 0x18
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x20
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x28
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCLJHKOIHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJCLJHKOIHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJCLJHKOIHF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCLJHKOIHF_KGEBDLGBGNM_OFFSET))(this);
	}
};
