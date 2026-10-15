#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LensDistortionCurveEffect; }
namespace System { class String; }

#define RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A3980)
#define RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A39A0)
#define RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A3930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LensDistortionCurveEffect_TypeDefinitionIndex = 20260;

	class LensDistortionCurveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single XMultiplier; // 0x1C
		::System::Single YMultiplier; // 0x20
		::System::Single Intensity; // 0x24
		::System::Single Scale; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* XCurvePath; // 0x30
		::System::String* YCurvePath; // 0x38
		::System::String* IntensityCurvePath; // 0x40
		::System::String* ScaleCurvePath; // 0x48
		::System::Single Duration; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LensDistortionCurveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LensDistortionCurveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LensDistortionCurveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LensDistortionCurveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LENSDISTORTIONCURVEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
