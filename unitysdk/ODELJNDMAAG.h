#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define ODELJNDMAAG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x114E90B0)
#define ODELJNDMAAG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x114E8FE0)
#define ODELJNDMAAG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x114E8DB0)
#define ODELJNDMAAG__CTOR_OFFSET UNITYSDK_OFFSET(0x114E90A0)

inline static constexpr unsigned int ODELJNDMAAG_TypeDefinitionIndex = 68761;

class ODELJNDMAAG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x18
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x20
	::UnityEngine::Animation* FBMMJECPBFK; // 0x28
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x30
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x38
	::FGCOIBFFCHB* LCIPNPLMICD; // 0x40
	::UnityEngine::Animation* PGJLPOAHMMK; // 0x48
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x50
	::UnityEngine::Animation* MPCHAMOFLPN; // 0x58
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x60
	::UnityEngine::Animation* BILPEKOHGON; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODELJNDMAAG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODELJNDMAAG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODELJNDMAAG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODELJNDMAAG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
