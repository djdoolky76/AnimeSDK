#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemySelfRotateCmptConfig; }

#define RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D916900)
#define RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D916910)
#define RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9168B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemySelfRotateCmptConfig_TypeDefinitionIndex = 18938;

	class PingPongEnemySelfRotateCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSelfRotate; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single RotateSpeed; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemySelfRotateCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemySelfRotateCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemySelfRotateCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemySelfRotateCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSELFROTATECMPTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
