#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RPGColorGradingCurveEffect; }
namespace System { class String; }

#define RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9658E0)
#define RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D965900)
#define RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D965890)

namespace RPG::GameCore
{
	class RPGColorGradingCurveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* CustomLUT; // 0x20
		::System::Single TransitionDuration; // 0x28
		::System::Single CenterX; // 0x2C
		::System::Single CenterY; // 0x30
		::System::Single CustomLUTIntensityBegin; // 0x34
		::System::Single CustomLUTIntensityEnd; // 0x38
		::System::Single StartRadiusBegin; // 0x3C
		::System::Single StartRadiusEnd; // 0x40
		::System::Single BlendRadiusBegin; // 0x44
		::System::Single BlendRadiusEnd; // 0x48
		::System::Single Roundness; // 0x4C
		::System::String* CurveName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RPGColorGradingCurveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RPGColorGradingCurveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RPGColorGradingCurveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RPGColorGradingCurveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
