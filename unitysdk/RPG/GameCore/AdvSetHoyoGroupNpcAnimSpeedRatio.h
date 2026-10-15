#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetHoyoGroupNpcAnimSpeedRatio; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AFCC0)
#define RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AFCD0)
#define RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AFC90)

namespace RPG::GameCore
{
	class AdvSetHoyoGroupNpcAnimSpeedRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* AnimSpeedRatio; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETHOYOGROUPNPCANIMSPEEDRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
