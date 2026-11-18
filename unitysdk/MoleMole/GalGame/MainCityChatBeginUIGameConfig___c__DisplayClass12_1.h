#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x130DAF60)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_1__ONOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x130DB090)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBeginUIGameConfig___c__DisplayClass12_1_TypeDefinitionIndex = 60877;

	template <typename T>
	class MainCityChatBeginUIGameConfig___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::System::Action* onFadeOut; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Boolean success; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpen_b__1(::DJDDGKFCNAJ_IGOPHLMOGAO r)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG___C__DISPLAYCLASS12_1__ONOPEN_B__1_OFFSET))(this, r);
		}
	};
}
