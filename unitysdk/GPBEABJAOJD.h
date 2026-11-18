#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole { class MonoEffectPluginFade; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define GPBEABJAOJD_CCAGLBAMDHG_OFFSET UNITYSDK_OFFSET(0x15B341E0)
#define GPBEABJAOJD_CNPCIEIMJKH_OFFSET UNITYSDK_OFFSET(0x15B34A60)
#define GPBEABJAOJD_DGKAEEEJGAM_OFFSET UNITYSDK_OFFSET(0x15B34A70)
#define GPBEABJAOJD_ECONECLIJAK_OFFSET UNITYSDK_OFFSET(0x15B34A80)
#define GPBEABJAOJD_FIBFJDPGJBA_OFFSET UNITYSDK_OFFSET(0x15B34420)
#define GPBEABJAOJD_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15B34A30)
#define GPBEABJAOJD_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x15B34A90)
#define GPBEABJAOJD_HMGENFOBIPB_OFFSET UNITYSDK_OFFSET(0x15B34A10)
#define GPBEABJAOJD_IFMBGAEGDFH_OFFSET UNITYSDK_OFFSET(0x15B34A20)
#define GPBEABJAOJD_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x15B34A00)
#define GPBEABJAOJD_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x15B34A50)
#define GPBEABJAOJD_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x15B34270)
#define GPBEABJAOJD_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15B340D0)
#define GPBEABJAOJD_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x15B343B0)
#define GPBEABJAOJD_OPACCABAALO_OFFSET UNITYSDK_OFFSET(0x15B33D70)
#define GPBEABJAOJD_PHNJHHLNJGH_OFFSET UNITYSDK_OFFSET(0x15B34A40)
#define GPBEABJAOJD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15B339E0)
#define GPBEABJAOJD__CTOR_OFFSET UNITYSDK_OFFSET(0x15B34400)

inline static constexpr unsigned int GPBEABJAOJD_TypeDefinitionIndex = 72206;

class GPBEABJAOJD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single JLJKHPIEGKN; // 0x0
	::MoleMole::Timeline::ZNetEffectPlayableAsset* NAOHKPAEHLI; // 0x10
	::UnityEngine::GameObject* JPEOLNGMJGF; // 0x18
	::MoleMole::MonoEffectPluginFade* _FHDGMOEMDBC_k__BackingField; // 0x20
	::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower* FCCBGCGDAJL; // 0x28
	::Il2CppArray<::UnityEngine::ParticleSystem*>* LOHNKAOCMHI; // 0x30
	::MoleMole::EffectSimulate::NapEffectSimulatorMgr* _JODCCIDOAEO_k__BackingField; // 0x38
	::System::Boolean IEGLHAKJBOJ; // 0x40
	::System::Byte _padding0[0x3];
	::System::Single MJHJDFKCGIA; // 0x44
	::System::Single PHMJPBAHFKL; // 0x48
	::System::Single MOCAGENPHAJ; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBEABJAOJD__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GPBEABJAOJD_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + GPBEABJAOJD_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + GPBEABJAOJD_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GPBEABJAOJD_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OPACCABAALO(::System::Single HIIOCANBKAM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPBEABJAOJD_OPACCABAALO_OFFSET))(this, HIIOCANBKAM);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + GPBEABJAOJD_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::UnityEngine::GameObject* HMGENFOBIPB()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBEABJAOJD_HMGENFOBIPB_OFFSET))(this);
	}

	::MoleMole::MonoEffectPluginFade* IFMBGAEGDFH()
	{
		return ((::MoleMole::MonoEffectPluginFade*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBEABJAOJD_IFMBGAEGDFH_OFFSET))(this);
	}

	::System::Void CCAGLBAMDHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBEABJAOJD_CCAGLBAMDHG_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GPBEABJAOJD_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PHNJHHLNJGH(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + GPBEABJAOJD_PHNJHHLNJGH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GPBEABJAOJD_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CNPCIEIMJKH(::MoleMole::MonoEffectPluginFade* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginFade*))((::PBYTE)hIl2Cpp + GPBEABJAOJD_CNPCIEIMJKH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DGKAEEEJGAM(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GPBEABJAOJD_DGKAEEEJGAM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FIBFJDPGJBA(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPBEABJAOJD_FIBFJDPGJBA_OFFSET))(this, PBCAAADNEPK);
	}

	::MoleMole::EffectSimulate::NapEffectSimulatorMgr* ECONECLIJAK()
	{
		return ((::MoleMole::EffectSimulate::NapEffectSimulatorMgr*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBEABJAOJD_ECONECLIJAK_OFFSET))(this);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + GPBEABJAOJD_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
