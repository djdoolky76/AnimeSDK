#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_SetAttributeFixPoint; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3055C0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3055D0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D305590)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_SetAttributeFixPoint_TypeDefinitionIndex = 10302;

	class RoadRashGameModifier_SetAttributeFixPoint : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::System::String* AttributeName; // 0x18
		::RPG::GameCore::FixPoint Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
