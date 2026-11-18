#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::GalGame { class MainCityChatTransitionDoActionsNode; }

#define CPNHIMEDKJI_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x13E1EAF0)
#define CPNHIMEDKJI__CTOR_OFFSET UNITYSDK_OFFSET(0x13E1EAE0)

inline static constexpr unsigned int CPNHIMEDKJI_TypeDefinitionIndex = 78508;

class CPNHIMEDKJI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNHIMEDKJI__CTOR_OFFSET))(this);
	}

	static ::System::Void KNDMMHPDPIB(::MoleMole::UIMainCityChatPlayWidgetController* NCIMBHDKIJM, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::MoleMole::UIMainCityChatPlayWidgetController*, ::MoleMole::GalGame::MainCityChatTransitionDoActionsNode*))((::PBYTE)hIl2Cpp + CPNHIMEDKJI_KNDMMHPDPIB_OFFSET))(NCIMBHDKIJM, AMJADGKJAPK);
	}
};
