#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_RemoveModifierWhenReset; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA86A80)
#define RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA86A90)
#define RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA86A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RemoveModifierWhenReset_TypeDefinitionIndex = 20150;

	class ST_Side_RemoveModifierWhenReset : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* ModifierName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
