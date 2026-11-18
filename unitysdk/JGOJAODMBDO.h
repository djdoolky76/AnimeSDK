#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole::GalGame { class MainCityChatTransitionDoActionsNode; }

#define JGOJAODMBDO_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x19811A00)
#define JGOJAODMBDO__CTOR_OFFSET UNITYSDK_OFFSET(0x198119F0)

inline static constexpr unsigned int JGOJAODMBDO_TypeDefinitionIndex = 91953;

class JGOJAODMBDO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOJAODMBDO__CTOR_OFFSET))(this);
	}

	static ::System::Void KNDMMHPDPIB(::MoleMole::UIBaseChatPlayController* AEJBCMBCDJE, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseChatPlayController*, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode*))((::PBYTE)hIl2Cpp + JGOJAODMBDO_KNDMMHPDPIB_OFFSET))(AEJBCMBCDJE, AMJADGKJAPK);
	}
};
