#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_OPIGALIJPOP;
class MFNCDGPLHDC;
namespace RPG::Client { class GridFightGameRefTeam; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1718B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_0___SYNCTEAM_B__0_OFFSET UNITYSDK_OFFSET(0xD1739E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass59_0_TypeDefinitionIndex = 64809;

	class GridFightGameRefTeam___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::MFNCDGPLHDC* teamFactory; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* appendingFinalRoles; // 0x18
		::RPG::Client::GridFightGameRefTeam* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_0_CTOR_OFFSET))(this);
		}

		::System::Void __SyncTeam_b__0(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS59_0___SYNCTEAM_B__0_OFFSET))(this, a1);
		}

	};
}
