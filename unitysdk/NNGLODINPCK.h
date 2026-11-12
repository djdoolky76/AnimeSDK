#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNGLODINPCK_CTOR_OFFSET UNITYSDK_OFFSET(0xC5915A0)

inline static constexpr unsigned int NNGLODINPCK_TypeDefinitionIndex = 75962;

	class NNGLODINPCK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGLODINPCK_CTOR_OFFSET))(this);
		}

	};
