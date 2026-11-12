#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_OPIGALIJPOP;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS189_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB36C60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS189_0___BUILDROLES_B__0_OFFSET UNITYSDK_OFFSET(0xDB39110)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass189_0_TypeDefinitionIndex = 66282;

	class GridFightGameRefData___c__DisplayClass189_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* res; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS189_0_CTOR_OFFSET))(this);
		}

		::System::Void __BuildRoles_b__0(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS189_0___BUILDROLES_B__0_OFFSET))(this, a1);
		}

	};
}
