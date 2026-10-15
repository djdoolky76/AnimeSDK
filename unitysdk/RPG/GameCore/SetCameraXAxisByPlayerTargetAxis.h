#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCameraXAxisByPlayerTargetAxis; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6BE70)
#define RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6BE80)
#define RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6BE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCameraXAxisByPlayerTargetAxis_TypeDefinitionIndex = 20831;

	class SetCameraXAxisByPlayerTargetAxis : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Single XAxisOffset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAXAXISBYPLAYERTARGETAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
