#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NANHNCFECGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C934D60)

inline static constexpr unsigned int NANHNCFECGJ_TypeDefinitionIndex = 42455;

	class NANHNCFECGJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANHNCFECGJ_CTOR_OFFSET))(this);
		}

	};
