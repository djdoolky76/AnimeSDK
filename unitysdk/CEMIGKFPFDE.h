#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCitySoundEventNode; }

#define CEMIGKFPFDE_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x145B2200)
#define CEMIGKFPFDE_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x145B2490)
#define CEMIGKFPFDE__CTOR_OFFSET UNITYSDK_OFFSET(0x145B2180)

inline static constexpr unsigned int CEMIGKFPFDE_TypeDefinitionIndex = 87952;

class CEMIGKFPFDE : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCitySoundEventNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CEMIGKFPFDE__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CEMIGKFPFDE_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CEMIGKFPFDE_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
