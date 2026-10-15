#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraModeChange; }

#define RPG_GAMECORE_VCAMERAMODECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC51B40)
#define RPG_GAMECORE_VCAMERAMODECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC51B50)
#define RPG_GAMECORE_VCAMERAMODECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC51B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraModeChange_TypeDefinitionIndex = 22459;

	class VCameraModeChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CameraMode Mode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAMODECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraModeChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAMODECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraModeChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAMODECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
