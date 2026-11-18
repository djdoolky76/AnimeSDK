#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_FJEMCJJOEND_OFFSET UNITYSDK_OFFSET(0x19CFE330)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x19CFE230)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x19CFE760)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x19CFE7A0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x19CFE5F0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x19CFE7B0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x19CFE710)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFE840)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SendEventToFCMarker_TypeDefinitionIndex = 69599;

	class SendEventToFCMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* eventName; // 0x28
		::System::Boolean isFCRawEvent; // 0x30
		::System::Boolean forceTriggerOnExit; // 0x31
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void FJEMCJJOEND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_FJEMCJJOEND_OFFSET))(this);
		}
	};
}
