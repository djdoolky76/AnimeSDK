#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::ChessGame { class ChessAnimMonoPluginConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_CHESSGAME_CHESSANIMMONOCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::ChessGame
{
	inline static constexpr unsigned int ChessAnimMonoComponent_TypeDefinitionIndex = 9600;

	class ChessAnimMonoComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::ABC::ChessGame::ChessAnimMonoPluginConfig*>* PluginConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMMONOCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
