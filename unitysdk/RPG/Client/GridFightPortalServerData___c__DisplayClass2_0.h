#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOENFCDKGMJ;
namespace RPG::Client { class GridFightPortalData; }

#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1DFE80)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0xD1DFFA0)

namespace RPG::Client
{
	class GridFightPortalServerData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MOENFCDKGMJ* update; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Sync_b__0(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA___C__DISPLAYCLASS2_0__SYNC_B__0_OFFSET))(this, a1);
		}

	};
}
