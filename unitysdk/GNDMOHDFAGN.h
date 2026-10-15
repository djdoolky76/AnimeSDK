#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvConfigType.h"
#include "unitysdk/System/Attribute.h"

#define GNDMOHDFAGN_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFE9F0)

inline static constexpr unsigned int GNDMOHDFAGN_TypeDefinitionIndex = 49331;

	class GNDMOHDFAGN : public ::System::Attribute
	{
	public:
		::EnviromentSystemV2Space::EnvConfigType GPNFGFGMGAD; // 0x10
		::System::Void _ctor(::EnviromentSystemV2Space::EnvConfigType a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvConfigType))((::PBYTE)hIl2Cpp + GNDMOHDFAGN_CTOR_OFFSET))(this, a1);
		}

	};
