#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEONAALICLA_FilterUsage.h"
#include "unitysdk/System/Attribute.h"

#define PEONAALICLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D8060)

	class PEONAALICLA : public ::System::Attribute
	{
	public:
		::PEONAALICLA_FilterUsage KFJFGFBMIJP; // 0x10
		::System::Void _ctor(::PEONAALICLA_FilterUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEONAALICLA_FilterUsage))((::PBYTE)hIl2Cpp + PEONAALICLA_CTOR_OFFSET))(this, a1);
		}

	};
