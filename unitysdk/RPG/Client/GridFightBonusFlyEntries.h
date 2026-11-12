#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightBonusFlyEntries; }
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightConsumableItemFlyEntry; }
namespace RPG::Client { class GridFightEquipItemFlyEntry; }
namespace RPG::Client { class GridFightForgeItemFlyEntry; }
namespace RPG::Client { class GridFightOrbFlyEntry; }
namespace RPG::Client { class GridFightPresentFlyEntry; }
namespace RPG::Client { class GridFightRoleFlyEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSFLYENTRIES_CREATEUNIFORM_OFFSET UNITYSDK_OFFSET(0xDA856A0)
#define RPG_CLIENT_GRIDFIGHTBONUSFLYENTRIES_CTOR_OFFSET UNITYSDK_OFFSET(0xDA86220)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusFlyEntries_TypeDefinitionIndex = 65882;

	class GridFightBonusFlyEntries : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CoinStartList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemFlyEntry*>* EquipList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeItemFlyEntry*>* ForgeList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemFlyEntry*>* ConsumableList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPresentFlyEntry*>* PresentList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbFlyEntry*>* OrbList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleFlyEntry*>* RoleList; // 0x40
		::UnityEngine::Vector3 FreeRefreshStartPos; // 0x48
		::UnityEngine::Vector3 SpotLightReplaceCntStartPos; // 0x54
		::UnityEngine::Vector3 ExpStartPos; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSFLYENTRIES_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightBonusFlyEntries* CreateUniform(::RPG::Client::GridFightBonusResultData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::GridFightBonusFlyEntries*(*)(::RPG::Client::GridFightBonusResultData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSFLYENTRIES_CREATEUNIFORM_OFFSET))(a1, a2);
		}

	};
}
