#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FEALMIPFGDP_CTOR_OFFSET UNITYSDK_OFFSET(0x165FE600)

inline static constexpr unsigned int FEALMIPFGDP_TypeDefinitionIndex = 74484;

	class FEALMIPFGDP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEALMIPFGDP_CTOR_OFFSET))(this);
		}

	};
