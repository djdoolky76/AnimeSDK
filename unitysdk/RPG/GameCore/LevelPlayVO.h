#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPlayVO; }

#define RPG_GAMECORE_LEVELPLAYVO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CA970)
#define RPG_GAMECORE_LEVELPLAYVO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7CA980)
#define RPG_GAMECORE_LEVELPLAYVO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CA940)

namespace RPG::GameCore
{
	class LevelPlayVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CharacterVOType VOType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPlayVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPlayVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
