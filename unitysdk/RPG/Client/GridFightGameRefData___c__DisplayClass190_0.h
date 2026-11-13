#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_OPIGALIJPOP;
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS190_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4B040)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS190_0___BUILDSEASONROLES_B__0_OFFSET UNITYSDK_OFFSET(0x1CD4D5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass190_0_TypeDefinitionIndex = 66283;

	class GridFightGameRefData___c__DisplayClass190_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* res; // 0x10
		::RPG::Client::GridFightGameRefData* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS190_0_CTOR_OFFSET))(this);
		}

		::System::Void __BuildSeasonRoles_b__0(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS190_0___BUILDSEASONROLES_B__0_OFFSET))(this, a1);
		}

	};
}
