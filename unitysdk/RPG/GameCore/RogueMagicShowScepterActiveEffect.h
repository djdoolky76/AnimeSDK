#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RogueMagicShowScepterActiveEffect; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x20776330)
#define RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20776340)
#define RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20776300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicShowScepterActiveEffect_TypeDefinitionIndex = 23757;

	class RogueMagicShowScepterActiveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ScepterID; // 0x18
		::RPG::GameCore::DynamicFloat* Level; // 0x20
		::System::String* ImagePath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicShowScepterActiveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicShowScepterActiveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicShowScepterActiveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicShowScepterActiveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
