#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOPJIACKHCC;
class MBLFLAMBGDH;
namespace RPG::GameCore { class GameEntity; }

#define MBLFLAMBGDH___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB860DE0)
#define MBLFLAMBGDH___C__DISPLAYCLASS3_0__SETFOLLOW_B__0_OFFSET UNITYSDK_OFFSET(0xB862770)

inline static constexpr unsigned int MBLFLAMBGDH___c__DisplayClass3_0_TypeDefinitionIndex = 71536;

	class MBLFLAMBGDH___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MBLFLAMBGDH* __4__this; // 0x10
		::FOPJIACKHCC* follow; // 0x18
		::RPG::GameCore::GameEntity* entity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetFollow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH___C__DISPLAYCLASS3_0__SETFOLLOW_B__0_OFFSET))(this);
		}

	};
