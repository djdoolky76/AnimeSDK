#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/EBE679782781F278.h"

#define ABC_CHESSGAME_CHESSANIMMONOPLUGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace ABC::ChessGame
{
	inline static constexpr unsigned int ChessAnimMonoPluginConfig_TypeDefinitionIndex = 10153;

	class ChessAnimMonoPluginConfig : public ::E68AA4EB51923C98::EBE679782781F278
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMMONOPLUGINCONFIG__CTOR_OFFSET))(this);
		}
	};
}
