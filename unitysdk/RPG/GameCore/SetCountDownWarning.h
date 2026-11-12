#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetCountDownWarning; }

#define RPG_GAMECORE_SETCOUNTDOWNWARNING_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAFC60)
#define RPG_GAMECORE_SETCOUNTDOWNWARNING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECAFC70)
#define RPG_GAMECORE_SETCOUNTDOWNWARNING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECAFC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCountDownWarning_TypeDefinitionIndex = 23359;

	class SetCountDownWarning : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CountDownTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOUNTDOWNWARNING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCountDownWarning* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCountDownWarning*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOUNTDOWNWARNING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCountDownWarning* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCountDownWarning*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOUNTDOWNWARNING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
