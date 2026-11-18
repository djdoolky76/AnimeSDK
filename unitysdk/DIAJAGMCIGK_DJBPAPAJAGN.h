#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/System/Object.h"

class DIAJAGMCIGK;
class PPODAINACLI;
namespace Nap::NapECS { class EcsEntity; }

#define DIAJAGMCIGK_DJBPAPAJAGN_AIAPHOPHNNN_OFFSET UNITYSDK_OFFSET(0x12085570)
#define DIAJAGMCIGK_DJBPAPAJAGN_AJDJNGHFHMB_OFFSET UNITYSDK_OFFSET(0x12085620)
#define DIAJAGMCIGK_DJBPAPAJAGN_CLPDJMFFPPD_OFFSET UNITYSDK_OFFSET(0x120854F0)
#define DIAJAGMCIGK_DJBPAPAJAGN_DCDJPPFOCNH_OFFSET UNITYSDK_OFFSET(0x12085D10)
#define DIAJAGMCIGK_DJBPAPAJAGN_DNKCJCDDICJ_OFFSET UNITYSDK_OFFSET(0x12085440)
#define DIAJAGMCIGK_DJBPAPAJAGN__CTOR_OFFSET UNITYSDK_OFFSET(0x12083950)

inline static constexpr unsigned int DIAJAGMCIGK_DJBPAPAJAGN_TypeDefinitionIndex = 62415;

class DIAJAGMCIGK_DJBPAPAJAGN : public ::System::Object
{
public:
	::Nap::NapECS::EcsEntity* MNGHGOLKKNO; // 0x10
	::PPODAINACLI* EMBMHDIAGDE; // 0x18
	::DIAJAGMCIGK* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DJBPAPAJAGN__CTOR_OFFSET))(this);
	}

	::System::Void DNKCJCDDICJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DJBPAPAJAGN_DNKCJCDDICJ_OFFSET))(this);
	}

	::System::Void CLPDJMFFPPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DJBPAPAJAGN_CLPDJMFFPPD_OFFSET))(this);
	}

	::System::Void AIAPHOPHNNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DJBPAPAJAGN_AIAPHOPHNNN_OFFSET))(this);
	}

	::System::Void AJDJNGHFHMB(::MoleMole::Config::EnterBattleState KDEHMPGOCEP, ::MoleMole::Config::EnterBattleState PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DJBPAPAJAGN_AJDJNGHFHMB_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}

	::System::Void DCDJPPFOCNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAJAGMCIGK_DJBPAPAJAGN_DCDJPPFOCNH_OFFSET))(this);
	}
};
