#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AGOGHMCAKAD_CTOR_OFFSET UNITYSDK_OFFSET(0xF135A20)

inline static constexpr unsigned int AGOGHMCAKAD_TypeDefinitionIndex = 83218;

	class AGOGHMCAKAD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOGHMCAKAD_CTOR_OFFSET))(this);
		}

	};
