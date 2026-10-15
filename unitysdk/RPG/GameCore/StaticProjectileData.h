#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StaticProjectileData; }

#define RPG_GAMECORE_STATICPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB200B0)
#define RPG_GAMECORE_STATICPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB200D0)
#define RPG_GAMECORE_STATICPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB20060)

namespace RPG::GameCore
{
	class StaticProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Boolean StaticProjectileCanPassAirWall; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Single StaticExtraRadius; // 0xBC
		::System::Boolean StaticProjectileKeepHigh; // 0xC0
		::System::Byte _padding1[0x3];
		::System::Single MaxLifeTime; // 0xC4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATICPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StaticProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StaticProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATICPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StaticProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StaticProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATICPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
