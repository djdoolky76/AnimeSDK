#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFEPHMALKDK;
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }

#define JIGBEFNLENA___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1F3600)
#define JIGBEFNLENA___C__DISPLAYCLASS7_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0xB1FA250)

	class JIGBEFNLENA___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::DFEPHMALKDK* history; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGBEFNLENA___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Sync_b__0(::RPG::Client::PlanetFesTradingCardApplyItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + JIGBEFNLENA___C__DISPLAYCLASS7_0__SYNC_B__0_OFFSET))(this, a1);
		}

	};
