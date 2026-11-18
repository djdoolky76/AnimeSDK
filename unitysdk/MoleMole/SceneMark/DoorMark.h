#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_SCENEMARK_DOORMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A06040)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int DoorMark_TypeDefinitionIndex = 59923;

	class DoorMark
	{
	public:
		::System::Boolean IgnoreMonsterCollision; // 0x18
		::System::Boolean IgnoreAvatarCollision; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DOORMARK__CTOR_OFFSET))(this);
		}
	};
}
