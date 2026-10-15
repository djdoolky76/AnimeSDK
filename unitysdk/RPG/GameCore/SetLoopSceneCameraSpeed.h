#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetLoopSceneCameraSpeed; }

#define RPG_GAMECORE_SETLOOPSCENECAMERASPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8BE0)
#define RPG_GAMECORE_SETLOOPSCENECAMERASPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB8BF0)
#define RPG_GAMECORE_SETLOOPSCENECAMERASPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB8BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLoopSceneCameraSpeed_TypeDefinitionIndex = 20432;

	class SetLoopSceneCameraSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single MoveSpeed; // 0x18
		::System::Single Duration; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPSCENECAMERASPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLoopSceneCameraSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLoopSceneCameraSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPSCENECAMERASPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLoopSceneCameraSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLoopSceneCameraSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPSCENECAMERASPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
