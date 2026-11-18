#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define MEEODBGNGOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D573D0)
#define MEEODBGNGOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D57340)
#define MEEODBGNGOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D57190)
#define MEEODBGNGOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D573C0)

inline static constexpr unsigned int MEEODBGNGOJ_TypeDefinitionIndex = 52317;

class MEEODBGNGOJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x18
	::UnityEngine::GameObject* NEMJJKIFGJM; // 0x20
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x28
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEODBGNGOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEEODBGNGOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEODBGNGOJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEEODBGNGOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
