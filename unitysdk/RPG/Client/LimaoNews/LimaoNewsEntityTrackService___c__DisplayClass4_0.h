#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALOHJILIGNK;
namespace RPG::Client::LimaoNews { class LimaoNewsEntityTrackService; }
namespace RPG::Client::NavMap { class ICartography; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD3A6780)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS4_0___OPENTRACKMAPPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xD3A7E10)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsEntityTrackService___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsEntityTrackService* __4__this; // 0x10
		::ALOHJILIGNK* trackData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __OpenTrackMapPage_b__0(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSENTITYTRACKSERVICE___C__DISPLAYCLASS4_0___OPENTRACKMAPPAGE_B__0_OFFSET))(this, a1);
		}

	};
}
