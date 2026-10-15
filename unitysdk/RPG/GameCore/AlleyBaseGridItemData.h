#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyBaseGridItemData; }

#define RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DFB80)
#define RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3DFB90)
#define RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3DF8B0)

namespace RPG::GameCore
{
	class AlleyBaseGridItemData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PosX; // 0x10
		::System::UInt32 PosY; // 0x14
		::System::UInt32 GridID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyBaseGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyBaseGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyBaseGridItemData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyBaseGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYBASEGRIDITEMDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
