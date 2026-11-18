#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PHECEIPKGFA;

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10D20F30)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_1__ONOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x10D20F40)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_1__ONOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x10D21130)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowPostConfig___c__DisplayClass14_1_TypeDefinitionIndex = 84668;

	template <typename T>
	class MainCityChatShowPostConfig___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::PHECEIPKGFA* post; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_1__ONOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG___C__DISPLAYCLASS14_1__ONOPEN_B__1_OFFSET))(this);
		}
	};
}
