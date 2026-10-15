#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetUseTemporaryLockTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9BEB0)
#define RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9BEC0)
#define RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9BE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUseTemporaryLockTarget_TypeDefinitionIndex = 22481;

	class SetUseTemporaryLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsEnable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUseTemporaryLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUseTemporaryLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUseTemporaryLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUseTemporaryLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
