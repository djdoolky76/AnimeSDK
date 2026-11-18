#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

namespace MoleMole::GalGame { class CheckResourceTitleActionNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define KFCPHBKJBEH__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD5870)

inline static constexpr unsigned int KFCPHBKJBEH_TypeDefinitionIndex = 92233;

class KFCPHBKJBEH : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::CheckResourceTitleActionNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + KFCPHBKJBEH__CTOR_OFFSET))(this, ONBDAIKININ);
	}
};
