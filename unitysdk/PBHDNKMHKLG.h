#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvConfigType.h"
#include "unitysdk/System/Attribute.h"

#define PBHDNKMHKLG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFED8E0)

inline static constexpr unsigned int PBHDNKMHKLG_TypeDefinitionIndex = 49330;

	class PBHDNKMHKLG : public ::System::Attribute
	{
	public:
		::EnviromentSystemV2Space::EnvConfigType GPNFGFGMGAD; // 0x10
		::System::Void _ctor(::EnviromentSystemV2Space::EnvConfigType a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvConfigType))((::PBYTE)hIl2Cpp + PBHDNKMHKLG_CTOR_OFFSET))(this, a1);
		}

	};
