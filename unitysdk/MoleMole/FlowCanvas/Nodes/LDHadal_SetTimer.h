#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

class AGJFJGEMIPB_ABMKPFAONMD;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0x142FC8B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x142FD110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__ONTICK1SINTERVAL_OFFSET UNITYSDK_OFFSET(0x142FCEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__SENDICONEVENT_OFFSET UNITYSDK_OFFSET(0x142FCC50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHadal_SetTimer_TypeDefinitionIndex = 74664;

	class LDHadal_SetTimer
	{
	public:
		::MoleMole::Level::RatingType _curRating; // 0x30
		::System::Boolean skipUpdateIcon; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timerKey, ::System::Boolean isPause, ::System::Boolean skipSetIcon, ::System::Boolean skipUpdateIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER_INVOKE_OFFSET))(this, timerKey, isPause, skipSetIcon, skipUpdateIcon);
		}

		::System::Void _OnTick1SInterval(::AGJFJGEMIPB_ABMKPFAONMD* timer)
		{
			return ((::System::Void(*)(::PVOID, ::AGJFJGEMIPB_ABMKPFAONMD*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__ONTICK1SINTERVAL_OFFSET))(this, timer);
		}

		::System::Void _SendIconEvent(::MoleMole::Level::RatingType ratingType, ::System::Boolean playChangeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__SENDICONEVENT_OFFSET))(this, ratingType, playChangeAnim);
		}
	};
}
