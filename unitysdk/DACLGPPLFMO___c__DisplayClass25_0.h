#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DACLGPPLFMO;
namespace RPG::Client { class CakeRaceStartGameData; }
namespace RPG::Client::Promises { class IPromise; }

#define DACLGPPLFMO___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBD8E0)
#define DACLGPPLFMO___C__DISPLAYCLASS25_0__TRYSTARTGAME_B__0_OFFSET UNITYSDK_OFFSET(0xDFBE920)

inline static constexpr unsigned int DACLGPPLFMO___c__DisplayClass25_0_TypeDefinitionIndex = 76453;

	class DACLGPPLFMO___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceStartGameData* startGameData; // 0x10
		::DACLGPPLFMO* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryStartGame_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO___C__DISPLAYCLASS25_0__TRYSTARTGAME_B__0_OFFSET))(this);
		}

	};
