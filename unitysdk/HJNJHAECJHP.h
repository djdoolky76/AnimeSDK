#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HJNJHAECJHP_CTOR_OFFSET UNITYSDK_OFFSET(0x18220A30)
#define HJNJHAECJHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182209F0)

inline static constexpr unsigned int HJNJHAECJHP_TypeDefinitionIndex = 78102;

	class HJNJHAECJHP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNJHAECJHP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNJHAECJHP_DISPOSE_OFFSET))(this);
		}

	};
