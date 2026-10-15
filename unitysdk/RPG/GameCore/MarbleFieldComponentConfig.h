#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleCoopBossBornPosition; }
namespace RPG::GameCore { class MarbleFieldComponentConfig; }

#define RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83D250)
#define RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83D260)
#define RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83D200)

namespace RPG::GameCore
{
	class MarbleFieldComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Single Length; // 0x10
		::System::Single Width; // 0x14
		::Il2CppArray<::System::UInt32>* BornPositionA; // 0x18
		::Il2CppArray<::System::UInt32>* BornPositionB; // 0x20
		::Il2CppArray<::System::UInt32>* BornPositionACoopBoss; // 0x28
		::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* BornPositionBCoopBoss; // 0x30
		::System::Boolean IsIce; // 0x38
		::System::Boolean OverrideSpeed; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single DivideSpeed; // 0x3C
		::System::Single LessDeceleration; // 0x40
		::System::Single Deceleration; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleFieldComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleFieldComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleFieldComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleFieldComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEFIELDCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
