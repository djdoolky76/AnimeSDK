#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EANKAFJCEEH;
namespace RPG::GameCore { class BattleInstance; }

#define ALGMPBLKIGI_NGIHBBMLPON_CTOR_OFFSET UNITYSDK_OFFSET(0x1555E4F0)

inline static constexpr unsigned int ALGMPBLKIGI_NGIHBBMLPON_TypeDefinitionIndex = 71877;

	class ALGMPBLKIGI_NGIHBBMLPON : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x10
		::EANKAFJCEEH* HLIIPKKCPOM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_NGIHBBMLPON_CTOR_OFFSET))(this);
		}

	};
