#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatChangeActorsNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define JHDFPGFODEH_DDHJFOGLGGK_OFFSET UNITYSDK_OFFSET(0x13841860)
#define JHDFPGFODEH_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x138416D0)
#define JHDFPGFODEH_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x138421B0)
#define JHDFPGFODEH__CTOR_OFFSET UNITYSDK_OFFSET(0x13841650)

inline static constexpr unsigned int JHDFPGFODEH_TypeDefinitionIndex = 83282;

class JHDFPGFODEH : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatChangeActorsNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + JHDFPGFODEH__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + JHDFPGFODEH_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void DDHJFOGLGGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDFPGFODEH_DDHJFOGLGGK_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + JHDFPGFODEH_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
