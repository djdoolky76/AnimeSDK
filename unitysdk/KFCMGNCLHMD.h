#pragma once
#include "unitysdk/unitysdk.h"

#define KFCMGNCLHMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB38F550)

inline static constexpr unsigned int KFCMGNCLHMD_TypeDefinitionIndex = 78884;

	class KFCMGNCLHMD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMGNCLHMD_CTOR_OFFSET))(this);
		}

	};
