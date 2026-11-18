#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class MLJGMELKNCC_ONKAPFOMFDK;
namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1191BFF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG___C__DISPLAYCLASS3_0__STARTSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1191C000)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncMessageConfig___c__DisplayClass3_0_TypeDefinitionIndex = 70028;

	class MainCityChatSyncMessageConfig___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MLJGMELKNCC_ONKAPFOMFDK* messageGroup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartSync_b__0(::CFMGIKJLMBJ* rspMsg)
		{
			return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG___C__DISPLAYCLASS3_0__STARTSYNC_B__0_OFFSET))(this, rspMsg);
		}
	};
}
