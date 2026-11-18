#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityAttractorUseNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define NFAGPFHMLDN_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x16B6B220)
#define NFAGPFHMLDN_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x16B6B3E0)
#define NFAGPFHMLDN__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6B1A0)

inline static constexpr unsigned int NFAGPFHMLDN_TypeDefinitionIndex = 90128;

class NFAGPFHMLDN : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityAttractorUseNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + NFAGPFHMLDN__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + NFAGPFHMLDN_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + NFAGPFHMLDN_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
