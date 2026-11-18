#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatDelayNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define PPNPLNEGAAH_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1D1FBB80)
#define PPNPLNEGAAH_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1D1FBD80)
#define PPNPLNEGAAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FBB00)

inline static constexpr unsigned int PPNPLNEGAAH_TypeDefinitionIndex = 73017;

class PPNPLNEGAAH : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatDelayNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + PPNPLNEGAAH__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + PPNPLNEGAAH_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + PPNPLNEGAAH_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
