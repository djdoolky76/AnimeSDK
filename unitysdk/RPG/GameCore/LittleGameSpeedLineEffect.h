#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpeedLineEffectMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSpeedLineEffect; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E6660)
#define RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E66A0)
#define RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E65F0)

namespace RPG::GameCore
{
	class LittleGameSpeedLineEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::SpeedLineEffectMode Mode; // 0x1C
		::System::Boolean Active; // 0x20
		::System::Byte _padding1[0x3];
		::System::Single Speed; // 0x24
		::System::Boolean UseTwoTone; // 0x28
		::System::Byte _padding2[0x3];
		::System::Single WhitePercent; // 0x2C
		::System::Single Divide; // 0x30
		::System::Single Offset; // 0x34
		::System::Single Start; // 0x38
		::System::Single End; // 0x3C
		::System::Single Brightness; // 0x40
		::System::Single Density; // 0x44
		::System::Single Rotation; // 0x48
		::System::Single PosX; // 0x4C
		::System::Single PosY; // 0x50
		::System::Byte _padding3[0x4];
		::System::String* SpeedlineSeedPath; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSpeedLineEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSpeedLineEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSpeedLineEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSpeedLineEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESPEEDLINEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
