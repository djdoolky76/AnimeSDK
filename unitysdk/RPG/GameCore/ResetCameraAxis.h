#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetCameraAxis; }

#define RPG_GAMECORE_RESETCAMERAAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98A9D0)
#define RPG_GAMECORE_RESETCAMERAAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98A9E0)
#define RPG_GAMECORE_RESETCAMERAAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98A910)

namespace RPG::GameCore
{
	class ResetCameraAxis : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCAMERAAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetCameraAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetCameraAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCAMERAAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetCameraAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetCameraAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCAMERAAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
