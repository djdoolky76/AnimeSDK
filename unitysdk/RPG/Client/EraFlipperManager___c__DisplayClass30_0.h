#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGDADKNPPOL;
namespace RPG::GameCore { class EraRegion; }

#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCE18D40)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS30_0___ONCURRENTREGIONENTER_B__0_OFFSET UNITYSDK_OFFSET(0xCE1ACE0)

namespace RPG::Client
{
	class EraFlipperManager___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::KGDADKNPPOL* region; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCurrentRegionEnter_b__0(::RPG::GameCore::EraRegion* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS30_0___ONCURRENTREGIONENTER_B__0_OFFSET))(this, a1);
		}

	};
}
