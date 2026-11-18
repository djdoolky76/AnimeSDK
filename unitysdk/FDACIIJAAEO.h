#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatRandomNextNode; }

#define FDACIIJAAEO_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x191B0000)
#define FDACIIJAAEO_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x191B0220)
#define FDACIIJAAEO__CTOR_OFFSET UNITYSDK_OFFSET(0x191AFF80)

inline static constexpr unsigned int FDACIIJAAEO_TypeDefinitionIndex = 45536;

class FDACIIJAAEO : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatRandomNextNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + FDACIIJAAEO__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + FDACIIJAAEO_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + FDACIIJAAEO_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
