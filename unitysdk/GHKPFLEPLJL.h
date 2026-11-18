#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GHKPFLEPLJL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x125D2540)
#define GHKPFLEPLJL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x125D2470)
#define GHKPFLEPLJL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x125D2270)
#define GHKPFLEPLJL__CTOR_OFFSET UNITYSDK_OFFSET(0x125D2530)

inline static constexpr unsigned int GHKPFLEPLJL_TypeDefinitionIndex = 69584;

class GHKPFLEPLJL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::GameObject* FEJBHILJLHB; // 0x20
	::UnityEngine::Transform* KBILENLEEOD; // 0x28
	::UnityEngine::GameObject* HDAELHOLDCI; // 0x30
	::UnityEngine::GameObject* EEOBCOFLEON; // 0x38
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x40
	::UnityEngine::GameObject* MLDHFJKCBBD; // 0x48
	::UnityEngine::Transform* DKGBIHMPDDA; // 0x50
	::UnityEngine::GameObject* EOFGGGIGKED; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKPFLEPLJL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHKPFLEPLJL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKPFLEPLJL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHKPFLEPLJL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
