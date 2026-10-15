#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DCHICFMEANN.h"

#define PIBJCFPDDGM___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC25C330)
#define PIBJCFPDDGM___C__DISPLAYCLASS4_0__SETSELECTEDMARBLEAPPEARANCE_B__0_OFFSET UNITYSDK_OFFSET(0xC25CA60)

inline static constexpr unsigned int PIBJCFPDDGM___c__DisplayClass4_0_TypeDefinitionIndex = 74725;

	class PIBJCFPDDGM___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 marbleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBJCFPDDGM___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SetSelectedMarbleAppearance_b__0(::DCHICFMEANN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCHICFMEANN))((::PBYTE)hIl2Cpp + PIBJCFPDDGM___C__DISPLAYCLASS4_0__SETSELECTEDMARBLEAPPEARANCE_B__0_OFFSET))(this, a1);
		}

	};
