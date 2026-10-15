#pragma once
#include "unitysdk/unitysdk.h"

#define IHDDEOPCLAO_CTOR_OFFSET UNITYSDK_OFFSET(0x16419DE0)
#define IHDDEOPCLAO_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x16419DA0)

inline static constexpr unsigned int IHDDEOPCLAO_TypeDefinitionIndex = 69742;

	class IHDDEOPCLAO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDDEOPCLAO_CTOR_OFFSET))(this);
		}

		::System::Void InitInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDDEOPCLAO_INITINTERNAL_OFFSET))(this);
		}

	};
