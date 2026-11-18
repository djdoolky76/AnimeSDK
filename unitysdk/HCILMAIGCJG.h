#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HCILMAIGCJG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B3C510)
#define HCILMAIGCJG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B3C410)
#define HCILMAIGCJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B3C1A0)
#define HCILMAIGCJG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3C500)

inline static constexpr unsigned int HCILMAIGCJG_TypeDefinitionIndex = 87458;

class HCILMAIGCJG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DLNONMIBDBC; // 0x18
	::MoleMole::MonoGamepadSelectable* BGIKLBLEDMG; // 0x20
	::UnityEngine::GameObject* JEAEFGNJAGB; // 0x28
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x30
	::FGCOIBFFCHB* BHMLGOAPFAB; // 0x38
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x40
	::UnityEngine::Transform* DNILNJBKLLG; // 0x48
	::UnityEngine::GameObject* MPFDMAPAHOO; // 0x50
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x58
	::UnityEngine::GameObject* FFGIEEMPJMP; // 0x60
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCILMAIGCJG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCILMAIGCJG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCILMAIGCJG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCILMAIGCJG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
