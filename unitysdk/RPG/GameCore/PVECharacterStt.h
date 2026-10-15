#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMHOGHOCKP.h"
class DPMFBDHCNNO;

#define RPG_GAMECORE_PVECHARACTERSTT_CTOR_OFFSET UNITYSDK_OFFSET(0xE712DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVECharacterStt_TypeDefinitionIndex = 57625;

	class PVECharacterStt : public ::BIMHOGHOCKP
	{
	public:
		::DPMFBDHCNNO* avatarBattleInfo; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVECHARACTERSTT_CTOR_OFFSET))(this);
		}

	};
}
