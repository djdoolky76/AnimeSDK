#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IJDHIIOCCON_CTOR_OFFSET UNITYSDK_OFFSET(0x17422790)

inline static constexpr unsigned int IJDHIIOCCON_TypeDefinitionIndex = 84063;

	class IJDHIIOCCON : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDHIIOCCON_CTOR_OFFSET))(this);
		}

	};
