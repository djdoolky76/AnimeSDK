#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VerifyInteractingEntity; }

#define RPG_GAMECORE_VERIFYINTERACTINGENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8DA60)
#define RPG_GAMECORE_VERIFYINTERACTINGENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC8DA70)
#define RPG_GAMECORE_VERIFYINTERACTINGENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC8DA30)

namespace RPG::GameCore
{
	class VerifyInteractingEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsDialogueTarget; // 0x18
		::System::Boolean IsOwnerEntity; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 ConfigID; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERIFYINTERACTINGENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VerifyInteractingEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VerifyInteractingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERIFYINTERACTINGENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VerifyInteractingEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VerifyInteractingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERIFYINTERACTINGENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
