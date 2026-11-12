#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPreparationPendingAction.h"
namespace RPG::Client { class GridFightJadeShopEffect; }

#define RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDBDA030)
#define RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION_GET_NEEDSWAITEFFECTBEFORESTART_OFFSET UNITYSDK_OFFSET(0xDBDC5D0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION_GET_TRAITEFFECTID_OFFSET UNITYSDK_OFFSET(0xDBDC580)
#define RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xDBDC500)
#define RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0xDBDC750)
#define RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION__ONSHOPCLOSED_OFFSET UNITYSDK_OFFSET(0xDBDC880)
#define RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDBDC610)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightJadeShopPendingAction_TypeDefinitionIndex = 67256;

	class GridFightJadeShopPendingAction : public ::RPG::Client::GridFightPreparationPendingAction
	{
	public:
		::RPG::Client::GridFightJadeShopEffect* _Effect; // 0x20
		::System::Void _ctor(::RPG::Client::GridFightJadeShopEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightJadeShopEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION_GET_TRAITID_OFFSET))(this);
		}

		::System::UInt32 get_TraitEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION_GET_TRAITEFFECTID_OFFSET))(this);
		}

		::System::Boolean get_NeedsWaitEffectBeforeStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION_GET_NEEDSWAITEFFECTBEFORESTART_OFFSET))(this);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION__ONSTART_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION__ONFINISH_OFFSET))(this);
		}

		::System::Void _OnShopClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPPENDINGACTION__ONSHOPCLOSED_OFFSET))(this);
		}

	};
}
