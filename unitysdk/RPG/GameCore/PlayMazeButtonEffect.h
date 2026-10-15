#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayMazeButtonEffect; }

#define RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92D7C0)
#define RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D92D7D0)
#define RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92D790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMazeButtonEffect_TypeDefinitionIndex = 20500;

	class PlayMazeButtonEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AdventureSkillType BtnType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMazeButtonEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMazeButtonEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMazeButtonEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMazeButtonEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
