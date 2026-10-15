#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IsometricNotifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvIsometricNotify; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVISOMETRICNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A1E60)
#define RPG_GAMECORE_ADVISOMETRICNOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A1EA0)
#define RPG_GAMECORE_ADVISOMETRICNOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A1E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricNotify_TypeDefinitionIndex = 22211;

	class AdvIsometricNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::IsometricNotifyType NotifyType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* InteractProp; // 0x20
		::RPG::GameCore::TargetEvaluator* Platform; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICNOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICNOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICNOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
