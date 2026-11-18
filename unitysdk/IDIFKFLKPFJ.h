#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define IDIFKFLKPFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16566960)
#define IDIFKFLKPFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165668B0)
#define IDIFKFLKPFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16566680)
#define IDIFKFLKPFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16566950)

inline static constexpr unsigned int IDIFKFLKPFJ_TypeDefinitionIndex = 84954;

class IDIFKFLKPFJ : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* KBLBGBILDPH; // 0x18
	::UnityEngine::GameObject* MHCMFCLBDDP; // 0x20
	::FGCOIBFFCHB* AIOLEBPOKMF; // 0x28
	::FGCOIBFFCHB* CLLOJDONDMF; // 0x30
	::GCIMMDDIFBJ* MGKENAOIENI; // 0x38
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x40
	::UnityEngine::GameObject* BJODNLJFNBB; // 0x48
	::UnityEngine::RectTransform* JIDINKGJAJH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIFKFLKPFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDIFKFLKPFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDIFKFLKPFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIFKFLKPFJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
