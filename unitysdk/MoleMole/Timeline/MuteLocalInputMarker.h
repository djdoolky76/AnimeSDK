#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_CPLDHGLCCBB_OFFSET UNITYSDK_OFFSET(0x14BD5730)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x14BD5630)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x14BD5C80)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x14BD5CC0)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x14BD5970)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x14BD5CD0)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x14BD5C30)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_PEDDKNKHJKA_OFFSET UNITYSDK_OFFSET(0x14BD5A80)
#define MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD5D20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MuteLocalInputMarker_TypeDefinitionIndex = 60476;

	class MuteLocalInputMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		// static const ::System::Int32 TL_MUTE_INPUT_PRIORITY = 0x65; // 0x0
		// static const ::System::String* TL_MUTE_INPUT_GROUP_TAG; // 0x0
		::System::Boolean isMute; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void PEDDKNKHJKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_PEDDKNKHJKA_OFFSET))(this);
		}

		::System::Void CPLDHGLCCBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MUTELOCALINPUTMARKER_CPLDHGLCCBB_OFFSET))(this);
		}
	};
}
