#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCameraLookAheadConfig; }
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FIVEDIMCAMERALOOKAHEADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D686620)
#define RPG_GAMECORE_FIVEDIMCAMERALOOKAHEADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D686230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraLookAheadConfig_TypeDefinitionIndex = 18615;

	class FiveDimCameraLookAheadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MaxOffset; // 0x10
		::System::Single DampingXMove; // 0x14
		::System::Single DampingXStop; // 0x18
		::System::Single MaxOffsetTurnDelay; // 0x1C
		::System::Boolean HomingX; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single HomingDelay; // 0x24
		::System::Boolean UseOffsetYCurve; // 0x28
		::System::Byte _padding1[0x3];
		::System::Single OffsetUp; // 0x2C
		::System::Single OffsetDown; // 0x30
		::System::Single LookDownYSpeedThreshold; // 0x34
		::RPG::GameCore::FloatCurve* OffsetYCurve; // 0x38
		::System::Single MaxDampingSpeed; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERALOOKAHEADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCameraLookAheadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCameraLookAheadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERALOOKAHEADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
