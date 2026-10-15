#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class ProjectileDataList; }

#define RPG_GAMECORE_PROJECTILEDATALIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D944920)
#define RPG_GAMECORE_PROJECTILEDATALIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9447A0)

namespace RPG::GameCore
{
	class ProjectileDataList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ProjectileData* Projectile; // 0x18
		::System::Single Interval; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEDATALIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ProjectileDataList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ProjectileDataList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEDATALIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
