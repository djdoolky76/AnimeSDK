#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IJDHIIOCCON_CTOR_OFFSET UNITYSDK_OFFSET(0x16459D40)

inline static constexpr unsigned int IJDHIIOCCON_TypeDefinitionIndex = 81283;

	class IJDHIIOCCON : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDHIIOCCON_CTOR_OFFSET))(this);
		}

	};
