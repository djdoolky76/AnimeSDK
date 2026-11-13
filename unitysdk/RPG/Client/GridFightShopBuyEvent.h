#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1587E0)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E1587F0)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1587D0)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_BONUS_OFFSET UNITYSDK_OFFSET(0x1E158820)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_BUYINDEX_OFFSET UNITYSDK_OFFSET(0x1E158830)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_PROJECTION_OFFSET UNITYSDK_OFFSET(0x1E158810)
#define RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1E158800)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopBuyEvent_TypeDefinitionIndex = 66942;

	class GridFightShopBuyEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* _Bonus_k__BackingField; // 0x10
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::RPG::Client::GridFightProjection* _Projection_k__BackingField; // 0x20
		::System::Int32 _BuyIndex_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::GridFightProjection* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightProjection*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::RPG::Client::GridFightBonusResultData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_CTOR_2_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_ROLE_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* get_Projection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_PROJECTION_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusResultData* get_Bonus()
		{
			return ((::RPG::Client::GridFightBonusResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_BONUS_OFFSET))(this);
		}

		::System::Int32 get_BuyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBUYEVENT_GET_BUYINDEX_OFFSET))(this);
		}

	};
}
