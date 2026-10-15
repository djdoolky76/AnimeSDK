#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLPHOHILHPC___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA81D80)
#define BLPHOHILHPC___C__DISPLAYCLASS16_0__ISTOOUNIFORM_B__1_OFFSET UNITYSDK_OFFSET(0xBA81EA0)

inline static constexpr unsigned int BLPHOHILHPC___c__DisplayClass16_0_TypeDefinitionIndex = 77903;

	class BLPHOHILHPC___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Single mean; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHOHILHPC___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Single _IsTooUniform_b__1(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLPHOHILHPC___C__DISPLAYCLASS16_0__ISTOOUNIFORM_B__1_OFFSET))(this, a1);
		}

	};
