#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace XftWeapon { class XWeaponTrail; }

#define MOOEJKLBGBL_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1078B820)
#define MOOEJKLBGBL_EHLAGJJMEHI_OFFSET UNITYSDK_OFFSET(0x1078B810)
#define MOOEJKLBGBL_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1078B760)
#define MOOEJKLBGBL_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x1078B800)
#define MOOEJKLBGBL_IELLNKFLBMF_OFFSET UNITYSDK_OFFSET(0x1078B7F0)
#define MOOEJKLBGBL_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1078B770)
#define MOOEJKLBGBL_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x1078B7E0)
#define MOOEJKLBGBL_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1078B360)
#define MOOEJKLBGBL_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1078B160)
#define MOOEJKLBGBL_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1078B6F0)
#define MOOEJKLBGBL_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1078B7D0)
#define MOOEJKLBGBL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1078B510)
#define MOOEJKLBGBL_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1078AFC0)
#define MOOEJKLBGBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1078B750)

inline static constexpr unsigned int MOOEJKLBGBL_TypeDefinitionIndex = 53211;

class MOOEJKLBGBL : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single JLJKHPIEGKN; // 0x0
	::UnityEngine::Transform* KMIPCFLFOFP; // 0x10
	::XftWeapon::XWeaponTrail* _IOJGFJEBDHD_k__BackingField; // 0x18
	::System::Boolean NGBLFEKDAFB; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single MOCAGENPHAJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEJKLBGBL__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData LJBPECKCCEA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, LJBPECKCCEA, NEEMKJBIIBC);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void JMDEKPONKMF(::XftWeapon::XWeaponTrail* CKPCDMDEIAB, ::UnityEngine::Transform* GHNIMIANFBF)
	{
		return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_JMDEKPONKMF_OFFSET))(this, CKPCDMDEIAB, GHNIMIANFBF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::XftWeapon::XWeaponTrail* IELLNKFLBMF()
	{
		return ((::XftWeapon::XWeaponTrail*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_IELLNKFLBMF_OFFSET))(this);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void EHLAGJJMEHI(::XftWeapon::XWeaponTrail* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail*))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_EHLAGJJMEHI_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::MOOEJKLBGBL*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::XftWeapon::XWeaponTrail* GBELIHABEDH, ::UnityEngine::Transform* GHNIMIANFBF)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::MOOEJKLBGBL*>(*)(::UnityEngine::Playables::PlayableGraph, ::XftWeapon::XWeaponTrail*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOOEJKLBGBL_COKNIICCODC_OFFSET))(MHPNGBGGMMN, GBELIHABEDH, GHNIMIANFBF);
	}
};
