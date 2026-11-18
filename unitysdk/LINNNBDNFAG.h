#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShow3DModelNode; }

#define LINNNBDNFAG_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x16852410)
#define LINNNBDNFAG_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x16852670)
#define LINNNBDNFAG__CTOR_OFFSET UNITYSDK_OFFSET(0x16852390)

inline static constexpr unsigned int LINNNBDNFAG_TypeDefinitionIndex = 75913;

class LINNNBDNFAG : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatShow3DModelNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + LINNNBDNFAG__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + LINNNBDNFAG_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + LINNNBDNFAG_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
