#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/KNOHFGCKLFA.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JCADHFOKIHK;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_AbilityScriptParm; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_FollowControl; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define NDLBAINIIMB_AOJJEFKIIEN_OFFSET UNITYSDK_OFFSET(0x120F7220)
#define NDLBAINIIMB_BDIKIOFLPAI_OFFSET UNITYSDK_OFFSET(0x120F9690)
#define NDLBAINIIMB_CBAIADCGFDD_OFFSET UNITYSDK_OFFSET(0x120F9A80)
#define NDLBAINIIMB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x120F6BD0)
#define NDLBAINIIMB_ENMGAJGMCFA_OFFSET UNITYSDK_OFFSET(0x120F8B50)
#define NDLBAINIIMB_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x120F8B40)
#define NDLBAINIIMB_GIKBEDGNOBK_OFFSET UNITYSDK_OFFSET(0x120F97E0)
#define NDLBAINIIMB_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x120F7F40)
#define NDLBAINIIMB_JFHPOCCBPPO_OFFSET UNITYSDK_OFFSET(0x120F9AB0)
#define NDLBAINIIMB_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x120F6EA0)
#define NDLBAINIIMB_LPIAMCELIJF_OFFSET UNITYSDK_OFFSET(0x120F7390)
#define NDLBAINIIMB_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x120F9AA0)
#define NDLBAINIIMB_NLMDPCMNGIM_OFFSET UNITYSDK_OFFSET(0x120F7F50)
#define NDLBAINIIMB_NPCIDIBIOLE_OFFSET UNITYSDK_OFFSET(0x120F7210)
#define NDLBAINIIMB_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x120F6B30)
#define NDLBAINIIMB_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x120F6AB0)
#define NDLBAINIIMB_OPOFHBIJILO_OFFSET UNITYSDK_OFFSET(0x120F6880)
#define NDLBAINIIMB_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x120F60E0)
#define NDLBAINIIMB__CTOR_OFFSET UNITYSDK_OFFSET(0x120F6BB0)

inline static constexpr unsigned int NDLBAINIIMB_TypeDefinitionIndex = 91960;

