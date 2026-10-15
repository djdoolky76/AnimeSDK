#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesGameConfig; }
namespace RPG::GameCore { class ChenLingFesVCameraConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58DC60)
#define RPG_GAMECORE_CHENLINGFESGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D58DC70)
#define RPG_GAMECORE_CHENLINGFESGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D58DC30)

namespace RPG::GameCore
{
	class ChenLingFesGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Single VisitorJumpDuration; // 0x18
		::System::UInt32 SummonVisitorID; // 0x1C
		::System::UInt32 LoopLevelID; // 0x20
		::System::UInt32 FeverActiveValue; // 0x24
		::Il2CppArray<::System::UInt32>* FeverAddValue; // 0x28
		::System::UInt32 FeverLevelAbilityID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FloatCurve* ChenLingMoveCurve; // 0x38
		::System::Boolean AutoAbsorbSwitch; // 0x40
		::System::Byte _padding1[0x7];
		::RPG::GameCore::ChenLingFesVCameraConfig* BuildCameraConfig16x9; // 0x48
		::RPG::GameCore::ChenLingFesVCameraConfig* GameCameraConfig16x9; // 0x50
		::RPG::GameCore::ChenLingFesVCameraConfig* BuildCameraConfig4x3; // 0x58
		::RPG::GameCore::ChenLingFesVCameraConfig* GameCameraConfig4x3; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
