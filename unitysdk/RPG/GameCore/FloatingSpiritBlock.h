#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloatingSpiritBlock; }

#define RPG_GAMECORE_FLOATINGSPIRITBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E4CF0)
#define RPG_GAMECORE_FLOATINGSPIRITBLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E4BF0)

namespace RPG::GameCore
{
	class FloatingSpiritBlock : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt16 LevelVarValue; // 0x10
		::System::UInt16 BlockIndex; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATINGSPIRITBLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloatingSpiritBlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloatingSpiritBlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATINGSPIRITBLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
