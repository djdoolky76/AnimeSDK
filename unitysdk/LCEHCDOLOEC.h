#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole::GalGame { class MainCityChatTransitionDoActionsNode; }

#define LCEHCDOLOEC_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x126CC700)
#define LCEHCDOLOEC__CTOR_OFFSET UNITYSDK_OFFSET(0x126CC6F0)

inline static constexpr unsigned int LCEHCDOLOEC_TypeDefinitionIndex = 80299;

class LCEHCDOLOEC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEHCDOLOEC__CTOR_OFFSET))(this);
	}

	static ::System::Void KNDMMHPDPIB(::MoleMole::UIBaseChatPlayController* AEJBCMBCDJE, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseChatPlayController*, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode*))((::PBYTE)hIl2Cpp + LCEHCDOLOEC_KNDMMHPDPIB_OFFSET))(AEJBCMBCDJE, AMJADGKJAPK);
	}
};
