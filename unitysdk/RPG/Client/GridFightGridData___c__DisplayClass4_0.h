#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"
#include "unitysdk/System/Object.h"
class EBMFAGKJIIM;

#define RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD191530)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__GETEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD191B70)

namespace RPG::Client
{
	class GridFightGridData___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGridEffectType type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEffect_b__0(::EBMFAGKJIIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBMFAGKJIIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA___C__DISPLAYCLASS4_0__GETEFFECT_B__0_OFFSET))(this, a1);
		}

	};
}
