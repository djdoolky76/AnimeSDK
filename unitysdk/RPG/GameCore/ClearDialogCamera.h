#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearDialogCamera; }

#define RPG_GAMECORE_CLEARDIALOGCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5C00)
#define RPG_GAMECORE_CLEARDIALOGCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B5C10)
#define RPG_GAMECORE_CLEARDIALOGCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B5B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearDialogCamera_TypeDefinitionIndex = 21132;

	class ClearDialogCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDIALOGCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearDialogCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearDialogCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDIALOGCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearDialogCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearDialogCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDIALOGCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
