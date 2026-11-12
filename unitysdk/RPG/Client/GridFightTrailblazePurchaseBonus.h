#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrailblazeEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB7E90)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_GET_BONUSROLE_OFFSET UNITYSDK_OFFSET(0xDCBB9F0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_GET_COSTEDCOIN_OFFSET UNITYSDK_OFFSET(0xDCBBA10)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_GET_COSTEDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xDCBBAA0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0xDCBBB30)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_SET_BONUSROLE_OFFSET UNITYSDK_OFFSET(0xDCBBA00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazePurchaseBonus_TypeDefinitionIndex = 67292;

	class GridFightTrailblazePurchaseBonus : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _BonusRole_k__BackingField; // 0x10
		::RPG::Client::GridFightTrailblazeEffect* _Effect; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTrailblazeEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrailblazeEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_BonusRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_GET_BONUSROLE_OFFSET))(this);
		}

		::System::Void set_BonusRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_SET_BONUSROLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CostedCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_GET_COSTEDCOIN_OFFSET))(this);
		}

		::System::UInt32 get_CostedThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_GET_COSTEDTHRESHOLD_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEPURCHASEBONUS_GET_ISCOMPLETED_OFFSET))(this);
		}

	};
}
