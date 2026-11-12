#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightMonsterStageData.h"
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightMonsterCampStageData; }

#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDBEE500)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDC074F0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDC07580)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterCampStageData_TypeDefinitionIndex = 66684;

	class GridFightMonsterCampStageData : public ::RPG::Client::GridFightMonsterStageData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightMonsterCampStageData* Create(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::RPG::Client::GridFightMonsterCampStageData*(*)(::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPSTAGEDATA_SYNC_OFFSET))(this, a1);
		}

	};
}
