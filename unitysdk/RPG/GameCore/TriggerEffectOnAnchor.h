#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerEffectOnAnchor; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECTONANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC242A0)
#define RPG_GAMECORE_TRIGGEREFFECTONANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC242B0)
#define RPG_GAMECORE_TRIGGEREFFECTONANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC24270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectOnAnchor_TypeDefinitionIndex = 21695;

	class TriggerEffectOnAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::String* EffectPath; // 0x28
		::System::String* UniqueEffectName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectOnAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectOnAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectOnAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectOnAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
