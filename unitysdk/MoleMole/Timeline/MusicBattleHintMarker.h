#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x17E78160)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x17E782A0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x17E782E0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x17E781B0)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x17E78200)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x17E78250)
#define MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E782F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MusicBattleHintMarker_TypeDefinitionIndex = 90946;

	class MusicBattleHintMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::MoleMole::Config::MusicBattleMarkerNodeType NodeType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUSICBATTLEHINTMARKER_GET_FLAGS_OFFSET))(this);
		}
	};
}
