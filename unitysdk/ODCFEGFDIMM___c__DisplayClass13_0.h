#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define ODCFEGFDIMM___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBD889B0)
#define ODCFEGFDIMM___C__DISPLAYCLASS13_0___INITGAME_B__1_OFFSET UNITYSDK_OFFSET(0xBD88DA0)

inline static constexpr unsigned int ODCFEGFDIMM___c__DisplayClass13_0_TypeDefinitionIndex = 61153;

	class ODCFEGFDIMM___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* resolve; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void __InitGame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___C__DISPLAYCLASS13_0___INITGAME_B__1_OFFSET))(this);
		}

	};
