#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MiniGameRecordNode; }

#define MJNNDBEFINK_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1A65E5C0)
#define MJNNDBEFINK_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1A65E890)
#define MJNNDBEFINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65E540)

inline static constexpr unsigned int MJNNDBEFINK_TypeDefinitionIndex = 89394;

class MJNNDBEFINK : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MiniGameRecordNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + MJNNDBEFINK__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + MJNNDBEFINK_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + MJNNDBEFINK_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
