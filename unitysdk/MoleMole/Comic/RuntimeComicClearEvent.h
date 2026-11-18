#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/RuntimeComicLogicEventBase.h"

namespace MoleMole::Comic { class MonoComicEventBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class ComicClearEvent; }
namespace UnityEngine::Timeline { class LogicEventBase; }

#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_BPMAKBNIMLG_OFFSET UNITYSDK_OFFSET(0x192836C0)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_CLEAREVENTSWITHTAG_OFFSET UNITYSDK_OFFSET(0x19283260)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x192830A0)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_EOKGEIOGBMF_OFFSET UNITYSDK_OFFSET(0x19283800)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x19282D10)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_LAAJOGHHPMH_OFFSET UNITYSDK_OFFSET(0x19283770)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_OLDLKHFOBEM_OFFSET UNITYSDK_OFFSET(0x19283630)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x19282E60)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x19283100)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19283560)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int RuntimeComicClearEvent_TypeDefinitionIndex = 57340;

	class RuntimeComicClearEvent : public ::MoleMole::Comic::RuntimeComicLogicEventBase
	{
	public:
		::UnityEngine::Timeline::ComicClearEvent* IGLBHBHINFH; // 0x58
		::System::Int32 OHAJJFOLGJE; // 0x60
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>* BBNAIHPENEL; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT__CTOR_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::LogicEventBase* IGLBHBHINFH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_INITWITHBASE_OFFSET))(this, IGLBHBHINFH);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_UPDATETIME_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_ENDPLAY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>* ClearEventsWithTag(::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>* IFKEJOEBNDA)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_CLEAREVENTSWITHTAG_OFFSET))(this, IFKEJOEBNDA);
		}

		::System::Void OLDLKHFOBEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_OLDLKHFOBEM_OFFSET))(this);
		}

		::System::Void BPMAKBNIMLG(::UnityEngine::Timeline::LogicEventBase* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_BPMAKBNIMLG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void LAAJOGHHPMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_LAAJOGHHPMH_OFFSET))(this);
		}

		::System::Void EOKGEIOGBMF(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_EOKGEIOGBMF_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
