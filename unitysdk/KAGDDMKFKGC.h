#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAGDDMKFKGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE23080)

inline static constexpr unsigned int KAGDDMKFKGC_TypeDefinitionIndex = 44751;

	class KAGDDMKFKGC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAGDDMKFKGC_CTOR_OFFSET))(this);
		}

	};
