#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EANKAFJCEEH;
namespace RPG::GameCore { class BattleInstance; }

#define ALGMPBLKIGI_NGIHBBMLPON_CTOR_OFFSET UNITYSDK_OFFSET(0x15569C10)

	class ALGMPBLKIGI_NGIHBBMLPON : public ::System::Object
	{
	public:
		::EANKAFJCEEH* HLIIPKKCPOM; // 0x10
		::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_NGIHBBMLPON_CTOR_OFFSET))(this);
		}

	};
