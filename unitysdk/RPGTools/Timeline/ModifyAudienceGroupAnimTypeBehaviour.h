#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class MEFBCOKEFIN;
namespace RPGTools::Timeline { class ModifyAudienceGroupAnimTypeClipConfig; }

#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE90EC90)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE90E820)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_HPOCMHBDCBD_OFFSET UNITYSDK_OFFSET(0xE90EB10)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE90E840)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE90E9D0)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE90E830)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ModifyAudienceGroupAnimTypeBehaviour_TypeDefinitionIndex = 48194;

	class ModifyAudienceGroupAnimTypeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig* _Config_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig* get_Config()
		{
			return ((::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ModifyAudienceGroupAnimTypeClipConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::MEFBCOKEFIN* HPOCMHBDCBD()
		{
			return ((::MEFBCOKEFIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_HPOCMHBDCBD_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPEBEHAVIOUR_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

	};
}
