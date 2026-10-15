#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFMDPNPMFCE;
namespace System { class Action; }

#define OFMDPNPMFCE___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57A9B0)
#define OFMDPNPMFCE___C__DISPLAYCLASS4_0___SUBSCRIBE_B__0_OFFSET UNITYSDK_OFFSET(0x1C57AB70)

inline static constexpr unsigned int OFMDPNPMFCE___c__DisplayClass4_0_TypeDefinitionIndex = 41858;

	class OFMDPNPMFCE___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::OFMDPNPMFCE* __4__this; // 0x10
		::System::Action* unregisterFromSubject; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDPNPMFCE___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __Subscribe_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDPNPMFCE___C__DISPLAYCLASS4_0___SUBSCRIBE_B__0_OFFSET))(this);
		}

	};
