#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/InputField.h"

namespace MoleMole { class UIInputFieldEx_NNDJGHLENBK; }
namespace System { class Action; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define MOLEMOLE_UIINPUTFIELDEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x197A6FE0)
#define MOLEMOLE_UIINPUTFIELDEX_BIND_OFFSET UNITYSDK_OFFSET(0x197A7250)
#define MOLEMOLE_UIINPUTFIELDEX_CANCELSELECT_OFFSET UNITYSDK_OFFSET(0x197A71C0)
#define MOLEMOLE_UIINPUTFIELDEX_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x197A7460)
#define MOLEMOLE_UIINPUTFIELDEX_JPDHANFJNLI_OFFSET UNITYSDK_OFFSET(0x197A7580)
#define MOLEMOLE_UIINPUTFIELDEX_KHOHPDMFLLO_OFFSET UNITYSDK_OFFSET(0x197A7530)
#define MOLEMOLE_UIINPUTFIELDEX_MPDMBMPNHLC_OFFSET UNITYSDK_OFFSET(0x197A7470)
#define MOLEMOLE_UIINPUTFIELDEX_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x197A7110)
#define MOLEMOLE_UIINPUTFIELDEX_ONSELECT_OFFSET UNITYSDK_OFFSET(0x197A7050)
#define MOLEMOLE_UIINPUTFIELDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x197A7400)

namespace MoleMole
{
	inline static constexpr unsigned int UIInputFieldEx_TypeDefinitionIndex = 55479;

	class UIInputFieldEx : public ::UnityEngine::UI::InputField
	{
	public:
		::System::Action* onSelect; // 0x210
		::System::Action* onDeselect; // 0x218

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_AWAKE_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_ONSELECT_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_ONDESELECT_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void CancelSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_CANCELSELECT_OFFSET))(this);
		}

		::System::Void Bind(::MoleMole::UIInputFieldEx_NNDJGHLENBK* HNOPAJLDCFB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx_NNDJGHLENBK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_BIND_OFFSET))(this, HNOPAJLDCFB);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::Void MPDMBMPNHLC(::UnityEngine::EventSystems::BaseEventData* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_MPDMBMPNHLC_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KHOHPDMFLLO(::System::Boolean PFPJFCGFNFL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_KHOHPDMFLLO_OFFSET))(this, PFPJFCGFNFL);
		}

		::System::Void JPDHANFJNLI(::UnityEngine::EventSystems::BaseEventData* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_JPDHANFJNLI_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