class NDLBAINIIMB : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single JLJKHPIEGKN; // 0x0
	::MoleMole::Timeline::ZNetEffectPlayableAsset* PJGHGMCBEFD; // 0x10
	::UnityEngine::GameObject* EMBECAPHGKH; // 0x18
	::UnityEngine::ParticleSystem* _KLGOLGGHHLB_k__BackingField; // 0x20
	::System::Boolean ILPJNEJMALG; // 0x28
	::System::Byte _padding0[0x3];
	::System::UInt32 FDGNOKOKENN; // 0x2C
	::System::Single BALEJLNFOME; // 0x30
	::System::Single MOCAGENPHAJ; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBAINIIMB__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData LJBPECKCCEA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NDLBAINIIMB_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, LJBPECKCCEA, NEEMKJBIIBC);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NDLBAINIIMB_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NDLBAINIIMB_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::NDLBAINIIMB*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* MHHIBHLEKHO, ::UnityEngine::ParticleSystem* GBELIHABEDH, ::System::Boolean HDMOIBMJNIC, ::System::UInt32 LOPMOALAPNE, ::MoleMole::Timeline::ZNetEffectPlayableAsset* NGLKIKLLLFL)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::NDLBAINIIMB*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::ParticleSystem*, ::System::Boolean, ::System::UInt32, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + NDLBAINIIMB_COKNIICCODC_OFFSET))(MHPNGBGGMMN, MHHIBHLEKHO, GBELIHABEDH, HDMOIBMJNIC, LOPMOALAPNE, NGLKIKLLLFL);
	}

	::UnityEngine::ParticleSystem* NPCIDIBIOLE()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBAINIIMB_NPCIDIBIOLE_OFFSET))(this);
	}

	::System::Void OPOFHBIJILO(::UnityEngine::Transform* OBFGKBMEMLB, ::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm* KFCJGKIAJKN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm*))((::PBYTE)hIl2Cpp + NDLBAINIIMB_OPOFHBIJILO_OFFSET))(this, OBFGKBMEMLB, KFCJGKIAJKN);
	}

	::System::Boolean LPIAMCELIJF(::UnityEngine::Transform* KMEPLIJMDHG, ::MoleMole::Config::ConfigPosRot* KFOFHPDNMCA, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Quaternion DAFDMLMACJK, ::KNOHFGCKLFA MOPLLELIABE, ::LFGBJHCEJID& NAMKHHBACEC, ::UnityEngine::Vector3 ELGGJGEFPMC, ::System::Boolean EOKAEAOPCBB, ::System::Boolean EAJOAMJKADF, ::System::Boolean DGBNMPIMLIK, ::System::Boolean EEMBPAHJPNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Config::ConfigPosRot*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::KNOHFGCKLFA, ::LFGBJHCEJID&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NDLBAINIIMB_LPIAMCELIJF_OFFSET))(this, KMEPLIJMDHG, KFOFHPDNMCA, IACKHFCLPJI, DAFDMLMACJK, MOPLLELIABE, NAMKHHBACEC, ELGGJGEFPMC, EOKAEAOPCBB, EAJOAMJKADF, DGBNMPIMLIK, EEMBPAHJPNL);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NDLBAINIIMB_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Void NLMDPCMNGIM(::UnityEngine::Transform* OBFGKBMEMLB, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl* JALDLCGFOKA, ::UnityEngine::Transform* CCFOEPIAHON, ::UnityEngine::Transform* MMJGCBNFMIE)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NDLBAINIIMB_NLMDPCMNGIM_OFFSET))(OBFGKBMEMLB, JALDLCGFOKA, CCFOEPIAHON, MMJGCBNFMIE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NDLBAINIIMB_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::System::Void ENMGAJGMCFA(::UnityEngine::Transform* OBFGKBMEMLB, ::MoleMole::Timeline::ZNetEffectPlayableAsset* CCBONCGCNMH, ::UnityEngine::Transform* CCFOEPIAHON, ::UnityEngine::Transform* MMJGCBNFMIE, ::System::Boolean OMEEKONKHBD, ::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm* KFCJGKIAJKN, ::System::Single INFBOGLAJAE)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm*, ::System::Single))((::PBYTE)hIl2Cpp + NDLBAINIIMB_ENMGAJGMCFA_OFFSET))(OBFGKBMEMLB, CCBONCGCNMH, CCFOEPIAHON, MMJGCBNFMIE, OMEEKONKHBD, KFCJGKIAJKN, INFBOGLAJAE);
	}

	::System::Void JMDEKPONKMF(::UnityEngine::GameObject* MHHIBHLEKHO, ::UnityEngine::ParticleSystem* OMLGMJACMAB, ::System::Boolean HDMOIBMJNIC, ::System::UInt32 LOPMOALAPNE, ::MoleMole::Timeline::ZNetEffectPlayableAsset* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::ParticleSystem*, ::System::Boolean, ::System::UInt32, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + NDLBAINIIMB_JMDEKPONKMF_OFFSET))(this, MHHIBHLEKHO, OMLGMJACMAB, HDMOIBMJNIC, LOPMOALAPNE, NGLKIKLLLFL);
	}

	::System::Void BDIKIOFLPAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBAINIIMB_BDIKIOFLPAI_OFFSET))(this);
	}

	::System::Boolean AOJJEFKIIEN(::UnityEngine::Transform* KMEPLIJMDHG, ::MoleMole::Config::ConfigPosRot* JMKFFMEAIEP, ::LFGBJHCEJID& NAMKHHBACEC, ::System::Boolean EEMBPAHJPNL, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Config::ConfigPosRot*, ::LFGBJHCEJID&, ::System::Boolean, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + NDLBAINIIMB_AOJJEFKIIEN_OFFSET))(this, KMEPLIJMDHG, JMKFFMEAIEP, NAMKHHBACEC, EEMBPAHJPNL, KADBFNFHENH);
	}

	::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl* CBAIADCGFDD()
	{
		return ((::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBAINIIMB_CBAIADCGFDD_OFFSET))(this);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NDLBAINIIMB_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JFHPOCCBPPO(::UnityEngine::ParticleSystem* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + NDLBAINIIMB_JFHPOCCBPPO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GIKBEDGNOBK(::UnityEngine::Transform* KMEPLIJMDHG, ::MoleMole::Config::ConfigPosRot* KFOFHPDNMCA, ::LFGBJHCEJID& NAMKHHBACEC, ::UnityEngine::Vector3 ELGGJGEFPMC, ::System::Boolean EOKAEAOPCBB, ::System::Boolean DGBNMPIMLIK, ::System::Boolean EEMBPAHJPNL, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Config::ConfigPosRot*, ::LFGBJHCEJID&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + NDLBAINIIMB_GIKBEDGNOBK_OFFSET))(this, KMEPLIJMDHG, KFOFHPDNMCA, NAMKHHBACEC, ELGGJGEFPMC, EOKAEAOPCBB, DGBNMPIMLIK, EEMBPAHJPNL, KADBFNFHENH);
	}
};
