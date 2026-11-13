#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEKCPJDNBBA;
namespace RPG::Client { class GridFightRoleConfig; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS81_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E167080)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS81_0___TRYGETLOCKSTARUPFIRSTPARAM_B__0_OFFSET UNITYSDK_OFFSET(0x1E16AC40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass81_0_TypeDefinitionIndex = 66977;

	class GridFightSpotLightManager___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRoleConfig* roleConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS81_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TryGetLockStarUpFirstParam_b__0(::IEKCPJDNBBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEKCPJDNBBA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS81_0___TRYGETLOCKSTARUPFIRSTPARAM_B__0_OFFSET))(this, a1);
		}

	};
}
