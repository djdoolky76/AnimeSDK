#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class DOHPLIKIMDC;
class LJFHKAJPFNE;
namespace RPG::Client { class MonoEffect; }

#define LJFHKAJPFNE___C__DISPLAYCLASS70_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB711BD0)
#define LJFHKAJPFNE___C__DISPLAYCLASS70_0__PRELOADBATTLEAREA_B__0_OFFSET UNITYSDK_OFFSET(0xB711BE0)

inline static constexpr unsigned int LJFHKAJPFNE___c__DisplayClass70_0_TypeDefinitionIndex = 73863;

	class LJFHKAJPFNE___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::DOHPLIKIMDC* ba; // 0x10
		::LJFHKAJPFNE* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFHKAJPFNE___C__DISPLAYCLASS70_0_CTOR_OFFSET))(this);
		}

		::System::Void _PreloadBattleArea_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + LJFHKAJPFNE___C__DISPLAYCLASS70_0__PRELOADBATTLEAREA_B__0_OFFSET))(this, a1, a2);
		}

	};
