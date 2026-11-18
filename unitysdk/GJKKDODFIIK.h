#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatCallCameraEffectNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define GJKKDODFIIK_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x17A0D800)
#define GJKKDODFIIK_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x17A0DA70)
#define GJKKDODFIIK__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0D780)

inline static constexpr unsigned int GJKKDODFIIK_TypeDefinitionIndex = 90850;

class GJKKDODFIIK : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatCallCameraEffectNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + GJKKDODFIIK__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + GJKKDODFIIK_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + GJKKDODFIIK_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
