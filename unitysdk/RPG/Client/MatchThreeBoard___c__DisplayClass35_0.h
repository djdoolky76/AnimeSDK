#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class JEANAIHDCAA;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeCopyPieceEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD587260)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD58D430)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xD58D500)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0xD58D4D0)

namespace RPG::Client
{
	class MatchThreeBoard___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeCopyPieceEffect* effect; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::MatchThreeBoard* __4__this; // 0x20
		::JEANAIHDCAA* pieceData; // 0x28
		::System::Action* __9__2; // 0x30
		::UnityEngine::Vector2Int to; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayCopyPieceEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _DoPlayCopyPieceEffect_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__2_OFFSET))(this);
		}

		::System::Void _DoPlayCopyPieceEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__1_OFFSET))(this);
		}

	};
}
