#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CJKEMOOBHMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBCD110)

inline static constexpr unsigned int CJKEMOOBHMH_TypeDefinitionIndex = 44709;

	class CJKEMOOBHMH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKEMOOBHMH_CTOR_OFFSET))(this);
		}

	};
