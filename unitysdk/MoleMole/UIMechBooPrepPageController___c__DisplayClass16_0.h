#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IOMOMHHNBNC;

#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17967210)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__GOTOSCRIPT_B__0_OFFSET UNITYSDK_OFFSET(0x17967220)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepPageController___c__DisplayClass16_0_TypeDefinitionIndex = 43050;

	class UIMechBooPrepPageController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Int32 scriptID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoScript_b__0(::IOMOMHHNBNC* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::IOMOMHHNBNC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__GOTOSCRIPT_B__0_OFFSET))(this, rsp);
		}
	};
}
