#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NJEOOPKIFFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96D360)

inline static constexpr unsigned int NJEOOPKIFFF_TypeDefinitionIndex = 43694;

	class NJEOOPKIFFF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEOOPKIFFF_CTOR_OFFSET))(this);
		}

	};
