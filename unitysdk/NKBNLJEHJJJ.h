#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define NKBNLJEHJJJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F86750)
#define NKBNLJEHJJJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F866A0)
#define NKBNLJEHJJJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F864B0)
#define NKBNLJEHJJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F86740)

inline static constexpr unsigned int NKBNLJEHJJJ_TypeDefinitionIndex = 45487;

class NKBNLJEHJJJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* LMFBAKKFOMB; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x28
	::UnityEngine::GameObject* ELOICMCOJGL; // 0x30
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x38
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBNLJEHJJJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NKBNLJEHJJJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBNLJEHJJJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NKBNLJEHJJJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
