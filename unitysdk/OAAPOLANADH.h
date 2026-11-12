#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OAAPOLANADH_CTOR_OFFSET UNITYSDK_OFFSET(0xC6170A0)

inline static constexpr unsigned int OAAPOLANADH_TypeDefinitionIndex = 63353;

	class OAAPOLANADH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAPOLANADH_CTOR_OFFSET))(this);
		}

	};
