#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define APHANBEOHDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C87B4B0)

inline static constexpr unsigned int APHANBEOHDA_TypeDefinitionIndex = 42345;

	class APHANBEOHDA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHANBEOHDA_CTOR_OFFSET))(this);
		}

	};
