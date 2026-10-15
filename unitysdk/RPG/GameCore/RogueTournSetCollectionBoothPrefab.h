#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RogueTournSetCollectionBoothPrefab; }

#define RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA413B0)
#define RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA413C0)
#define RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA41380)

namespace RPG::GameCore
{
	class RogueTournSetCollectionBoothPrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
