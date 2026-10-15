#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GAOBMNLLPEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15938580)

inline static constexpr unsigned int GAOBMNLLPEM_TypeDefinitionIndex = 82037;

	class GAOBMNLLPEM : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 GBMEGAKLFAJ; // 0x10
		::System::Boolean DHHGLHOOCMA; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single FOENFEKANLO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAOBMNLLPEM_CTOR_OFFSET))(this);
		}

	};
