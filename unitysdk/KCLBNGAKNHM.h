#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatTransitionNode; }

#define KCLBNGAKNHM_CLFONDHAKFB_OFFSET UNITYSDK_OFFSET(0x1A4A65E0)
#define KCLBNGAKNHM_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x1A4A6730)
#define KCLBNGAKNHM_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1A4A6270)
#define KCLBNGAKNHM_KOMGGDEBDPD_OFFSET UNITYSDK_OFFSET(0x1A4A6470)
#define KCLBNGAKNHM_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1A4A6550)
#define KCLBNGAKNHM_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0x1A4A6690)
#define KCLBNGAKNHM_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x1A4A6510)
#define KCLBNGAKNHM_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x1A4A6720)
#define KCLBNGAKNHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A61F0)

inline static constexpr unsigned int KCLBNGAKNHM_TypeDefinitionIndex = 88019;

class KCLBNGAKNHM : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatTransitionNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + KCLBNGAKNHM__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + KCLBNGAKNHM_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void KOMGGDEBDPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLBNGAKNHM_KOMGGDEBDPD_OFFSET))(this);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLBNGAKNHM_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + KCLBNGAKNHM_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CLFONDHAKFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLBNGAKNHM_CLFONDHAKFB_OFFSET))(this);
	}

	::System::Void MPPBKPNJPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLBNGAKNHM_MPPBKPNJPHO_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatTransitionNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionNode*))((::PBYTE)hIl2Cpp + KCLBNGAKNHM_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::GalGame::MainCityChatTransitionNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatTransitionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLBNGAKNHM_GACPDCEMJOA_OFFSET))(this);
	}
};
