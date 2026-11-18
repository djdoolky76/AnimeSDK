#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole::GalGame { class MainCityChatTransitionDoActionsNode; }

#define JIKFBDEPDDC_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x165ADAF0)
#define JIKFBDEPDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x165ADAE0)

inline static constexpr unsigned int JIKFBDEPDDC_TypeDefinitionIndex = 83576;

class JIKFBDEPDDC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKFBDEPDDC__CTOR_OFFSET))(this);
	}

	static ::System::Void KNDMMHPDPIB(::MoleMole::UIBaseChatPlayController* AEJBCMBCDJE, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseChatPlayController*, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode*))((::PBYTE)hIl2Cpp + JIKFBDEPDDC_KNDMMHPDPIB_OFFSET))(AEJBCMBCDJE, AMJADGKJAPK);
	}
};
