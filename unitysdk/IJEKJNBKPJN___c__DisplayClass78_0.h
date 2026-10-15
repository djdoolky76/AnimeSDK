#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJEKJNBKPJN;
class KLKMCNOECAL;
namespace RPG::Client { class IAssetOperation; }
namespace System { class Action; }

#define IJEKJNBKPJN___C__DISPLAYCLASS78_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16464180)
#define IJEKJNBKPJN___C__DISPLAYCLASS78_0__ASYNCLOADGAMEOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x16465B80)

	class IJEKJNBKPJN___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::System::Action* onLoadAction; // 0x10
		::IJEKJNBKPJN* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN___C__DISPLAYCLASS78_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AsyncLoadGameObject_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN___C__DISPLAYCLASS78_0__ASYNCLOADGAMEOBJECT_B__0_OFFSET))(this, a1);
		}

	};
