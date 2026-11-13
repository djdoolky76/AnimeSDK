#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
class MNCOPNHONHO;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }

#define MNCOPNHONHO___C__DISPLAYCLASS259_0_CTOR_OFFSET UNITYSDK_OFFSET(0x189263F0)
#define MNCOPNHONHO___C__DISPLAYCLASS259_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x1892EE00)
#define MNCOPNHONHO___C__DISPLAYCLASS259_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x1892EE80)

inline static constexpr unsigned int MNCOPNHONHO___c__DisplayClass259_0_TypeDefinitionIndex = 79028;

	class MNCOPNHONHO___c__DisplayClass259_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimTriggerEventEmitterConfig* emitterConfig; // 0x10
		::MNCOPNHONHO* __4__this; // 0x18
		::INMMPMDELKE* propEntity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS259_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateTriggerEventEmitterTrigger_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS259_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__0_OFFSET))(this, a1);
		}

		::System::Void __CreateTriggerEventEmitterTrigger_b__1(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS259_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__1_OFFSET))(this, a1);
		}

	};
