#pragma once
#include "unitysdk/unitysdk.h"

#define GCBGEIGIPHM_CTOR_OFFSET UNITYSDK_OFFSET(0x19E990C0)
#define GCBGEIGIPHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E99050)

inline static constexpr unsigned int GCBGEIGIPHM_TypeDefinitionIndex = 62254;

	class GCBGEIGIPHM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGEIGIPHM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGEIGIPHM_DISPOSE_OFFSET))(this);
		}

	};
