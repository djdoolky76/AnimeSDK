#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEventPriority.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TurnBasedModifierCallbackPriority; }
namespace System { class String; }

#define RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKPRIORITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC62820)
#define RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKPRIORITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC62680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierCallbackPriority_TypeDefinitionIndex = 18236;

	class TurnBasedModifierCallbackPriority : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TurnBasedModifierEventPriority PriorityName; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Key; // 0x18
		::System::Int32 Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKPRIORITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnBasedModifierCallbackPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnBasedModifierCallbackPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKPRIORITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
