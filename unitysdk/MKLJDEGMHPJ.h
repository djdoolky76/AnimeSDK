#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatJumpChapterNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define MKLJDEGMHPJ_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x12FF99E0)
#define MKLJDEGMHPJ_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x12FF98E0)
#define MKLJDEGMHPJ_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x12FF99F0)
#define MKLJDEGMHPJ_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0x12FF9A80)
#define MKLJDEGMHPJ_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x12FF99A0)
#define MKLJDEGMHPJ_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x12FF9B10)
#define MKLJDEGMHPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF9860)

inline static constexpr unsigned int MKLJDEGMHPJ_TypeDefinitionIndex = 82529;

class MKLJDEGMHPJ : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatJumpChapterNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + MKLJDEGMHPJ__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + MKLJDEGMHPJ_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLJDEGMHPJ_OMMICIJCCKB_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatJumpChapterNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatJumpChapterNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLJDEGMHPJ_GACPDCEMJOA_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + MKLJDEGMHPJ_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MPPBKPNJPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLJDEGMHPJ_MPPBKPNJPHO_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatJumpChapterNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatJumpChapterNode*))((::PBYTE)hIl2Cpp + MKLJDEGMHPJ_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}
};
