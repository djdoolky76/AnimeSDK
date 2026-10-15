#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }

#define MBAHICFBFHL_BJFHIAFJHEE_OFFSET UNITYSDK_OFFSET(0xB851720)
#define MBAHICFBFHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB8519E0)
#define MBAHICFBFHL_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xB8514F0)
#define MBAHICFBFHL_FBNOJIGHEPK_OFFSET UNITYSDK_OFFSET(0xB851950)
#define MBAHICFBFHL_KNOOJOPJGNC_OFFSET UNITYSDK_OFFSET(0xB851540)
#define MBAHICFBFHL_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB851140)
#define MBAHICFBFHL_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB851480)
#define MBAHICFBFHL_PJMACJOJFDJ_OFFSET UNITYSDK_OFFSET(0xB8511E0)

inline static constexpr unsigned int MBAHICFBFHL_TypeDefinitionIndex = 48346;

	class MBAHICFBFHL : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPG::Client::EnvironmentSystem* MFOEHEOIOEK; // 0x18
		::System::Boolean HNDIKCIBJGF; // 0x20
		::System::Boolean FBKELJMHPDB; // 0x21
		::System::Boolean KPBDDGEOGDC; // 0x22
		::System::Boolean BFPOMNCDOMF; // 0x23
		::System::Int32 ODAOIMBLPEK; // 0x24
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
