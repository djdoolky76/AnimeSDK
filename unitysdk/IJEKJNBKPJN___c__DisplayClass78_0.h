#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJEKJNBKPJN;
class KLKMCNOECAL;
namespace RPG::Client { class IAssetOperation; }
namespace System { template <typename T> class Action_1; }

#define IJEKJNBKPJN___C__DISPLAYCLASS78_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16456C70)
#define IJEKJNBKPJN___C__DISPLAYCLASS78_0__ASYNCLOADGAMEOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x16458680)

inline static constexpr unsigned int IJEKJNBKPJN___c__DisplayClass78_0_TypeDefinitionIndex = 57150;

	class IJEKJNBKPJN___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::System::Action_1<::KLKMCNOECAL*>* onLoadAction; // 0x10
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
