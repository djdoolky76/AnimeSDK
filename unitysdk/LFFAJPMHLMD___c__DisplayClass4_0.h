#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBHMKEHIDCA;

#define LFFAJPMHLMD___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC85DE0)
#define LFFAJPMHLMD___C__DISPLAYCLASS4_0___ONTICKIMPLEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1EC864F0)

inline static constexpr unsigned int LFFAJPMHLMD___c__DisplayClass4_0_TypeDefinitionIndex = 44204;

	class LFFAJPMHLMD___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Single deltaTime; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnTickImplement_b__0(::CBHMKEHIDCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBHMKEHIDCA*))((::PBYTE)hIl2Cpp + LFFAJPMHLMD___C__DISPLAYCLASS4_0___ONTICKIMPLEMENT_B__0_OFFSET))(this, a1);
		}

	};
