#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGONPCLBCDC.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatTransitionStartNode; }

#define IBOIPODOIHO_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x16F58290)
#define IBOIPODOIHO_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x16F58690)
#define IBOIPODOIHO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F58210)

inline static constexpr unsigned int IBOIPODOIHO_TypeDefinitionIndex = 71646;

class IBOIPODOIHO : public ::JGONPCLBCDC
{
public:
	::MoleMole::GalGame::MainCityChatTransitionStartNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + IBOIPODOIHO__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IBOIPODOIHO_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IBOIPODOIHO_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
