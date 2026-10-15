#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DPFBAMHBMFG_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF6170)

inline static constexpr unsigned int DPFBAMHBMFG_TypeDefinitionIndex = 80191;

	class DPFBAMHBMFG : public ::System::Object
	{
	public:
		::System::UInt32 BABLPFIACHF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFBAMHBMFG_CTOR_OFFSET))(this);
		}

	};
