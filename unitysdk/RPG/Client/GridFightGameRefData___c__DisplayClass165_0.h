#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_OPIGALIJPOP;
class OABDFLPEHDO;
namespace RPG::Client { class GridFightGameRefData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1637A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0___COLLECTEQUIPSANDTRAIT_B__0_OFFSET UNITYSDK_OFFSET(0xD168C70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass165_0_TypeDefinitionIndex = 64731;

	class GridFightGameRefData___c__DisplayClass165_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OABDFLPEHDO*>* rules; // 0x10
		::RPG::Client::GridFightGameRefData* __4__this; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* appendingFinalRoles; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0_CTOR_OFFSET))(this);
		}

		::System::Void __CollectEquipsAndTrait_b__0(::KKJMAOMDCAE_OPIGALIJPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKJMAOMDCAE_OPIGALIJPOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0___COLLECTEQUIPSANDTRAIT_B__0_OFFSET))(this, a1);
		}

	};
}
