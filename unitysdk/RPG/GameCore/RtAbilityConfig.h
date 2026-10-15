#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtAbilityConfig; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A7C0)
#define RPG_GAMECORE_RTABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A7D0)
#define RPG_GAMECORE_RTABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAbilityConfig_TypeDefinitionIndex = 17648;

	class RtAbilityConfig : public ::RPG::GameCore::AbilityConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAbort; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtModifierConfig*>* Modifiers; // 0x60
		::System::String* JsonPath; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
