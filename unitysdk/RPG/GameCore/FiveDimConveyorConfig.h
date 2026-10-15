#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimConveyorConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D688800)
#define RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D688810)
#define RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6887D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConveyorConfig_TypeDefinitionIndex = 18597;

	class FiveDimConveyorConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsConveyor; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::System::String* ActiveRIState; // 0x30
		::RPG::GameCore::FiveDimOrthoDirection Direction; // 0x38
		::System::Byte _padding1[0x4];
		::System::String* PositiveDirectionPath; // 0x40
		::System::String* NegativeDirectionPath; // 0x48
		::System::Boolean OverrideSpeed; // 0x50
		::System::Byte _padding2[0x3];
		::System::Single HorizontalSpeed; // 0x54
		::System::Single VerticalSpeed; // 0x58
		::System::Boolean SendEventOnInit; // 0x5C
		::System::Byte _padding3[0x3];
		::RPG::GameCore::LittleGameEvent* OnConveyor; // 0x60
		::RPG::GameCore::LittleGameEvent* LeaveConveyor; // 0x68
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x70
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimConveyorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimConveyorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimConveyorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimConveyorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
