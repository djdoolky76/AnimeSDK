#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBNGHMHHHLL;
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD27B370)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS51_0___SYNCTRAITS_B__0_OFFSET UNITYSDK_OFFSET(0xD27CDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass51_0_TypeDefinitionIndex = 65218;

	class GridFightSettleRecord___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::FBNGHMHHHLL* trait; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTraits_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS51_0___SYNCTRAITS_B__0_OFFSET))(this, a1);
		}

	};
}
