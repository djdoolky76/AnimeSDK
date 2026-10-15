#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAdvLockDistance; }

#define RPG_GAMECORE_SETADVLOCKDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA660A0)
#define RPG_GAMECORE_SETADVLOCKDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA660B0)
#define RPG_GAMECORE_SETADVLOCKDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA66070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvLockDistance_TypeDefinitionIndex = 20156;

	class SetAdvLockDistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x18
		::System::Boolean IsPushValue; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single LockDistance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVLOCKDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvLockDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvLockDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVLOCKDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvLockDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvLockDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVLOCKDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
