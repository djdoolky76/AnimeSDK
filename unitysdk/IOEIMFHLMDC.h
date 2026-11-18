#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSetSpecialsNode; }

#define IOEIMFHLMDC_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x15C27EE0)
#define IOEIMFHLMDC_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x15C27CA0)
#define IOEIMFHLMDC_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x15C27E50)
#define IOEIMFHLMDC_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0x15C27DB0)
#define IOEIMFHLMDC_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x15C27D70)
#define IOEIMFHLMDC_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x15C27E40)
#define IOEIMFHLMDC__CTOR_OFFSET UNITYSDK_OFFSET(0x15C27C20)

inline static constexpr unsigned int IOEIMFHLMDC_TypeDefinitionIndex = 78437;

class IOEIMFHLMDC : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatSetSpecialsNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + IOEIMFHLMDC__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IOEIMFHLMDC_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEIMFHLMDC_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Void MPPBKPNJPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEIMFHLMDC_MPPBKPNJPHO_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatSetSpecialsNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetSpecialsNode*))((::PBYTE)hIl2Cpp + IOEIMFHLMDC_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IOEIMFHLMDC_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::GalGame::MainCityChatSetSpecialsNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatSetSpecialsNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEIMFHLMDC_GACPDCEMJOA_OFFSET))(this);
	}
};
