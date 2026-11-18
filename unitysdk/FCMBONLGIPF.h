#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define FCMBONLGIPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13202100)
#define FCMBONLGIPF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13201FC0)
#define FCMBONLGIPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13201DB0)
#define FCMBONLGIPF__CTOR_OFFSET UNITYSDK_OFFSET(0x132020F0)

inline static constexpr unsigned int FCMBONLGIPF_TypeDefinitionIndex = 68151;

class FCMBONLGIPF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PIDBPMPIILK; // 0x18
	::FGCOIBFFCHB* HKLINGLNGAL; // 0x20
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::LGINJIKKBJA* EADDCKNAFGG; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::UnityEngine::Animation* OBNLBMABFPF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCMBONLGIPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCMBONLGIPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCMBONLGIPF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCMBONLGIPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
