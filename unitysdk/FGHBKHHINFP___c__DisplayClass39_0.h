#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGHBKHHINFP;
class FGHBKHHINFP_INIEEEKLKEA;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::Promises { class Promise; }

#define FGHBKHHINFP___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15762040)
#define FGHBKHHINFP___C__DISPLAYCLASS39_0__ASYNCLOADGAMEOBJECTWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x157622B0)

	class FGHBKHHINFP___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::FGHBKHHINFP_INIEEEKLKEA* onLoadAction; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::FGHBKHHINFP* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHBKHHINFP___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AsyncLoadGameobjectWithPromise_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + FGHBKHHINFP___C__DISPLAYCLASS39_0__ASYNCLOADGAMEOBJECTWITHPROMISE_B__0_OFFSET))(this, a1);
		}

	};
