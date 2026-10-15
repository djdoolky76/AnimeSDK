#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UnlockTargetShield; }
namespace System { class String; }

#define RPG_GAMECORE_UNLOCKTARGETSHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4AE80)
#define RPG_GAMECORE_UNLOCKTARGETSHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC4AE90)
#define RPG_GAMECORE_UNLOCKTARGETSHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC4AE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockTargetShield_TypeDefinitionIndex = 23622;

	class UnlockTargetShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* LockKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETSHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnlockTargetShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnlockTargetShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETSHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnlockTargetShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnlockTargetShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETSHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
