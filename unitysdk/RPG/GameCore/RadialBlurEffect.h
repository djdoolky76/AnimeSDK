#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RadialBlurEffect; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RADIALBLUREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D939130)
#define RPG_GAMECORE_RADIALBLUREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D939190)
#define RPG_GAMECORE_RADIALBLUREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9390B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RadialBlurEffect_TypeDefinitionIndex = 20258;

	class RadialBlurEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean Active; // 0x28
		::System::Byte _padding1[0x3];
		::System::Single Duration; // 0x2C
		::System::Single BlurX; // 0x30
		::System::Single BlurY; // 0x34
		::System::Single BlurRadius; // 0x38
		::System::Int32 Iteration; // 0x3C
		::System::Single BlurStart; // 0x40
		::System::Single BlurFeather; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLUREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RadialBlurEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RadialBlurEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLUREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RadialBlurEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RadialBlurEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RADIALBLUREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
