#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEBPFBNCALB;
namespace System { class Action; }

#define JEBPFBNCALB___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5358B0)
#define JEBPFBNCALB___C__DISPLAYCLASS7_0__SUBSCRIBE_B__0_OFFSET UNITYSDK_OFFSET(0x1C5358C0)

inline static constexpr unsigned int JEBPFBNCALB___c__DisplayClass7_0_TypeDefinitionIndex = 41841;

	class JEBPFBNCALB___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* unsubscribe; // 0x10
		::JEBPFBNCALB* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPFBNCALB___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _Subscribe_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPFBNCALB___C__DISPLAYCLASS7_0__SUBSCRIBE_B__0_OFFSET))(this);
		}

	};
