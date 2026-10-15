#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDestructiblePropConfig; }
namespace RPG::GameCore { class FiveDimEntityShakeConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B8E30)
#define RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B8E40)
#define RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B8E00)

namespace RPG::GameCore
{
	class FiveDimDestructiblePropConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsDestructible; // 0x10
		::System::Boolean DisableColliderOnDestruct; // 0x11
		::System::Boolean DisableRenderOnDestruct; // 0x12
		::System::Byte _padding0[0x5];
		::System::String* RageRIStateName; // 0x18
		::RPG::GameCore::FiveDimEntityShakeConfig* ShakeConfig; // 0x20
		::System::String* DestructEffectPath; // 0x28
		::System::String* PlaceholderRIStateName; // 0x30
		::System::Single DestructDelay; // 0x38
		::System::Boolean AutoRebuild; // 0x3C
		::System::Byte _padding1[0x3];
		::System::Single RebuildDelay; // 0x40
		::System::Byte _padding2[0x4];
		::RPG::GameCore::LittleGameEvent* OnStartDestruct; // 0x48
		::RPG::GameCore::LittleGameEvent* OnDestruct; // 0x50
		::RPG::GameCore::LittleGameEvent* OnRebuild; // 0x58
		::RPG::GameCore::LittleGameEvent* OnRebuildBlock; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestructiblePropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestructiblePropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestructiblePropConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestructiblePropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTIBLEPROPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
