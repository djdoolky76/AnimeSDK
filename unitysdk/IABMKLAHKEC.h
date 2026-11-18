#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGONPCLBCDC.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatTransitionDoActionsNode; }

#define IABMKLAHKEC_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1012B0A0)
#define IABMKLAHKEC_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1012B1D0)
#define IABMKLAHKEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1012B020)

inline static constexpr unsigned int IABMKLAHKEC_TypeDefinitionIndex = 42333;

class IABMKLAHKEC : public ::JGONPCLBCDC
{
public:
	::MoleMole::GalGame::MainCityChatTransitionDoActionsNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + IABMKLAHKEC__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IABMKLAHKEC_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IABMKLAHKEC_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
