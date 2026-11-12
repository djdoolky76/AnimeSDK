#pragma once
#include "unitysdk/unitysdk.h"

#define KFCMGNCLHMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1BF90)

inline static constexpr unsigned int KFCMGNCLHMD_TypeDefinitionIndex = 81655;

	class KFCMGNCLHMD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMGNCLHMD_CTOR_OFFSET))(this);
		}

	};
