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
namespace UnityEngine::UI { class OutlineEx; }

#define GLLOMMJAJPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F284D0)
#define GLLOMMJAJPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F28370)
#define GLLOMMJAJPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F280F0)
#define GLLOMMJAJPH__CTOR_OFFSET UNITYSDK_OFFSET(0x15F284C0)

inline static constexpr unsigned int GLLOMMJAJPH_TypeDefinitionIndex = 49488;

class GLLOMMJAJPH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* NOAHJGIJNML; // 0x18
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x20
	::UnityEngine::UI::OutlineEx* MBABJPHGGHC; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::LGINJIKKBJA* MJIIBEPDHEG; // 0x38
	::UnityEngine::Animation* OBNLBMABFPF; // 0x40
	::UnityEngine::RectTransform* IIFFHEKOBJA; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50
	::UnityEngine::RectTransform* PLBHDNDOKEJ; // 0x58
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x60
	::UnityEngine::GameObject* NDPFKBKABLI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLOMMJAJPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLLOMMJAJPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLOMMJAJPH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLLOMMJAJPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
