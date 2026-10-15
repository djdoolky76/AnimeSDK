#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GAOBMNLLPEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15943560)

inline static constexpr unsigned int GAOBMNLLPEM_TypeDefinitionIndex = 82038;

	class GAOBMNLLPEM : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 GBMEGAKLFAJ; // 0x10
		::System::Single FOENFEKANLO; // 0x18
		::System::Boolean DHHGLHOOCMA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBMNLLPEM_CTOR_OFFSET))(this);
		}

	};
