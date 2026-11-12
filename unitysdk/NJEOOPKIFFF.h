#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NJEOOPKIFFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2F140)

inline static constexpr unsigned int NJEOOPKIFFF_TypeDefinitionIndex = 44677;

	class NJEOOPKIFFF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEOOPKIFFF_CTOR_OFFSET))(this);
		}

	};
