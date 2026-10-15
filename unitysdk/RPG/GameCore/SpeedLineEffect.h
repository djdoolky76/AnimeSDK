#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpeedLineEffectMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpeedLineEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SPEEDLINEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB01330)
#define RPG_GAMECORE_SPEEDLINEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB013B0)
#define RPG_GAMECORE_SPEEDLINEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB01290)

namespace RPG::GameCore
{
	class SpeedLineEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SpeedLineEffectMode Mode; // 0x28
		::System::Boolean Active; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single Speed; // 0x30
		::System::Boolean UseTwoTone; // 0x34
		::System::Byte _padding2[0x3];
		::System::Single WhitePercent; // 0x38
		::System::Single Divide; // 0x3C
		::System::Single Offset; // 0x40
		::System::Single Start; // 0x44
		::System::Single End; // 0x48
		::System::Single Brightness; // 0x4C
		::System::Single Density; // 0x50
		::System::Single Rotation; // 0x54
		::System::Single PosX; // 0x58
		::System::Single PosY; // 0x5C
		::System::String* SpeedlineSeedPath; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPEEDLINEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpeedLineEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpeedLineEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPEEDLINEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpeedLineEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpeedLineEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPEEDLINEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
