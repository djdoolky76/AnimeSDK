#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define OPABOELDHDB_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x18459350)
#define OPABOELDHDB_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x18459530)
#define OPABOELDHDB__CTOR_OFFSET UNITYSDK_OFFSET(0x18459340)

inline static constexpr unsigned int OPABOELDHDB_TypeDefinitionIndex = 44892;

class OPABOELDHDB : public ::BAPNBOCDBHM
{
public:
	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + OPABOELDHDB__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + OPABOELDHDB_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + OPABOELDHDB_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
