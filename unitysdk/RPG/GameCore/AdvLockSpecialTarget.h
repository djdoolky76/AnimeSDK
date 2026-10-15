#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvLockSpecialTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVLOCKSPECIALTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D374F00)
#define RPG_GAMECORE_ADVLOCKSPECIALTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D374F10)
#define RPG_GAMECORE_ADVLOCKSPECIALTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D374ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLockSpecialTarget_TypeDefinitionIndex = 20453;

	class AdvLockSpecialTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLock; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOCKSPECIALTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLockSpecialTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLockSpecialTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOCKSPECIALTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLockSpecialTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLockSpecialTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOCKSPECIALTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
