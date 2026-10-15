#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSurfaceConnectDirection.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimNavMapSurfaceConnectConfig; }

#define RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1620)
#define RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A1630)
#define RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A15F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimNavMapSurfaceConnectConfig_TypeDefinitionIndex = 18832;

	class FiveDimNavMapSurfaceConnectConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSurfaceConnect; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 ConnectEntityID; // 0x14
		::RPG::GameCore::FiveDimSurfaceConnectDirection Direction; // 0x18
		::System::Boolean HideWaypointInFace; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
