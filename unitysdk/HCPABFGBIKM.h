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

#define HCPABFGBIKM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19E01F40)
#define HCPABFGBIKM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19E01DD0)
#define HCPABFGBIKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19E01AF0)
#define HCPABFGBIKM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E01F30)

inline static constexpr unsigned int HCPABFGBIKM_TypeDefinitionIndex = 65962;

class HCPABFGBIKM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FLIPLNGOGML; // 0x18
	::FGCOIBFFCHB* NFCIPDGCFLP; // 0x20
	::FGCOIBFFCHB* DDJAJDBHKNM; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::UnityEngine::RectTransform* OHONHBJAKHD; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::UnityEngine::GameObject* CHEOEEJKNGD; // 0x48
	::FGCOIBFFCHB* HOLPOEPLDNM; // 0x50
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x58
	::FGCOIBFFCHB* JEAEFGNJAGB; // 0x60
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x68
	::FGCOIBFFCHB* MGFEBLBOGGD; // 0x70
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x78
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPABFGBIKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCPABFGBIKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPABFGBIKM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCPABFGBIKM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
