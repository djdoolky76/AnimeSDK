#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define POEELJNJAAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC35A420)

inline static constexpr unsigned int POEELJNJAAO_TypeDefinitionIndex = 69406;

	class POEELJNJAAO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEELJNJAAO_CTOR_OFFSET))(this);
		}

	};
