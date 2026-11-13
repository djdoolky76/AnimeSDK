#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDType.h"
#include "unitysdk/System/Object.h"

#define KJFKDANBPFA_CTOR_OFFSET UNITYSDK_OFFSET(0x19F09E90)

inline static constexpr unsigned int KJFKDANBPFA_TypeDefinitionIndex = 56734;

	class KJFKDANBPFA : public ::System::Object
	{
	public:
		::RPG::GameCore::MonsterHUDType OAMPOPJGNNG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFKDANBPFA_CTOR_OFFSET))(this);
		}

	};
