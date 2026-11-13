#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IJDHIIOCCON_CTOR_OFFSET UNITYSDK_OFFSET(0x18040D50)

inline static constexpr unsigned int IJDHIIOCCON_TypeDefinitionIndex = 84062;

	class IJDHIIOCCON : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDHIIOCCON_CTOR_OFFSET))(this);
		}

	};
