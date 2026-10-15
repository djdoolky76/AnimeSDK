#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPHMMEIDKHM.h"

#define CHODAJIAJDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C434360)

	class CHODAJIAJDG : public ::IPHMMEIDKHM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODAJIAJDG_CTOR_OFFSET))(this);
		}

	};
