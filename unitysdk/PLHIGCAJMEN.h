#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSetExitChatTransitionNode; }

#define PLHIGCAJMEN_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1C1DC7A0)
#define PLHIGCAJMEN_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1C1DC900)
#define PLHIGCAJMEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DC720)

inline static constexpr unsigned int PLHIGCAJMEN_TypeDefinitionIndex = 78035;

class PLHIGCAJMEN : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + PLHIGCAJMEN__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + PLHIGCAJMEN_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + PLHIGCAJMEN_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
