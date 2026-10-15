#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DCHICFMEANN.h"

#define PIBJCFPDDGM___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC254780)
#define PIBJCFPDDGM___C__DISPLAYCLASS3_0__SETSELFMARBLESELECTED_B__0_OFFSET UNITYSDK_OFFSET(0xC2550A0)

inline static constexpr unsigned int PIBJCFPDDGM___c__DisplayClass3_0_TypeDefinitionIndex = 74723;

	class PIBJCFPDDGM___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 marbleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBJCFPDDGM___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SetSelfMarbleSelected_b__0(::DCHICFMEANN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCHICFMEANN))((::PBYTE)hIl2Cpp + PIBJCFPDDGM___C__DISPLAYCLASS3_0__SETSELFMARBLESELECTED_B__0_OFFSET))(this, a1);
		}

	};
