#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RadialBlurCurveEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_RADIALBLURCURVEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9665A0)
#define RPG_GAMECORE_RADIALBLURCURVEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D966610)
#define RPG_GAMECORE_RADIALBLURCURVEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D966510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RadialBlurCurveEffect_TypeDefinitionIndex = 20259;

	class RadialBlurCurveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single BlurX; // 0x28
		::System::Single BlurY; // 0x2C
		::System::Single BlurRadius; // 0x30
		::System::Int32 Iteration; // 0x34
		::System::Single BlurStart; // 0x38
		::System::Single BlurFeather; // 0x3C
		::System::Boolean EnableDirectionBlur; // 0x40
		::System::Byte _padding1[0x3];
		::System::Single Duration; // 0x44
		::System::String* CurveName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLURCURVEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RadialBlurCurveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RadialBlurCurveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLURCURVEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RadialBlurCurveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RadialBlurCurveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLURCURVEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
