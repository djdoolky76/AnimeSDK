#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define OCFLHOIFFHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1842E750)
#define OCFLHOIFFHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1842E6A0)
#define OCFLHOIFFHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1842E4B0)
#define OCFLHOIFFHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E740)

inline static constexpr unsigned int OCFLHOIFFHA_TypeDefinitionIndex = 89905;

class OCFLHOIFFHA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* CKJIAOBGHGF; // 0x18
	::FGCOIBFFCHB* FPMPNDMCIDH; // 0x20
	::GCIMMDDIFBJ* KBLBGBILDPH; // 0x28
	::FGCOIBFFCHB* GOBLKNCNLFA; // 0x30
	::UnityEngine::GameObject* CKFNOEEHOGG; // 0x38
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFLHOIFFHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCFLHOIFFHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFLHOIFFHA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCFLHOIFFHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
