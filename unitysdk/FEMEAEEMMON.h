#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FEMEAEEMMON_CTOR_OFFSET UNITYSDK_OFFSET(0x130CA500)

inline static constexpr unsigned int FEMEAEEMMON_TypeDefinitionIndex = 74954;

	class FEMEAEEMMON : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMEAEEMMON_CTOR_OFFSET))(this);
		}

	};
