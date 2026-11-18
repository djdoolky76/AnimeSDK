#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_SCENEMARK_LEVELEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1AFE0)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int LevelExtraData_TypeDefinitionIndex = 50629;

	class LevelExtraData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_LEVELEXTRADATA__CTOR_OFFSET))(this);
		}
	};
}
