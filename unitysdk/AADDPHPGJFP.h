#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define AADDPHPGJFP_CHMMMKMLION_OFFSET UNITYSDK_OFFSET(0x16FD0330)
#define AADDPHPGJFP_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x16FD04C0)
#define AADDPHPGJFP_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x16FD06B0)
#define AADDPHPGJFP_JECACKFEAMF_OFFSET UNITYSDK_OFFSET(0x16FD04D0)
#define AADDPHPGJFP_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x16FCFC60)
#define AADDPHPGJFP_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x16FCFB70)
#define AADDPHPGJFP_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16FCFBF0)
#define AADDPHPGJFP_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x16FD06C0)
#define AADDPHPGJFP_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16FCFF00)
#define AADDPHPGJFP__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD04B0)

inline static constexpr unsigned int AADDPHPGJFP_TypeDefinitionIndex = 50655;

class AADDPHPGJFP : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::UnityEngine::Material*>* KCOIBHLNIBP; // 0x10
	::System::Boolean JODFEIGBNMK; // 0x18
	::System::Boolean CFOHBHDBDAI; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADDPHPGJFP__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AADDPHPGJFP_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AADDPHPGJFP_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AADDPHPGJFP_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AADDPHPGJFP_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void CHMMMKMLION(::UnityEngine::SkinnedMeshRenderer* OCFHGOGFGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + AADDPHPGJFP_CHMMMKMLION_OFFSET))(this, OCFHGOGFGPE);
	}

	::System::Void JECACKFEAMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADDPHPGJFP_JECACKFEAMF_OFFSET))(this);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + AADDPHPGJFP_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AADDPHPGJFP_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean IPNEDCCNJNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AADDPHPGJFP_ODLBLHOKABA_OFFSET))(this, IPNEDCCNJNK);
	}
};
