#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::GalGame { class MainCityChatTransitionDoActionsNode; }

#define GLDAOFDFIOE_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x17A129D0)
#define GLDAOFDFIOE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A129C0)

inline static constexpr unsigned int GLDAOFDFIOE_TypeDefinitionIndex = 71423;

class GLDAOFDFIOE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDAOFDFIOE__CTOR_OFFSET))(this);
	}

	static ::System::Void KNDMMHPDPIB(::MoleMole::UIMainCityChatPlayWidgetController* NCIMBHDKIJM, ::System::Int32 BDHFADMIJGL, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::MoleMole::UIMainCityChatPlayWidgetController*, ::System::Int32, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode*))((::PBYTE)hIl2Cpp + GLDAOFDFIOE_KNDMMHPDPIB_OFFSET))(NCIMBHDKIJM, BDHFADMIJGL, AMJADGKJAPK);
	}
};
