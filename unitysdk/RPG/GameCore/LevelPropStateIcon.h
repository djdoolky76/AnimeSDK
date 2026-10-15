#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelPropStateIconCategory.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPropStateIcon; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPROPSTATEICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CB880)
#define RPG_GAMECORE_LEVELPROPSTATEICON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CB650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropStateIcon_TypeDefinitionIndex = 17235;

	class LevelPropStateIcon : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPropStateIconCategory Category; // 0x10
		::RPG::GameCore::PropState State; // 0x14
		::System::String* TimeRewindState; // 0x18
		::System::UInt32 IconID; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* Color; // 0x28
		::System::String* AnchorKey; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSTATEICON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropStateIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropStateIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSTATEICON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
