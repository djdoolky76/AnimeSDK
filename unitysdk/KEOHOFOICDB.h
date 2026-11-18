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

#define KEOHOFOICDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x157E60D0)
#define KEOHOFOICDB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x157E5FC0)
#define KEOHOFOICDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x157E5D90)
#define KEOHOFOICDB__CTOR_OFFSET UNITYSDK_OFFSET(0x157E60C0)

inline static constexpr unsigned int KEOHOFOICDB_TypeDefinitionIndex = 52871;

class KEOHOFOICDB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x18
	::UnityEngine::GameObject* JEAEFGNJAGB; // 0x20
	::UnityEngine::Transform* DNILNJBKLLG; // 0x28
	::MoleMole::MonoGamepadSelectable* BGIKLBLEDMG; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x40
	::FGCOIBFFCHB* HIEFGONEGGI; // 0x48
	::UnityEngine::GameObject* MPFDMAPAHOO; // 0x50
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOHOFOICDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEOHOFOICDB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOHOFOICDB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEOHOFOICDB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
