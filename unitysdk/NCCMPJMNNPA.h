#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NCCMPJMNNPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C27AC50)

inline static constexpr unsigned int NCCMPJMNNPA_TypeDefinitionIndex = 43324;

	class NCCMPJMNNPA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMPJMNNPA_CTOR_OFFSET))(this);
		}

	};
