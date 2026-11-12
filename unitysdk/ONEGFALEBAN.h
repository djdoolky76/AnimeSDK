#pragma once
#include "unitysdk/unitysdk.h"

#define ONEGFALEBAN_CTOR_OFFSET UNITYSDK_OFFSET(0xC84E750)
#define ONEGFALEBAN_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0xC84E5F0)

inline static constexpr unsigned int ONEGFALEBAN_TypeDefinitionIndex = 71697;

	class ONEGFALEBAN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEGFALEBAN_CTOR_OFFSET))(this);
		}

		::System::Void InitInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEGFALEBAN_INITINTERNAL_OFFSET))(this);
		}

	};
