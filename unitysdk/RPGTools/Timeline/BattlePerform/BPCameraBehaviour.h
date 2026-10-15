#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace RPGTools::Timeline::BattlePerform { class BPCameraConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_ANGALAPEPCJ_OFFSET UNITYSDK_OFFSET(0xE8B58B0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE8B5160)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B5B90)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_EPLAMACOAKJ_OFFSET UNITYSDK_OFFSET(0xE8B59C0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_FMOJOIGMNPD_OFFSET UNITYSDK_OFFSET(0xE8B5690)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE8B5140)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE8B5150)

namespace RPGTools::Timeline::BattlePerform
{
	class BPCameraBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCameraConfig* _Config_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BattlePerform::BPCameraConfig* get_Config()
		{
			return ((::RPGTools::Timeline::BattlePerform::BPCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::BattlePerform::BPCameraConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCameraConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void EPLAMACOAKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_EPLAMACOAKJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* FMOJOIGMNPD(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_FMOJOIGMNPD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* ANGALAPEPCJ(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERABEHAVIOUR_ANGALAPEPCJ_OFFSET))(this, a1, a2);
		}

	};
}
