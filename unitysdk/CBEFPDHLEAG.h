#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityGraphNode; }

#define CBEFPDHLEAG_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x14523720)
#define CBEFPDHLEAG_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x145239F0)
#define CBEFPDHLEAG__CTOR_OFFSET UNITYSDK_OFFSET(0x145236A0)

inline static constexpr unsigned int CBEFPDHLEAG_TypeDefinitionIndex = 48481;

class CBEFPDHLEAG : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityGraphNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CBEFPDHLEAG__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CBEFPDHLEAG_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CBEFPDHLEAG_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
