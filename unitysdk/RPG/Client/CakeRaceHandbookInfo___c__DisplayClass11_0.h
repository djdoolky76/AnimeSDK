#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKCNOIGHOPM;
namespace RPG::Client { class CakeRaceHandbookCatItem; }

#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC91E0A0)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0___SYNCLIST_B__1_OFFSET UNITYSDK_OFFSET(0xC91E1D0)

namespace RPG::Client
{
	class CakeRaceHandbookInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::GKCNOIGHOPM* proto; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncList_b__1(::RPG::Client::CakeRaceHandbookCatItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C__DISPLAYCLASS11_0___SYNCLIST_B__1_OFFSET))(this, a1);
		}

	};
}
