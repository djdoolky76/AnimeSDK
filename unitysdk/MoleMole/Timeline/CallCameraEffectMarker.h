#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_CallCameraEffect_CallType.h"
#include "unitysdk/MoleMole/Timeline/CallCameraEffectActionType.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x1A09B920)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A09C120)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1A09B910)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x1A09C080)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x1A09C160)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1A09C0D0)
#define MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09C1B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CallCameraEffectMarker_TypeDefinitionIndex = 87316;

	class CallCameraEffectMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::MoleMole::Timeline::CallCameraEffectActionType actionType; // 0x28
		::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType callType; // 0x2C
		::System::Boolean isInterruptType; // 0x30
		::System::Boolean isEndByKey; // 0x31
		::System::Byte _padding0[0x2];
		::MoleMole::Config::ScreenEffectType effectType; // 0x34
		::MoleMole::Config::ShaderCustomType shaderCustomType; // 0x38
		::System::Byte _padding1[0x4];
		::System::String* effectKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_GETDATA_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CALLCAMERAEFFECTMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}
	};
}
