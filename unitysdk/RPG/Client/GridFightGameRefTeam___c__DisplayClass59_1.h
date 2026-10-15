#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBEFMKBPJMB;
class KKJMAOMDCAE_OPIGALIJPOP;

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD17BD80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1___SYNCTEAM_B__2_OFFSET UNITYSDK_OFFSET(0xD17BD90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass59_1_TypeDefinitionIndex = 64810;

	template <typename T>
	class GridFightGameRefTeam___c__DisplayClass59_1 : public ::System::Object
	{
	public:
		::KKJMAOMDCAE_OPIGALIJPOP* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__2(::HBEFMKBPJMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBEFMKBPJMB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1___SYNCTEAM_B__2_OFFSET))(this, a1);
		}

	};
}
