#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModelResultType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

#define FDNCLPGAKOA_CTOR_OFFSET UNITYSDK_OFFSET(0x156DEF50)

	class FDNCLPGAKOA : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleModelResultType JCHFCNFHCMM; // 0x10
		::RPG::GameCore::TeamType HJJKMPOCPOE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNCLPGAKOA_CTOR_OFFSET))(this);
		}

	};
