#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKEPCDFBABH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8A7E0)

inline static constexpr unsigned int GKEPCDFBABH_TypeDefinitionIndex = 80498;

	class GKEPCDFBABH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPCDFBABH_CTOR_OFFSET))(this);
		}

	};
