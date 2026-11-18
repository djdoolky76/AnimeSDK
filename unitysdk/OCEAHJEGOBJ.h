#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/PKMJPMFCNBK_JHBFBPLDADL.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JBONEPEMJGJ;
class JBONEPEMJGJ_EEHELOPGFKO;
class NLNIIPDCABP;
namespace UnityEngine { class Transform; }

#define OCEAHJEGOBJ_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x16BF5220)
#define OCEAHJEGOBJ_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x16BF5370)
#define OCEAHJEGOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF5300)

inline static constexpr unsigned int OCEAHJEGOBJ_TypeDefinitionIndex = 78027;

class OCEAHJEGOBJ : public ::PKMJPMFCNBK
{
public:
	::UnityEngine::Transform* PFJFDCOPBNO; // 0x80
	::UnityEngine::Transform* CPKCMADKBPF; // 0x88
	::JBONEPEMJGJ* PMBKFGBPIKE; // 0x90
	::JBONEPEMJGJ_EEHELOPGFKO* ABPJPMGCNOK; // 0x98
	::NLNIIPDCABP* PPIPMFLCIOH; // 0xA0
	::UnityEngine::Vector3 BPNHAGMLKEK; // 0xA8
	::System::Boolean ACFMAPCOLHD; // 0xB4
	::PKMJPMFCNBK_JHBFBPLDADL ANOHIDIPEMN; // 0xB5
	::System::Boolean GEDLFKOACNL; // 0xB6
	::System::Boolean HKKCDCOMHHE; // 0xB7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEAHJEGOBJ__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEAHJEGOBJ_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEAHJEGOBJ_KHJELIBOECB_OFFSET))(this);
	}
};
