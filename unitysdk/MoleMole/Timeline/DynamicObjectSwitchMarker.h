#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x1A09C730)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A09C8E0)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1A09C920)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x1A09C820)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_KJPILKEKPEJ_OFFSET UNITYSDK_OFFSET(0x1A09C7C0)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x1A09C930)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1A09C890)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09C980)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DynamicObjectSwitchMarker_TypeDefinitionIndex = 90640;

	class DynamicObjectSwitchMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean AutoRecoverToDefault; // 0x28
		::System::Boolean IsActive; // 0x29
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* TagList; // 0x30
		::MoleMole::GameplayTag TargetLayerName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void KJPILKEKPEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_KJPILKEKPEJ_OFFSET))(this);
		}
	};
}
