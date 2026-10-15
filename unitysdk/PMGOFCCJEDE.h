#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossHPStanceChangeType.h"
#include "unitysdk/System/Object.h"

#define PMGOFCCJEDE_CTOR_OFFSET UNITYSDK_OFFSET(0xC315030)

inline static constexpr unsigned int PMGOFCCJEDE_TypeDefinitionIndex = 55359;

	class PMGOFCCJEDE : public ::System::Object
	{
	public:
		::RPG::GameCore::BossHPStanceChangeType EBFOHGMMHKL; // 0x10
		::System::Single OJDKICBEIIP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGOFCCJEDE_CTOR_OFFSET))(this);
		}

	};
