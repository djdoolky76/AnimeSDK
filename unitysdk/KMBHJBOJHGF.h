#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMBHJBOJHGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FBFC0)

inline static constexpr unsigned int KMBHJBOJHGF_TypeDefinitionIndex = 42338;

	class KMBHJBOJHGF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBHJBOJHGF_CTOR_OFFSET))(this);
		}

	};
