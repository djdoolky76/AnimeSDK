#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x18824880)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x188249A0)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x188249E0)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x188248D0)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x188249F0)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x18824920)
#define MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x18824A40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NapDebugLogMarker_TypeDefinitionIndex = 81653;

	class NapDebugLogMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* LogText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPDEBUGLOGMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}
	};
}
