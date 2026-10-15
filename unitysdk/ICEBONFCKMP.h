#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICEBONFCKMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E405C0)

inline static constexpr unsigned int ICEBONFCKMP_TypeDefinitionIndex = 72400;

	class ICEBONFCKMP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEBONFCKMP_CTOR_OFFSET))(this);
		}

	};
