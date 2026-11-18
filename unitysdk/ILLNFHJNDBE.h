#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCitySoundActionNode; }

#define ILLNFHJNDBE_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x13AAB030)
#define ILLNFHJNDBE_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x13AAB260)
#define ILLNFHJNDBE__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAAFB0)

inline static constexpr unsigned int ILLNFHJNDBE_TypeDefinitionIndex = 84152;

class ILLNFHJNDBE : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCitySoundActionNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + ILLNFHJNDBE__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + ILLNFHJNDBE_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + ILLNFHJNDBE_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
