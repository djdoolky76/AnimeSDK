#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FNPAPMEMEAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA436E0)

inline static constexpr unsigned int FNPAPMEMEAL_TypeDefinitionIndex = 42994;

	class FNPAPMEMEAL : public ::System::Object
	{
	public:
		::System::UInt32 KLOEJIMMPJM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPAPMEMEAL_CTOR_OFFSET))(this);
		}

	};
