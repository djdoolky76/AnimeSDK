#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_FJEMCJJOEND_OFFSET UNITYSDK_OFFSET(0x15AE9BD0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x15AE9AB0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x15AE9EC0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x15AE9F00)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x15AE9D30)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x15AE9F10)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x15AE9E70)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE9FA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SendEventToGraphMarker_TypeDefinitionIndex = 69568;

	class SendEventToGraphMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* eventName; // 0x28
		::System::Boolean SendToGlobal; // 0x30
		::System::Boolean forceTriggerOnExit; // 0x31
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void FJEMCJJOEND(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_FJEMCJJOEND_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
