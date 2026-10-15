#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PauseCameraUpdate; }

#define RPG_GAMECORE_PAUSECAMERAUPDATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C4DD0)
#define RPG_GAMECORE_PAUSECAMERAUPDATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C4DE0)
#define RPG_GAMECORE_PAUSECAMERAUPDATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C4DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseCameraUpdate_TypeDefinitionIndex = 20822;

	class PauseCameraUpdate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Pause; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSECAMERAUPDATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseCameraUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseCameraUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSECAMERAUPDATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseCameraUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseCameraUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSECAMERAUPDATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
