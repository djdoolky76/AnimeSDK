#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKNHENOJFIG;

#define JKNHENOJFIG___C__DISPLAYCLASS40_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB228880)
#define JKNHENOJFIG___C__DISPLAYCLASS40_0___ONAGENDACOMPLETED_B__0_OFFSET UNITYSDK_OFFSET(0xB2293F0)

inline static constexpr unsigned int JKNHENOJFIG___c__DisplayClass40_0_TypeDefinitionIndex = 81713;

	class JKNHENOJFIG___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::JKNHENOJFIG* __4__this; // 0x10
		::System::UInt32 newDriverID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C__DISPLAYCLASS40_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnAgendaCompleted_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C__DISPLAYCLASS40_0___ONAGENDACOMPLETED_B__0_OFFSET))(this);
		}

	};
