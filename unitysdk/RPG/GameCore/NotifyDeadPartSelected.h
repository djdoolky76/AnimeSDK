#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NotifyDeadPartSelected; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_NOTIFYDEADPARTSELECTED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DA7D0)
#define RPG_GAMECORE_NOTIFYDEADPARTSELECTED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DA7E0)
#define RPG_GAMECORE_NOTIFYDEADPARTSELECTED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DA7A0)

namespace RPG::GameCore
{
	class NotifyDeadPartSelected : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsSelected; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYDEADPARTSELECTED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyDeadPartSelected* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyDeadPartSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYDEADPARTSELECTED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyDeadPartSelected* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyDeadPartSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYDEADPARTSELECTED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
