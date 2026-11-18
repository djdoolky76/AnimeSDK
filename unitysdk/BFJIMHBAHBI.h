#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFHEOLGDLGH.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/OPIJCPAOCGM.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define BFJIMHBAHBI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x750080)
#define BFJIMHBAHBI_KIJJAMOGEPN_OFFSET UNITYSDK_OFFSET(0x15073E20)

inline static constexpr unsigned int BFJIMHBAHBI_TypeDefinitionIndex = 80037;

struct alignas(8) BFJIMHBAHBI
{
	::OPIJCPAOCGM JKFBFDFELJE; // 0x10
	::System::UInt32 NJNCGJLHLKC; // 0x14
	::UnityEngine::GameObject* MBDFNNLLFEL; // 0x18
	::MoleMole::Config::CampType OLNAFBAENGH; // 0x20
	::System::Single DIJADIGAGCA; // 0x24
	::GFHEOLGDLGH BDAMOMKBEBI; // 0x28
	::System::Boolean OIJDKCEFPEN; // 0x2C
	::System::Boolean DIMLDDPENNA; // 0x2D

	::System::Void CNHBDOMKKDE(::OPIJCPAOCGM OIJJADCMKIK, ::System::UInt32 NJNCGJLHLKC, ::MoleMole::Config::CampType OBNIAHNMHPF, ::UnityEngine::GameObject* HODAIDNDKHD, ::System::Single BOGPAHGJOJK, ::GFHEOLGDLGH JAFKJKEIHHI, ::System::Boolean OIJDKCEFPEN, ::System::Boolean DIMLDDPENNA)
	{
		return ((::System::Void(*)(::PVOID, ::OPIJCPAOCGM, ::System::UInt32, ::MoleMole::Config::CampType, ::UnityEngine::GameObject*, ::System::Single, ::GFHEOLGDLGH, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BFJIMHBAHBI_CNHBDOMKKDE_OFFSET))(this, OIJJADCMKIK, NJNCGJLHLKC, OBNIAHNMHPF, HODAIDNDKHD, BOGPAHGJOJK, JAFKJKEIHHI, OIJDKCEFPEN, DIMLDDPENNA);
	}

	/*
	static ::BFJIMHBAHBI KIJJAMOGEPN(::System::UInt32 NJNCGJLHLKC, ::OPIJCPAOCGM OIJJADCMKIK, ::MoleMole::Config::CampType OBNIAHNMHPF, ::UnityEngine::GameObject* HODAIDNDKHD, ::System::Single BOGPAHGJOJK, ::GFHEOLGDLGH JAFKJKEIHHI, ::System::Boolean OIJDKCEFPEN, ::System::Boolean DIMLDDPENNA)
	{
		return ((::BFJIMHBAHBI(*)(::System::UInt32, ::OPIJCPAOCGM, ::MoleMole::Config::CampType, ::UnityEngine::GameObject*, ::System::Single, ::GFHEOLGDLGH, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BFJIMHBAHBI_KIJJAMOGEPN_OFFSET))(NJNCGJLHLKC, OIJJADCMKIK, OBNIAHNMHPF, HODAIDNDKHD, BOGPAHGJOJK, JAFKJKEIHHI, OIJDKCEFPEN, DIMLDDPENNA);
	}
	*/
};
