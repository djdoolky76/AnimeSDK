#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"

#define MDDEMDFJPFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB897F00)

inline static constexpr unsigned int MDDEMDFJPFG_TypeDefinitionIndex = 61187;

	class MDDEMDFJPFG : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDEMDFJPFG_CTOR_OFFSET))(this);
		}

	};
