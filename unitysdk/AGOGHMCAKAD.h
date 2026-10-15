#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AGOGHMCAKAD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF3F8B0)

inline static constexpr unsigned int AGOGHMCAKAD_TypeDefinitionIndex = 80437;

	class AGOGHMCAKAD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOGHMCAKAD_CTOR_OFFSET))(this);
		}

	};
