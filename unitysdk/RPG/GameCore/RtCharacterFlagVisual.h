#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtCharacterFlagVisual; }
namespace RPG::GameCore { class RtCharacterVisual; }

#define RPG_GAMECORE_RTCHARACTERFLAGVISUAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2A9B0)
#define RPG_GAMECORE_RTCHARACTERFLAGVISUAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2A8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterFlagVisual_TypeDefinitionIndex = 24092;

	class RtCharacterFlagVisual : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* Flags; // 0x10
		::RPG::GameCore::RtCharacterVisual* Visual; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERFLAGVISUAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtCharacterFlagVisual* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtCharacterFlagVisual*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERFLAGVISUAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
