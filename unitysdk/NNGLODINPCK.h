#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNGLODINPCK_CTOR_OFFSET UNITYSDK_OFFSET(0x179E3A20)

inline static constexpr unsigned int NNGLODINPCK_TypeDefinitionIndex = 75961;

	class NNGLODINPCK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGLODINPCK_CTOR_OFFSET))(this);
		}

	};
