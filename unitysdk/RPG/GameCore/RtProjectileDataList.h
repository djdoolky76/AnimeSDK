#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class RtProjectileDataList; }

#define RPG_GAMECORE_RTPROJECTILEDATALIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA34F60)
#define RPG_GAMECORE_RTPROJECTILEDATALIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA34DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtProjectileDataList_TypeDefinitionIndex = 24139;

	class RtProjectileDataList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ProjectileData* Projectile; // 0x18
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x20
		::RPG::GameCore::FixPoint Interval; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROJECTILEDATALIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtProjectileDataList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtProjectileDataList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROJECTILEDATALIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
