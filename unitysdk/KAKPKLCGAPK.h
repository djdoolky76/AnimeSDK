#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAKPKLCGAPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2AB70)

inline static constexpr unsigned int KAKPKLCGAPK_TypeDefinitionIndex = 43314;

	class KAKPKLCGAPK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKPKLCGAPK_CTOR_OFFSET))(this);
		}

	};
