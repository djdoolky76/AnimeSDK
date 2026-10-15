#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDType.h"
#include "unitysdk/System/Object.h"

#define KJFKDANBPFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB442EB0)

inline static constexpr unsigned int KJFKDANBPFA_TypeDefinitionIndex = 55542;

	class KJFKDANBPFA : public ::System::Object
	{
	public:
		::RPG::GameCore::MonsterHUDType OAMPOPJGNNG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFKDANBPFA_CTOR_OFFSET))(this);
		}

	};
