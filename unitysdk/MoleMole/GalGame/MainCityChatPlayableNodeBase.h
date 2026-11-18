#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYABLENODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1466B970)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayableNodeBase_TypeDefinitionIndex = 48461;

	class MainCityChatPlayableNodeBase : public ::System::Object
	{
	public:
		::System::Boolean allowSkip; // 0x10
		::System::Byte _padding0[0x3];
		::MoleMole::GalGame::MainCityChatPlayableNodeType nodeType; // 0x14

		::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeType nodeType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYABLENODEBASE__CTOR_OFFSET))(this, nodeType);
		}
	};
}
