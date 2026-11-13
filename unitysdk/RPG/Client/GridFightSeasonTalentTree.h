#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentTree.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"
class FMNKKAMOHEE;

#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FA520)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1D4F9A80)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_TALENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D4F9A30)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_RESET_OFFSET UNITYSDK_OFFSET(0x1D4FA460)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_SYNC_OFFSET UNITYSDK_OFFSET(0x1D4FA2F0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_UNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0x1D4FA390)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE__INIT_OFFSET UNITYSDK_OFFSET(0x1D4F9BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTalentTree_TypeDefinitionIndex = 67013;

	class GridFightSeasonTalentTree : public ::RPG::Client::GridFightTalentTree
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightTalentType get_TalentType()
		{
			return ((::RPG::Client::GridFightTalentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_TALENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE__INIT_OFFSET))(this);
		}

		::System::Void Sync(::FMNKKAMOHEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMNKKAMOHEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_SYNC_OFFSET))(this, a1);
		}

		::System::Void UnlockTalent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_UNLOCKTALENT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTTREE_RESET_OFFSET))(this);
		}

	};
}
