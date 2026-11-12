#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOBHPPJAELO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC79000)

inline static constexpr unsigned int GOBHPPJAELO_TypeDefinitionIndex = 44758;

	class GOBHPPJAELO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBHPPJAELO_CTOR_OFFSET))(this);
		}

	};
