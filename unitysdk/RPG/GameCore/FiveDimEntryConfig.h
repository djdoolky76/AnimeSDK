#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEntryConfig; }
namespace RPG::GameCore { class FiveDimOneWayEntryConfig; }

#define RPG_GAMECORE_FIVEDIMENTRYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E420)
#define RPG_GAMECORE_FIVEDIMENTRYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68E430)
#define RPG_GAMECORE_FIVEDIMENTRYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68E3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntryConfig_TypeDefinitionIndex = 18538;

	class FiveDimEntryConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEnter; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimOneWayEntryConfig* EnterConfig; // 0x18
		::System::Boolean IsExit; // 0x20
		::System::Byte _padding1[0x7];
		::RPG::GameCore::FiveDimOneWayEntryConfig* ExitConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTRYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTRYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTRYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
