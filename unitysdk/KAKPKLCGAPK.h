#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAKPKLCGAPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB02F0)

	class KAKPKLCGAPK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKPKLCGAPK_CTOR_OFFSET))(this);
		}

	};
