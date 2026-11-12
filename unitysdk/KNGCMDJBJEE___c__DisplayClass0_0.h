#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNGCMDJBJEE;

#define KNGCMDJBJEE___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD15B0)
#define KNGCMDJBJEE___C__DISPLAYCLASS0_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xBDD1AF0)

inline static constexpr unsigned int KNGCMDJBJEE___c__DisplayClass0_0_TypeDefinitionIndex = 74408;

	class KNGCMDJBJEE___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::KNGCMDJBJEE* __4__this; // 0x10
		::System::Int32 cur; // 0x18
		::System::Int32 max; // 0x1C
		::System::Int32 showCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGCMDJBJEE___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGCMDJBJEE___C__DISPLAYCLASS0_0__SETUPVIEW_B__0_OFFSET))(this);
		}

	};
