#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatConditionNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define OOLOMABLFOJ_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x15F8DD90)
#define OOLOMABLFOJ_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x15F8DC40)
#define OOLOMABLFOJ_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x15F8DD00)
#define OOLOMABLFOJ_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x15F8DDA0)
#define OOLOMABLFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8DBC0)

inline static constexpr unsigned int OOLOMABLFOJ_TypeDefinitionIndex = 54447;

class OOLOMABLFOJ : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatConditionNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + OOLOMABLFOJ__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + OOLOMABLFOJ_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + OOLOMABLFOJ_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::GalGame::MainCityChatConditionNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatConditionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLOMABLFOJ_GACPDCEMJOA_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatConditionNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*))((::PBYTE)hIl2Cpp + OOLOMABLFOJ_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}
};
