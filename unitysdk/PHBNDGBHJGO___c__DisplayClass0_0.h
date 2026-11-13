#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System::Diagnostics { class Stopwatch; }

#define PHBNDGBHJGO___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16DAC800)
#define PHBNDGBHJGO___C__DISPLAYCLASS0_0__ONINIT_B__0_OFFSET UNITYSDK_OFFSET(0x16DAC820)
#define PHBNDGBHJGO___C__DISPLAYCLASS0_0__ONINIT_B__1_OFFSET UNITYSDK_OFFSET(0x16DAC8B0)

inline static constexpr unsigned int PHBNDGBHJGO___c__DisplayClass0_0_TypeDefinitionIndex = 62492;

	class PHBNDGBHJGO___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::Diagnostics::Stopwatch* stopwatch; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBNDGBHJGO___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBNDGBHJGO___C__DISPLAYCLASS0_0__ONINIT_B__0_OFFSET))(this);
		}

		::System::Void _OnInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBNDGBHJGO___C__DISPLAYCLASS0_0__ONINIT_B__1_OFFSET))(this);
		}

	};
