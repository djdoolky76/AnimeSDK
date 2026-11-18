#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/UnityEngine/Keyframe.h"

class ACNLKLCDALA;
namespace MoleMole::Config { class AnimatorStateTimeSegment; }

#define FCNJNMHEKPD_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0xBB381D0)
#define FCNJNMHEKPD_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0xBB382D0)
#define FCNJNMHEKPD__CTOR_OFFSET UNITYSDK_OFFSET(0xBB38260)

inline static constexpr unsigned int FCNJNMHEKPD_TypeDefinitionIndex = 55849;

class FCNJNMHEKPD : public ::PKMJPMFCNBK
{
public:
	::MoleMole::Config::AnimatorStateTimeSegment* FJDLNNHEJGF; // 0x80
	::ACNLKLCDALA* JEHEMNBEEJF; // 0x88
	::UnityEngine::Keyframe MPGKIENNEBH; // 0x90
	::UnityEngine::Keyframe ECFJJBPEFGG; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJNMHEKPD__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJNMHEKPD_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNJNMHEKPD_KHJELIBOECB_OFFSET))(this);
	}
};
