#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatTransitionDisplayItem.h"

#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE2030)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatRandomChoiceDisplayItem_TypeDefinitionIndex = 67158;

	class MainCityChatRandomChoiceDisplayItem : public ::MoleMole::GalGame::MainCityChatTransitionDisplayItem
	{
	public:
		::System::Int32 groupId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM__CTOR_OFFSET))(this);
		}
	};
}
