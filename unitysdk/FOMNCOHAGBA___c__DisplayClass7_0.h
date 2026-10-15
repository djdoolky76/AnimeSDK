#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOMNCOHAGBA;
namespace System { class Action; }

#define FOMNCOHAGBA___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x158F2610)
#define FOMNCOHAGBA___C__DISPLAYCLASS7_0__EXIT_B__0_OFFSET UNITYSDK_OFFSET(0x158F30B0)

inline static constexpr unsigned int FOMNCOHAGBA___c__DisplayClass7_0_TypeDefinitionIndex = 80229;

	class FOMNCOHAGBA___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* onCompleted; // 0x10
		::FOMNCOHAGBA* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNCOHAGBA___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _Exit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNCOHAGBA___C__DISPLAYCLASS7_0__EXIT_B__0_OFFSET))(this);
		}

	};
