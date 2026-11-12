#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHLLPFICELH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBCD010)

inline static constexpr unsigned int CHLLPFICELH_TypeDefinitionIndex = 44764;

	class CHLLPFICELH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLLPFICELH_CTOR_OFFSET))(this);
		}

	};
