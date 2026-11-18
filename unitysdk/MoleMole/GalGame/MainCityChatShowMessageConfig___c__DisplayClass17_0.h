#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DEAKMFEBBIN;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12463C20)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__ONOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x12463C50)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__ONOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x12463C30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowMessageConfig___c__DisplayClass17_0_TypeDefinitionIndex = 77505;

	class MainCityChatShowMessageConfig___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose; // 0x10
		::DEAKMFEBBIN* messageModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__ONOPEN_B__1_OFFSET))(this);
		}

		::System::Void _OnOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG___C__DISPLAYCLASS17_0__ONOPEN_B__0_OFFSET))(this);
		}
	};
}
