#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayVoiceNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CIICFBOAIHJ_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x145C5D10)
#define CIICFBOAIHJ_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x145C6260)
#define CIICFBOAIHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x145C5C90)

inline static constexpr unsigned int CIICFBOAIHJ_TypeDefinitionIndex = 60196;

class CIICFBOAIHJ : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatPlayVoiceNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CIICFBOAIHJ__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CIICFBOAIHJ_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CIICFBOAIHJ_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
