#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerRogueSelectLimitedAvatar; }

#define RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2AF90)
#define RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2AFA0)
#define RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2AF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueSelectLimitedAvatar_TypeDefinitionIndex = 22270;

	class TriggerRogueSelectLimitedAvatar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TargetIsOwner; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupPropID; // 0x20
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x28
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
