#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x187D82A0)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x187D7EB0)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x187D8250)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_LDADNEGOOOA_OFFSET UNITYSDK_OFFSET(0x187D7F00)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x187D8260)
#define MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187D8200)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelButtonClickAreaHandler_TypeDefinitionIndex = 52127;

	class UIInLevelButtonClickAreaHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::MoleMole::ConfigUICommon_Input_ButtonType _buttonTypeV2; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* _extraClickArea; // 0x20
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_DJFLFBMCHLH_OFFSET))(this);
		}

		::System::Void LDADNEGOOOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_LDADNEGOOOA_OFFSET))(this);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_PIOOPLAPDPK_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONCLICKAREAHANDLER_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
