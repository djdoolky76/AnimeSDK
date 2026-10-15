#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCameraConfigPriority; }

#define RPG_GAMECORE_SETCAMERACONFIGPRIORITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA992D0)
#define RPG_GAMECORE_SETCAMERACONFIGPRIORITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA992E0)
#define RPG_GAMECORE_SETCAMERACONFIGPRIORITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA992A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCameraConfigPriority_TypeDefinitionIndex = 22395;

	class SetCameraConfigPriority : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Priority; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERACONFIGPRIORITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCameraConfigPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCameraConfigPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERACONFIGPRIORITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCameraConfigPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCameraConfigPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERACONFIGPRIORITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
