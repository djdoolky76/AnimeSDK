#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIAEECGNJGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBCD020)

inline static constexpr unsigned int CIAEECGNJGB_TypeDefinitionIndex = 43192;

	class CIAEECGNJGB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAEECGNJGB_CTOR_OFFSET))(this);
		}

	};
