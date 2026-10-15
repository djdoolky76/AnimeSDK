#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NCCMPJMNNPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C943970)

inline static constexpr unsigned int NCCMPJMNNPA_TypeDefinitionIndex = 42349;

	class NCCMPJMNNPA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMPJMNNPA_CTOR_OFFSET))(this);
		}

	};
