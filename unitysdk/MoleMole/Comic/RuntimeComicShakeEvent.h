#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/RuntimeComicLogicEventBase.h"

class ODBKEIOMGPM;
namespace MoleMole { class ConfigComicShakeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Timeline { class ComicShakeEvent; }
namespace UnityEngine::Timeline { class LogicEventBase; }

#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_ALJNKBIPAEM_OFFSET UNITYSDK_OFFSET(0xFFC5360)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_BPMAKBNIMLG_OFFSET UNITYSDK_OFFSET(0xFFC5400)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xFFC4EB0)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_EOKGEIOGBMF_OFFSET UNITYSDK_OFFSET(0xFFC54B0)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_INITSHAKEITEMLIST_OFFSET UNITYSDK_OFFSET(0xFFC4D90)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0xFFC4B90)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_LAAJOGHHPMH_OFFSET UNITYSDK_OFFSET(0xFFC5240)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_OLDLKHFOBEM_OFFSET UNITYSDK_OFFSET(0xFFC52D0)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xFFC4DE0)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_STARTPLAY_OFFSET UNITYSDK_OFFSET(0xFFC4F20)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xFFC5100)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC51F0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int RuntimeComicShakeEvent_TypeDefinitionIndex = 91924;

	class RuntimeComicShakeEvent : public ::MoleMole::Comic::RuntimeComicLogicEventBase
	{
	public:
		::UnityEngine::Timeline::ComicShakeEvent* EHJPHIICELK; // 0x58
		::MoleMole::ConfigComicShakeData* BKFGNECMOII; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* FBBAAMDDNAJ; // 0x68
		::ODBKEIOMGPM* DEEKHDMJHKI; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::LogicEventBase* IGLBHBHINFH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_INITWITHBASE_OFFSET))(this, IGLBHBHINFH);
		}

		::System::Void InitShakeItemList(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* MFDMDLFIPME)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_INITSHAKEITEMLIST_OFFSET))(this, MFDMDLFIPME);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_UPDATETIME_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_ENDPLAY_OFFSET))(this);
		}

		::System::Void LAAJOGHHPMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_LAAJOGHHPMH_OFFSET))(this);
		}

		::System::Void OLDLKHFOBEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_OLDLKHFOBEM_OFFSET))(this);
		}

		::System::Void ALJNKBIPAEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_ALJNKBIPAEM_OFFSET))(this);
		}

		::System::Void BPMAKBNIMLG(::UnityEngine::Timeline::LogicEventBase* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_BPMAKBNIMLG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void EOKGEIOGBMF(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_EOKGEIOGBMF_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
