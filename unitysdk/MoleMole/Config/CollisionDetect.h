#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern.h"

#define MOLEMOLE_CONFIG_COLLISIONDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x192957A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CollisionDetect_TypeDefinitionIndex = 64420;

	class CollisionDetect : public ::MoleMole::Config::ConfigEntityAttackPattern
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLISIONDETECT__CTOR_OFFSET))(this);
		}
	};
}
