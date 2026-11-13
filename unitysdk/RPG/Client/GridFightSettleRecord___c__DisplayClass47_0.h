#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBNGHMHHHLL;
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS47_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1568B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS47_0___SYNCTEAM_B__0_OFFSET UNITYSDK_OFFSET(0x1E1568C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass47_0_TypeDefinitionIndex = 66920;

	class GridFightSettleRecord___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* trait; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS47_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__0(::FBNGHMHHHLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBNGHMHHHLL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS47_0___SYNCTEAM_B__0_OFFSET))(this, a1);
		}

	};
}
