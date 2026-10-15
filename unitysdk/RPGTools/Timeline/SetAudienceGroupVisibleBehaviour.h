#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class MEFBCOKEFIN;
namespace RPGTools::Timeline { class SetAudienceGroupVisibleClipConfig; }

#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE92BA50)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE92B5E0)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_HPOCMHBDCBD_OFFSET UNITYSDK_OFFSET(0xE92B8D0)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE92B600)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE92B790)
#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE92B5F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetAudienceGroupVisibleBehaviour_TypeDefinitionIndex = 48273;

	class SetAudienceGroupVisibleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig* _Config_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig* get_Config()
		{
			return ((::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::SetAudienceGroupVisibleClipConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::MEFBCOKEFIN* HPOCMHBDCBD()
		{
			return ((::MEFBCOKEFIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_HPOCMHBDCBD_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLEBEHAVIOUR_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

	};
}
