#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }

#define MBAHICFBFHL_BJFHIAFJHEE_OFFSET UNITYSDK_OFFSET(0xB857F60)
#define MBAHICFBFHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB858220)
#define MBAHICFBFHL_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xB857D30)
#define MBAHICFBFHL_FBNOJIGHEPK_OFFSET UNITYSDK_OFFSET(0xB858190)
#define MBAHICFBFHL_KNOOJOPJGNC_OFFSET UNITYSDK_OFFSET(0xB857D80)
#define MBAHICFBFHL_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB857980)
#define MBAHICFBFHL_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB857CC0)
#define MBAHICFBFHL_PJMACJOJFDJ_OFFSET UNITYSDK_OFFSET(0xB857A20)

	class MBAHICFBFHL : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPG::Client::EnvironmentSystem* MFOEHEOIOEK; // 0x18
		::System::Int32 ODAOIMBLPEK; // 0x20
		::System::Boolean FBKELJMHPDB; // 0x24
		::System::Boolean BFPOMNCDOMF; // 0x25
		::System::Boolean KPBDDGEOGDC; // 0x26
		::System::Boolean HNDIKCIBJGF; // 0x27
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MBAHICFBFHL_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MBAHICFBFHL_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_FBICIDBOIFE_OFFSET))(this);
		}

		::System::Void PJMACJOJFDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_PJMACJOJFDJ_OFFSET))(this);
		}

		::System::Void BJFHIAFJHEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_BJFHIAFJHEE_OFFSET))(this);
		}

		::System::Void KNOOJOPJGNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_KNOOJOPJGNC_OFFSET))(this);
		}

		::System::Void FBNOJIGHEPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHICFBFHL_FBNOJIGHEPK_OFFSET))(this);
		}

	};
