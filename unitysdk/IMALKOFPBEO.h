#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define IMALKOFPBEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1870F0C0)
#define IMALKOFPBEO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1870F010)
#define IMALKOFPBEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1870EDF0)
#define IMALKOFPBEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1870F0B0)

inline static constexpr unsigned int IMALKOFPBEO_TypeDefinitionIndex = 54840;

class IMALKOFPBEO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* CKJIAOBGHGF; // 0x18
	::UnityEngine::GameObject* CKFNOEEHOGG; // 0x20
	::UnityEngine::RectTransform* JIDINKGJAJH; // 0x28
	::UnityEngine::RectTransform* KBLBGBILDPH; // 0x30
	::FGCOIBFFCHB* FPMPNDMCIDH; // 0x38
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x40
	::FGCOIBFFCHB* GOBLKNCNLFA; // 0x48
	::GCIMMDDIFBJ* MGKENAOIENI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMALKOFPBEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMALKOFPBEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMALKOFPBEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMALKOFPBEO_KGEBDLGBGNM_OFFSET))(this);
	}
};
