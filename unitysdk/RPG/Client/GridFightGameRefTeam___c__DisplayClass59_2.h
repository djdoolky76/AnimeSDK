#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBEFMKBPJMB;
class KKJMAOMDCAE_OPIGALIJPOP;

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_2_CTOR_OFFSET UNITYSDK_OFFSET(0xD1718C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_2___SYNCTEAM_B__4_OFFSET UNITYSDK_OFFSET(0xD173EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass59_2_TypeDefinitionIndex = 64811;

	template <typename T1, typename T2>
	class GridFightGameRefTeam___c__DisplayClass59_2 : public ::System::Object
	{
	public:
		::KKJMAOMDCAE_OPIGALIJPOP* finalRole; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_2_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__4(::HBEFMKBPJMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBEFMKBPJMB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_2___SYNCTEAM_B__4_OFFSET))(this, a1);
		}

	};
}
