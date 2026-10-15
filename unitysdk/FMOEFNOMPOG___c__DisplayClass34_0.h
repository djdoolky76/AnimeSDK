#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMOEFNOMPOG;
namespace RPG::Client { class TriggerEffectParams; }

#define FMOEFNOMPOG___C__DISPLAYCLASS34_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15856940)
#define FMOEFNOMPOG___C__DISPLAYCLASS34_0___TRYAUTOREMOVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x15857270)

inline static constexpr unsigned int FMOEFNOMPOG___c__DisplayClass34_0_TypeDefinitionIndex = 78032;

	class FMOEFNOMPOG___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::FMOEFNOMPOG* __4__this; // 0x10
		::RPG::Client::TriggerEffectParams* effectParams; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG___C__DISPLAYCLASS34_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryAutoRemoveEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG___C__DISPLAYCLASS34_0___TRYAUTOREMOVEEFFECT_B__0_OFFSET))(this);
		}

	};
