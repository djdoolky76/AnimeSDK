#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FollowSlotConfig; }
namespace RPG::GameCore { class FollowSlotConstValue; }

#define RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BA0A0)
#define RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BA0B0)
#define RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B9F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowSlotConstValue_TypeDefinitionIndex = 15617;

	class FollowSlotConstValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>* PetSlots; // 0x10
		::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>* CharacterSlots; // 0x18
		::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>* PacManSlots; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FollowSlotConstValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FollowSlotConstValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FollowSlotConstValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FollowSlotConstValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
