#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define MBCMEKFCKGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD4439C0)
#define MBCMEKFCKGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD443880)
#define MBCMEKFCKGM__CTOR_OFFSET UNITYSDK_OFFSET(0xD4439B0)

inline static constexpr unsigned int MBCMEKFCKGM_TypeDefinitionIndex = 92130;

class MBCMEKFCKGM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* NKKENFOHLNH; // 0x18
	::UnityEngine::GameObject* HPKGHPBLEKO; // 0x20
	::UnityEngine::GameObject* MLFKEBKMPHC; // 0x28
	::UnityEngine::GameObject* IEPAKNOMDOJ; // 0x30
	::MoleMole::MonoGamepadCustomList* HDCAKKPKCDG; // 0x38
	::UnityEngine::GameObject* NMJNJADPCJL; // 0x40
	::UnityEngine::GameObject* GMJGCBOFIEA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCMEKFCKGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBCMEKFCKGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBCMEKFCKGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
