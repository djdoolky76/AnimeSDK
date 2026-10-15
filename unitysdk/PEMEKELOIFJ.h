#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFINOGCFBMJ.h"

#define PEMEKELOIFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC1EC2F0)

inline static constexpr unsigned int PEMEKELOIFJ_TypeDefinitionIndex = 54321;

	class PEMEKELOIFJ : public ::BFINOGCFBMJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMEKELOIFJ_CTOR_OFFSET))(this);
		}

	};
