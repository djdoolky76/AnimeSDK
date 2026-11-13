#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBEFMKBPJMB;
class KKJMAOMDCAE_OPIGALIJPOP;

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD57680)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1___SYNCTEAM_B__1_OFFSET UNITYSDK_OFFSET(0x1CD57690)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass59_1_TypeDefinitionIndex = 66354;

	template <typename T>
	class GridFightGameRefTeam___c__DisplayClass59_1 : public ::System::Object
	{
	public:
		::KKJMAOMDCAE_OPIGALIJPOP* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__1(::HBEFMKBPJMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBEFMKBPJMB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_1___SYNCTEAM_B__1_OFFSET))(this, a1);
		}

	};
}
