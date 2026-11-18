#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatModifyCameraNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define GCBMAMNFABD_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1751E200)
#define GCBMAMNFABD_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1751E4C0)
#define GCBMAMNFABD__CTOR_OFFSET UNITYSDK_OFFSET(0x1751E180)

inline static constexpr unsigned int GCBMAMNFABD_TypeDefinitionIndex = 63208;

class GCBMAMNFABD : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatModifyCameraNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + GCBMAMNFABD__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + GCBMAMNFABD_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + GCBMAMNFABD_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
