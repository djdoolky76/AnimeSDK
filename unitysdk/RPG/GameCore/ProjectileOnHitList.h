#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ProjectileOnHitList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROJECTILEONHITLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D944AA0)
#define RPG_GAMECORE_PROJECTILEONHITLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D944930)

namespace RPG::GameCore
{
	class ProjectileOnHitList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEONHITLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ProjectileOnHitList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ProjectileOnHitList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEONHITLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
