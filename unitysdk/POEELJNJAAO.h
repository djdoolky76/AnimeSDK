#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define POEELJNJAAO_CTOR_OFFSET UNITYSDK_OFFSET(0x184D0BB0)

inline static constexpr unsigned int POEELJNJAAO_TypeDefinitionIndex = 71360;

	class POEELJNJAAO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEELJNJAAO_CTOR_OFFSET))(this);
		}

	};
