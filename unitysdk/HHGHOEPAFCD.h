#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HHGHOEPAFCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACC0B0)

	class HHGHOEPAFCD : public ::System::Object
	{
	public:
		::System::Single DCDKBJLJFON; // 0x10
		::System::Single BIJLGKHKHCL; // 0x14
		::System::Single JJEHLAPLOFE; // 0x18
		::System::Int32 JFJJNLDLAIC; // 0x1C
		::System::Single AFBFBKMKCJA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGHOEPAFCD_CTOR_OFFSET))(this);
		}

	};
