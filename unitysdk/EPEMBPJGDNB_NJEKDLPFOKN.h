#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPEMBPJGDNB_FGLIKJLJGAM;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }

#define EPEMBPJGDNB_NJEKDLPFOKN_ADLBPEBOOPM_OFFSET UNITYSDK_OFFSET(0x1418C7B0)
#define EPEMBPJGDNB_NJEKDLPFOKN_MPDPGOCHDAK_OFFSET UNITYSDK_OFFSET(0x1418C690)
#define EPEMBPJGDNB_NJEKDLPFOKN_NMJPFOBJGEC_OFFSET UNITYSDK_OFFSET(0x1418C710)
#define EPEMBPJGDNB_NJEKDLPFOKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1418C680)

inline static constexpr unsigned int EPEMBPJGDNB_NJEKDLPFOKN_TypeDefinitionIndex = 46298;

class EPEMBPJGDNB_NJEKDLPFOKN : public ::System::Object
{
public:
	::MoleMole::UIGeneralTipsPopWindowController* PAHOCPMOAIP; // 0x10
	::System::Action* OLDCEOGKOAE; // 0x18
	::EPEMBPJGDNB_FGLIKJLJGAM* FGBNBFHOKAA; // 0x20
	::System::Int32 GFGJBNNKKDG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBPJGDNB_NJEKDLPFOKN__CTOR_OFFSET))(this);
	}

	::System::Void MPDPGOCHDAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBPJGDNB_NJEKDLPFOKN_MPDPGOCHDAK_OFFSET))(this);
	}

	::System::Void NMJPFOBJGEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBPJGDNB_NJEKDLPFOKN_NMJPFOBJGEC_OFFSET))(this);
	}

	::System::Void ADLBPEBOOPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBPJGDNB_NJEKDLPFOKN_ADLBPEBOOPM_OFFSET))(this);
	}
};
