#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JPMEIMBBDNG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x152B7DC0)
#define JPMEIMBBDNG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x152B7CF0)
#define JPMEIMBBDNG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x152B7B40)
#define JPMEIMBBDNG__CTOR_OFFSET UNITYSDK_OFFSET(0x152B7DB0)

inline static constexpr unsigned int JPMEIMBBDNG_TypeDefinitionIndex = 88995;

class JPMEIMBBDNG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* PJDGFCMNGBH; // 0x18
	::UnityEngine::GameObject* ALBFADMNCPG; // 0x20
	::UnityEngine::Transform* DEKLIFKNJFI; // 0x28
	::FGCOIBFFCHB* IBAPFELBGGL; // 0x30
	::UnityEngine::Transform* NPNHMGNHBLK; // 0x38
	::UnityEngine::GameObject* PJEAENMELAP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMEIMBBDNG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPMEIMBBDNG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPMEIMBBDNG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMEIMBBDNG_KGEBDLGBGNM_OFFSET))(this);
	}
};
