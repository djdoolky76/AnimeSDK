#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatCustomTransitionNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define AFHHBGMBOCI_AFNKMJDPILJ_OFFSET UNITYSDK_OFFSET(0x1434F180)
#define AFHHBGMBOCI_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x1434F420)
#define AFHHBGMBOCI_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1434F0B0)
#define AFHHBGMBOCI_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1434F300)
#define AFHHBGMBOCI_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0x1434F390)
#define AFHHBGMBOCI_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x1434F130)
#define AFHHBGMBOCI_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x1434F170)
#define AFHHBGMBOCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1434F030)

inline static constexpr unsigned int AFHHBGMBOCI_TypeDefinitionIndex = 84411;

class AFHHBGMBOCI : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatCustomTransitionNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + AFHHBGMBOCI__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + AFHHBGMBOCI_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHBGMBOCI_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatCustomTransitionNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCustomTransitionNode*))((::PBYTE)hIl2Cpp + AFHHBGMBOCI_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AFNKMJDPILJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHBGMBOCI_AFNKMJDPILJ_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + AFHHBGMBOCI_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MPPBKPNJPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHBGMBOCI_MPPBKPNJPHO_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatCustomTransitionNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatCustomTransitionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHBGMBOCI_GACPDCEMJOA_OFFSET))(this);
	}
};
