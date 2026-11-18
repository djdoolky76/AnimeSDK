#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole::GalGame { class MainCityChatTransitionDoActionsNode; }

#define KGAMCKBBMBK_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x17907250)
#define KGAMCKBBMBK__CTOR_OFFSET UNITYSDK_OFFSET(0x17907240)

inline static constexpr unsigned int KGAMCKBBMBK_TypeDefinitionIndex = 45351;

class KGAMCKBBMBK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAMCKBBMBK__CTOR_OFFSET))(this);
	}

	static ::System::Void KNDMMHPDPIB(::MoleMole::UIBaseChatPlayController* AEJBCMBCDJE, ::System::Int32 BDHFADMIJGL, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseChatPlayController*, ::System::Int32, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode*))((::PBYTE)hIl2Cpp + KGAMCKBBMBK_KNDMMHPDPIB_OFFSET))(AEJBCMBCDJE, BDHFADMIJGL, AMJADGKJAPK);
	}
};
