#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAJCPEFEOPN;
class LCCMNACCAMH;

#define LCCMNACCAMH___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB612970)
#define LCCMNACCAMH___C__DISPLAYCLASS31_0__REGISTERPEDESTRIAN_B__0_OFFSET UNITYSDK_OFFSET(0xB612D80)

inline static constexpr unsigned int LCCMNACCAMH___c__DisplayClass31_0_TypeDefinitionIndex = 69314;

	class LCCMNACCAMH___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::LCCMNACCAMH* __4__this; // 0x10
		::LAJCPEFEOPN* pedestrian; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCMNACCAMH___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPedestrian_b__0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LCCMNACCAMH___C__DISPLAYCLASS31_0__REGISTERPEDESTRIAN_B__0_OFFSET))(this, a1, a2);
		}

	};
