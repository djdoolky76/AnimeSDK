#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define PDAJMFJDLHM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16003050)
#define PDAJMFJDLHM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16002F80)
#define PDAJMFJDLHM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16002D30)
#define PDAJMFJDLHM__CTOR_OFFSET UNITYSDK_OFFSET(0x16003040)

inline static constexpr unsigned int PDAJMFJDLHM_TypeDefinitionIndex = 82484;

class PDAJMFJDLHM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x18
	::UnityEngine::GameObject* JEAEFGNJAGB; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* MPFDMAPAHOO; // 0x30
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x38
	::UnityEngine::Transform* DNILNJBKLLG; // 0x40
	::MoleMole::MonoGamepadSelectable* BGIKLBLEDMG; // 0x48
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x50
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x58
	::UnityEngine::RectTransform* NKGFCIJCOOC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAJMFJDLHM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDAJMFJDLHM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDAJMFJDLHM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAJMFJDLHM_KGEBDLGBGNM_OFFSET))(this);
	}
};
