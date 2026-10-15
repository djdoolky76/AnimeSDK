#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPHMMEIDKHM.h"

#define CHODAJIAJDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C405CE0)

inline static constexpr unsigned int CHODAJIAJDG_TypeDefinitionIndex = 41436;

	class CHODAJIAJDG : public ::IPHMMEIDKHM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODAJIAJDG_CTOR_OFFSET))(this);
		}

	};
