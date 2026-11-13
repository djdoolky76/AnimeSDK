#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GEDECNCHAEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C225750)

inline static constexpr unsigned int GEDECNCHAEM_TypeDefinitionIndex = 44695;

	class GEDECNCHAEM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDECNCHAEM_CTOR_OFFSET))(this);
		}

	};
