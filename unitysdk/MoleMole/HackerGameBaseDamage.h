#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HACKERGAMEBASEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x130DDD40)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameBaseDamage_TypeDefinitionIndex = 44627;

	class HackerGameBaseDamage : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEBASEDAMAGE__CTOR_OFFSET))(this);
		}
	};
}
