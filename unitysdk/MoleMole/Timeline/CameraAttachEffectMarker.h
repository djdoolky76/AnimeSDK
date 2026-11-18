#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x124A0C60)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x124A1580)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x124A15C0)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x124A12B0)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x124A15D0)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x124A1530)
#define MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x124A1620)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraAttachEffectMarker_TypeDefinitionIndex = 78615;

	class CameraAttachEffectMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* effectKey; // 0x28
		::System::Boolean IsClose; // 0x30
		::System::Byte _padding0[0x7];
		::MoleMole::Battle::Entity* _effEntity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAATTACHEFFECTMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}
	};
}
