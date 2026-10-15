#pragma once
#include "unitysdk/unitysdk.h"

#define GCJHPDKDIMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1597E320)
#define GCJHPDKDIMN_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x1597E2C0)

inline static constexpr unsigned int GCJHPDKDIMN_TypeDefinitionIndex = 61063;

	class GCJHPDKDIMN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJHPDKDIMN_CTOR_OFFSET))(this);
		}

		::System::Void OnStartLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJHPDKDIMN_ONSTARTLOADING_OFFSET))(this);
		}

	};
