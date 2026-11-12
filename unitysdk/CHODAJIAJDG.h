#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPHMMEIDKHM.h"

#define CHODAJIAJDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BA990)

inline static constexpr unsigned int CHODAJIAJDG_TypeDefinitionIndex = 42411;

	class CHODAJIAJDG : public ::IPHMMEIDKHM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODAJIAJDG_CTOR_OFFSET))(this);
		}

	};
