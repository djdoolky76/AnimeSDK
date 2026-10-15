#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CMFPDCFGOHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13130)

inline static constexpr unsigned int CMFPDCFGOHG_TypeDefinitionIndex = 42275;

	class CMFPDCFGOHG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFPDCFGOHG_CTOR_OFFSET))(this);
		}

	};
