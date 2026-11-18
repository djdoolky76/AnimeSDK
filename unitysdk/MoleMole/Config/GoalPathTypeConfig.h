#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOLKBAIGBFN.h"
#include "unitysdk/HLAGNEHLNKA.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_GOALPATHTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE7BA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GoalPathTypeConfig_TypeDefinitionIndex = 59452;

	class GoalPathTypeConfig : public ::System::Object
	{
	public:
		::AOLKBAIGBFN Key; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* EffectPatternKey; // 0x18
		::HLAGNEHLNKA UpdateMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GOALPATHTYPECONFIG__CTOR_OFFSET))(this);
		}
	};
}
