#pragma once
#include "unitysdk/unitysdk.h"

#define ONEGFALEBAN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF49210)
#define ONEGFALEBAN_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0xBF490B0)

inline static constexpr unsigned int ONEGFALEBAN_TypeDefinitionIndex = 69740;

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
