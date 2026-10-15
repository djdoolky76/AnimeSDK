#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractWorkConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenBallFetchInteractWorkConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76A660)
#define RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76A670)
#define RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76A610)

namespace RPG::GameCore
{
	class HipplenBallFetchInteractWorkConfig : public ::RPG::GameCore::HipplenInteractWorkConfig
	{
	public:
		::RPG::MVector2 LimitScreenAspectY; // 0x20
		::RPG::MVector2 MinVelocity; // 0x28
		::RPG::MVector2 MaxVelocity; // 0x30
		::System::Single NavigatePathLenthLimit; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* OnBallThrowEffectPath; // 0x40
		::System::String* OnBallThrowAudioEventName; // 0x48
		::System::String* OnBallThrowEffectAnchor; // 0x50
		::System::String* OnBallDestoryEffectPath; // 0x58
		::System::String* LegColliderName; // 0x60
		::System::Int32 MinBallCollisionTimes; // 0x68
		::System::Int32 MaxBallCollisionTimes; // 0x6C
		::System::Single MinCollisionForce; // 0x70
		::System::Single MaxCollisionForce; // 0x74
		::System::Single CoolDown; // 0x78
		::System::Single SwitchTracingBallInterval; // 0x7C
		::System::Single TurnSpeedIncrementPerSecond; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenBallFetchInteractWorkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenBallFetchInteractWorkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenBallFetchInteractWorkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenBallFetchInteractWorkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
