#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCActionBase.h"

#define MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1357DB90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatNPCEnterAction_TypeDefinitionIndex = 44109;

	class MainCityChatNPCEnterAction : public ::MoleMole::GalGame::MainCityChatNPCActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATNPCENTERACTION__CTOR_OFFSET))(this);
		}
	};
}
