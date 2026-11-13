#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BCPIFLJHOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B3F30)

inline static constexpr unsigned int BCPIFLJHOFF_TypeDefinitionIndex = 44766;

	class BCPIFLJHOFF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPIFLJHOFF_CTOR_OFFSET))(this);
		}

	};
