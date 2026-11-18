#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole::Config { class CharacterAimControlConfig; }

#define GIGJPIFBFMO_AEPMADFFMKB_OFFSET UNITYSDK_OFFSET(0x795D80)
#define GIGJPIFBFMO_JDDBJNHPJLP_OFFSET UNITYSDK_OFFSET(0x795D20)
#define GIGJPIFBFMO_LHNLCHMABCC_OFFSET UNITYSDK_OFFSET(0x16CC71A0)

inline static constexpr unsigned int GIGJPIFBFMO_TypeDefinitionIndex = 81401;

struct alignas(4) GIGJPIFBFMO
{
	::AIOFAMODPOO DLLKBJGGPAE; // 0x10
	::UnityEngine::Vector2 JODLAKEPAJM; // 0x14
	::UnityEngine::Vector2 MFBHJODAIFG; // 0x1C
	::UnityEngine::Vector2 AKCBBJDCKBC; // 0x24
	::System::Boolean OJCGFBNLJPF; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Single KOFINKBCEME; // 0x30
	::System::Single INHJBEODKJC; // 0x34
	::System::Boolean IODKNBPOJIA; // 0x38
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector2 OBPLLDKGKPL; // 0x3C

	/*
	static ::GIGJPIFBFMO LHNLCHMABCC()
	{
		return ((::GIGJPIFBFMO(*)())((::PBYTE)hIl2Cpp + GIGJPIFBFMO_LHNLCHMABCC_OFFSET))();
	}
	*/

	::System::Void JDDBJNHPJLP(::UnityEngine::Vector2 PPIGOEEHOFH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GIGJPIFBFMO_JDDBJNHPJLP_OFFSET))(this, PPIGOEEHOFH);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> AEPMADFFMKB(::MoleMole::Config::CharacterAimControlConfig* DFMKILICPFB, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::MoleMole::Config::CharacterAimControlConfig*, ::System::Single))((::PBYTE)hIl2Cpp + GIGJPIFBFMO_AEPMADFFMKB_OFFSET))(this, DFMKILICPFB, PMNLNNGEIFM);
	}
};
