#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_CPLDHGLCCBB_OFFSET UNITYSDK_OFFSET(0x15AD96B0)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x15AD95B0)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x15AD9BE0)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x15AD9C20)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x15AD9B40)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x15AD9C30)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x15AD9B90)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD9C80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EntityAnimatorParamMarker_TypeDefinitionIndex = 45445;

	class EntityAnimatorParamMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* EntityTag; // 0x28
		::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE AnimCtrlParamType; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* paramName; // 0x38
		::System::Boolean booleanValue; // 0x40
		::System::Byte _padding1[0x3];
		::System::Int32 intValue; // 0x44
		::System::Single floatValue; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void CPLDHGLCCBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_CPLDHGLCCBB_OFFSET))(this);
		}
	};
}
