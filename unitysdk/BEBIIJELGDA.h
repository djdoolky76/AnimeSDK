#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEBIIJELGDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88A350)

inline static constexpr unsigned int BEBIIJELGDA_TypeDefinitionIndex = 42541;

	class BEBIIJELGDA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIIJELGDA_CTOR_OFFSET))(this);
		}

	};
