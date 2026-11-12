#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MLECHBLGPME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE41F0)

inline static constexpr unsigned int MLECHBLGPME_TypeDefinitionIndex = 44720;

	class MLECHBLGPME : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLECHBLGPME_CTOR_OFFSET))(this);
		}

	};
