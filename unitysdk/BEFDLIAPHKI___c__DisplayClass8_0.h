#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPEGLPPPAJJ;
class LKJOIAFONIL;

#define BEFDLIAPHKI___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16306750)
#define BEFDLIAPHKI___C__DISPLAYCLASS8_0___TRYADDSELECTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x163067B0)

inline static constexpr unsigned int BEFDLIAPHKI___c__DisplayClass8_0_TypeDefinitionIndex = 67061;

	class BEFDLIAPHKI___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::DPEGLPPPAJJ* actionItem; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFDLIAPHKI___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TryAddSelectAction_b__0(::LKJOIAFONIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKJOIAFONIL*))((::PBYTE)hIl2Cpp + BEFDLIAPHKI___C__DISPLAYCLASS8_0___TRYADDSELECTACTION_B__0_OFFSET))(this, a1);
		}

	};
