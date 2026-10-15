#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCELNDMELEI;

#define KOFIMLBOMIG___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB58E580)
#define KOFIMLBOMIG___C__DISPLAYCLASS14_0__REMOVEELATIONABILITYCHANGEPARAM_B__0_OFFSET UNITYSDK_OFFSET(0xB58E750)

inline static constexpr unsigned int KOFIMLBOMIG___c__DisplayClass14_0_TypeDefinitionIndex = 55957;

	class KOFIMLBOMIG___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::UInt32 characterID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveElationAbilityChangeParam_b__0(::OCELNDMELEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCELNDMELEI*))((::PBYTE)hIl2Cpp + KOFIMLBOMIG___C__DISPLAYCLASS14_0__REMOVEELATIONABILITYCHANGEPARAM_B__0_OFFSET))(this, a1);
		}

	};
