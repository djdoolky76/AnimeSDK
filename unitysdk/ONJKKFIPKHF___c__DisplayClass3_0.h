#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionBase; }

#define ONJKKFIPKHF___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E3F10)
#define ONJKKFIPKHF___C__DISPLAYCLASS3_0__TICK_B__0_OFFSET UNITYSDK_OFFSET(0x1C7E40E0)

	class ONJKKFIPKHF___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceActionBase* action; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJKKFIPKHF___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _Tick_b__0(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + ONJKKFIPKHF___C__DISPLAYCLASS3_0__TICK_B__0_OFFSET))(this, a1);
		}

	};
