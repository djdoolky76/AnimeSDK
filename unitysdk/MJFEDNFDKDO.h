#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MJFEDNFDKDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C263630)

inline static constexpr unsigned int MJFEDNFDKDO_TypeDefinitionIndex = 43531;

	class MJFEDNFDKDO : public ::System::Object
	{
	public:
		::System::Single FMMPKEJMKAN; // 0x10
		::System::Boolean IAHGKIPCEIP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJFEDNFDKDO_CTOR_OFFSET))(this);
		}

	};
