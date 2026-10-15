#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline::Discussion { class CameraCompositionClip; }
namespace System { class String; }

#define NBHECDPFFNB_BNDNPGJAHCI_OFFSET UNITYSDK_OFFSET(0xBABD6B0)
#define NBHECDPFFNB_BOMLADMCGJJ_OFFSET UNITYSDK_OFFSET(0xBABCCE0)
#define NBHECDPFFNB_CTOR_OFFSET UNITYSDK_OFFSET(0xBABDC80)
#define NBHECDPFFNB_EEILNEJGDBI_OFFSET UNITYSDK_OFFSET(0xBABD300)
#define NBHECDPFFNB_EPLAMACOAKJ_OFFSET UNITYSDK_OFFSET(0xBABD850)
#define NBHECDPFFNB_FOILLOKMKPG_OFFSET UNITYSDK_OFFSET(0xBABDA10)
#define NBHECDPFFNB_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xBABCC30)
#define NBHECDPFFNB_GFLBOIGGEHH_OFFSET UNITYSDK_OFFSET(0xBABCF90)
#define NBHECDPFFNB_KDDCOKGGMKM_OFFSET UNITYSDK_OFFSET(0xBABD150)
#define NBHECDPFFNB_MNHBGJMJLPM_OFFSET UNITYSDK_OFFSET(0xBABD5C0)
#define NBHECDPFFNB_NFNLEMNHJBL_OFFSET UNITYSDK_OFFSET(0xBABD200)
#define NBHECDPFFNB_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xBABCC50)
#define NBHECDPFFNB_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xBABCC40)

inline static constexpr unsigned int NBHECDPFFNB_TypeDefinitionIndex = 48788;

	class NBHECDPFFNB : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Discussion::CameraCompositionClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHECDPFFNB_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Discussion::CameraCompositionClip* get_Clip()
		{
			return ((::RPGTools::Timeline::Discussion::CameraCompositionClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHECDPFFNB_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::Discussion::CameraCompositionClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Discussion::CameraCompositionClip*))((::PBYTE)hIl2Cpp + NBHECDPFFNB_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NBHECDPFFNB_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void BOMLADMCGJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHECDPFFNB_BOMLADMCGJJ_OFFSET))(this);
		}

		::System::Void KDDCOKGGMKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHECDPFFNB_KDDCOKGGMKM_OFFSET))(this);
		}

		::System::Void EEILNEJGDBI(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBHECDPFFNB_EEILNEJGDBI_OFFSET))(this, a1, a2);
		}

		::System::Void EPLAMACOAKJ(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + NBHECDPFFNB_EPLAMACOAKJ_OFFSET))(this, a1);
		}

		::System::Void NFNLEMNHJBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHECDPFFNB_NFNLEMNHJBL_OFFSET))(this);
		}

		::System::Void MNHBGJMJLPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHECDPFFNB_MNHBGJMJLPM_OFFSET))(this);
		}

		::System::Void FOILLOKMKPG(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + NBHECDPFFNB_FOILLOKMKPG_OFFSET))(this, a1);
		}

		::System::Void GFLBOIGGEHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHECDPFFNB_GFLBOIGGEHH_OFFSET))(this);
		}

		::System::Void BNDNPGJAHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHECDPFFNB_BNDNPGJAHCI_OFFSET))(this);
		}

	};
