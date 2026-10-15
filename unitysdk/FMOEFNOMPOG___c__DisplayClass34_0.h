#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMOEFNOMPOG;
namespace RPG::Client { class TriggerEffectParams; }

#define FMOEFNOMPOG___C__DISPLAYCLASS34_0_CTOR_OFFSET UNITYSDK_OFFSET(0x158626D0)
#define FMOEFNOMPOG___C__DISPLAYCLASS34_0___TRYAUTOREMOVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x15863000)

	class FMOEFNOMPOG___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::RPG::Client::TriggerEffectParams* effectParams; // 0x10
		::FMOEFNOMPOG* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG___C__DISPLAYCLASS34_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryAutoRemoveEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG___C__DISPLAYCLASS34_0___TRYAUTOREMOVEEFFECT_B__0_OFFSET))(this);
		}

	};
