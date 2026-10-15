#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParabolaProjectileData; }

#define RPG_GAMECORE_PARABOLAPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D8410)
#define RPG_GAMECORE_PARABOLAPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8D84C0)
#define RPG_GAMECORE_PARABOLAPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EC980)

namespace RPG::GameCore
{
	class ParabolaProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single ParabolaHeightRatio; // 0xB8
		::System::Single ParabolaRoll; // 0xBC
		::System::Boolean ParabolaUseWorldSpaceUp; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARABOLAPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParabolaProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParabolaProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARABOLAPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParabolaProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParabolaProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARABOLAPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
