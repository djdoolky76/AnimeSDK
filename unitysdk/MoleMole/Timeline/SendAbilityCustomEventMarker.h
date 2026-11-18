#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_FJEMCJJOEND_OFFSET UNITYSDK_OFFSET(0x1C0E0860)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x1C0E0810)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C0E0D50)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1C0E0D90)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x1C0E0C60)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x1C0E0DA0)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1C0E0CD0)
#define MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E0E30)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SendAbilityCustomEventMarker_TypeDefinitionIndex = 81349;

	class SendAbilityCustomEventMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* EventKey; // 0x28
		::System::Boolean IsGlobal; // 0x30
		::System::Byte _padding0[0x7];
		::System::String* EntityTag; // 0x38
		::System::Boolean forceTriggerOnExit; // 0x40
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void FJEMCJJOEND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDABILITYCUSTOMEVENTMARKER_FJEMCJJOEND_OFFSET))(this);
		}
	};
}
