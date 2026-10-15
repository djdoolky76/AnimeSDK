#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnterFlipperLightDeviceControl; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D616B20)
#define RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D616B60)
#define RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D616AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterFlipperLightDeviceControl_TypeDefinitionIndex = 22345;

	class EnterFlipperLightDeviceControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetDevice; // 0x18
		::System::Boolean Op; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterFlipperLightDeviceControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterFlipperLightDeviceControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterFlipperLightDeviceControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterFlipperLightDeviceControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
