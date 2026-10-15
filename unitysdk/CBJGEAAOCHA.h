#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CBJGEAAOCHA_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A6F00)

inline static constexpr unsigned int CBJGEAAOCHA_TypeDefinitionIndex = 76060;

	class CBJGEAAOCHA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGEAAOCHA_CTOR_OFFSET))(this);
		}

	};
