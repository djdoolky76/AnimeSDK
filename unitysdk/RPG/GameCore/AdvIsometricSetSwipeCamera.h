#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvIsometricSetSwipeCamera; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3745E0)
#define RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3745F0)
#define RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3745B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricSetSwipeCamera_TypeDefinitionIndex = 22214;

	class AdvIsometricSetSwipeCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsActive; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* OffsetUp; // 0x20
		::RPG::GameCore::DynamicFloat* OffsetDown; // 0x28
		::RPG::GameCore::DynamicFloat* OffsetLeft; // 0x30
		::RPG::GameCore::DynamicFloat* OffsetRight; // 0x38
		::RPG::GameCore::DynamicFloat* RecoverTime; // 0x40
		::RPG::GameCore::DynamicFloat* JoystickFactor; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricSetSwipeCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricSetSwipeCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricSetSwipeCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricSetSwipeCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
