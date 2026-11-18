#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DAKDOMLMDGC;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole::GalGame { class MainCityChatTransitionDoActionsNode; }

#define AHKPNBHOMBN_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x12656290)
#define AHKPNBHOMBN__CTOR_OFFSET UNITYSDK_OFFSET(0x12656280)

inline static constexpr unsigned int AHKPNBHOMBN_TypeDefinitionIndex = 88057;

class AHKPNBHOMBN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPNBHOMBN__CTOR_OFFSET))(this);
	}

	static ::System::Void KNDMMHPDPIB(::MoleMole::UIBaseChatPlayController* AEJBCMBCDJE, ::DAKDOMLMDGC* CBKKFECGFAG, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseChatPlayController*, ::DAKDOMLMDGC*, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode*))((::PBYTE)hIl2Cpp + AHKPNBHOMBN_KNDMMHPDPIB_OFFSET))(AEJBCMBCDJE, CBKKFECGFAG, AMJADGKJAPK);
	}
};
