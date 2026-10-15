#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectTriggerRange; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTTRIGGERRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D603D40)
#define RPG_GAMECORE_EFFECTTRIGGERRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D603BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectTriggerRange_TypeDefinitionIndex = 22886;

	class EffectTriggerRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartNormalizedTime; // 0x10
		::System::Single EndNormalizedTime; // 0x14
		::System::String* TriggerName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTTRIGGERRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectTriggerRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectTriggerRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTTRIGGERRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
