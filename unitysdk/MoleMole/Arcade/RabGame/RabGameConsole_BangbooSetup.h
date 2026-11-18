#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/RabGame/RabGameConsole_EAILFLEBIPF.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ARCADE_RABGAME_RABGAMECONSOLE_BANGBOOSETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F90BA80)

namespace MoleMole::Arcade::RabGame
{
	inline static constexpr unsigned int RabGameConsole_BangbooSetup_TypeDefinitionIndex = 94997;

	class RabGameConsole_BangbooSetup : public ::System::Object
	{
	public:
		::System::Int32 ConfigId; // 0x10
		::MoleMole::Arcade::RabGame::RabGameConsole_EAILFLEBIPF TeamSide; // 0x14
		::MoleMole::Vector2Int Position; // 0x18
		::System::Int32 Level; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* PropertyOverrides; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* BuffIds; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMECONSOLE_BANGBOOSETUP__CTOR_OFFSET))(this);
		}
	};
}
