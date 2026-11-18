#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define EDAGJKJDJHO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFDD55C0)
#define EDAGJKJDJHO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFDD54D0)
#define EDAGJKJDJHO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFDD5300)
#define EDAGJKJDJHO__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD55B0)

inline static constexpr unsigned int EDAGJKJDJHO_TypeDefinitionIndex = 51676;

class EDAGJKJDJHO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LBPIPEAKPDG; // 0x18
	::UnityEngine::GameObject* CHOAINDHEBI; // 0x20
	::FGCOIBFFCHB* KICNAMMOPMN; // 0x28
	::UnityEngine::RectTransform* LKMBHFMLGDO; // 0x30
	::UnityEngine::Animation* BBMNOEEGHML; // 0x38
	::UnityEngine::GameObject* FAKGMNMPKBN; // 0x40
	::UnityEngine::RectTransform* JKMMABOFLNP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGJKJDJHO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDAGJKJDJHO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGJKJDJHO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDAGJKJDJHO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
