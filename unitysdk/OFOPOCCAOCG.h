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

#define OFOPOCCAOCG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A5EC70)
#define OFOPOCCAOCG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A5EBC0)
#define OFOPOCCAOCG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A5E9B0)
#define OFOPOCCAOCG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5EC60)

inline static constexpr unsigned int OFOPOCCAOCG_TypeDefinitionIndex = 76468;

class OFOPOCCAOCG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::GameObject* JEAEFGNJAGB; // 0x28
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x30
	::UnityEngine::GameObject* MPFDMAPAHOO; // 0x38
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x40
	::UnityEngine::Transform* DNILNJBKLLG; // 0x48
	::MoleMole::MonoGamepadSelectable* BGIKLBLEDMG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOPOCCAOCG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFOPOCCAOCG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOPOCCAOCG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFOPOCCAOCG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
