#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestartTrackPhoto; }

#define RPG_GAMECORE_RESTARTTRACKPHOTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D960D00)
#define RPG_GAMECORE_RESTARTTRACKPHOTO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D960D10)
#define RPG_GAMECORE_RESTARTTRACKPHOTO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D960C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestartTrackPhoto_TypeDefinitionIndex = 21646;

	class RestartTrackPhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTTRACKPHOTO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestartTrackPhoto* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestartTrackPhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTTRACKPHOTO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestartTrackPhoto* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestartTrackPhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTTRACKPHOTO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
