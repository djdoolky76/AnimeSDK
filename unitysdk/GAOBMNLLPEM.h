#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GAOBMNLLPEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B873EB0)

inline static constexpr unsigned int GAOBMNLLPEM_TypeDefinitionIndex = 84818;

	class GAOBMNLLPEM : public ::System::Object
	{
	public:
		::System::Single FOENFEKANLO; // 0x10
		::System::Boolean DHHGLHOOCMA; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 GBMEGAKLFAJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBMNLLPEM_CTOR_OFFSET))(this);
		}

	};
