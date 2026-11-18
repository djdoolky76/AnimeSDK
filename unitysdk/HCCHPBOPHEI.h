#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define HCCHPBOPHEI_CHMMMKMLION_OFFSET UNITYSDK_OFFSET(0x181746A0)
#define HCCHPBOPHEI_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x181759D0)
#define HCCHPBOPHEI_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x181759E0)
#define HCCHPBOPHEI_JECACKFEAMF_OFFSET UNITYSDK_OFFSET(0x18175A00)
#define HCCHPBOPHEI_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x18174BE0)
#define HCCHPBOPHEI_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x18174370)
#define HCCHPBOPHEI_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18174A80)
#define HCCHPBOPHEI_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x181759F0)
#define HCCHPBOPHEI_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x181752F0)
#define HCCHPBOPHEI__CTOR_OFFSET UNITYSDK_OFFSET(0x18175980)

inline static constexpr unsigned int HCCHPBOPHEI_TypeDefinitionIndex = 69830;

class HCCHPBOPHEI : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::UnityEngine::Material*>* KCOIBHLNIBP; // 0x10
	::System::Boolean PDGJGLKCBOF; // 0x18
	::System::Boolean NEDCDEHCFIP; // 0x19
	::System::Byte _padding0[0x2];
	::System::Single PFAODFMEMCM; // 0x1C
	::UnityEngine::Color LNPGDKMKKIB; // 0x20
	::System::Single MILNBHHHJPF; // 0x30
	::System::Boolean JBMBPMLFJPO; // 0x34
	::System::Boolean JODFEIGBNMK; // 0x35
	::System::Boolean DMHICGAMCLF; // 0x36
	::System::Boolean CFOHBHDBDAI; // 0x37
	::System::Single FNNKDGEHBBG; // 0x38
	::UnityEngine::Color FHOGPGFJKND; // 0x3C
	::System::Single HHGILNNMNAK; // 0x4C
	::UnityEngine::Color GMIPBCKNEFH; // 0x50
	::System::Single NPFMIPPGPHM; // 0x60
	::System::Single CKKMDAMEPEG; // 0x64
	::System::Single AGDDJPNAHHL; // 0x68
	::System::Single GDLGEJPGCLB; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCHPBOPHEI__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HCCHPBOPHEI_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HCCHPBOPHEI_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HCCHPBOPHEI_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HCCHPBOPHEI_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ODLBLHOKABA(::System::Boolean AKFLHEBLBOB, ::UnityEngine::Color JBBFCGAMDHI, ::UnityEngine::Color LEHCHLFIGIN, ::UnityEngine::Color FHNBAKDCBGG, ::System::Boolean FHLCMFCOFAH, ::System::Single DDJMFALDDPH, ::System::Single ADCAIMLJCFD, ::System::Single GAKHGIALNIP, ::System::Single NKHAHDMLFLN, ::System::Single JPIPHCNAEOC, ::System::Single GJKAELJLIKP, ::System::Single JCFNADPEIOM, ::System::Single EGEGIMGMJHN, ::System::Boolean PAGAMGOJPIO, ::System::Boolean IPNEDCCNJNK, ::System::Boolean KHFOOHDFHGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HCCHPBOPHEI_ODLBLHOKABA_OFFSET))(this, AKFLHEBLBOB, JBBFCGAMDHI, LEHCHLFIGIN, FHNBAKDCBGG, FHLCMFCOFAH, DDJMFALDDPH, ADCAIMLJCFD, GAKHGIALNIP, NKHAHDMLFLN, JPIPHCNAEOC, GJKAELJLIKP, JCFNADPEIOM, EGEGIMGMJHN, PAGAMGOJPIO, IPNEDCCNJNK, KHFOOHDFHGL);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HCCHPBOPHEI_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HCCHPBOPHEI_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CHMMMKMLION(::Il2CppArray<::UnityEngine::MeshRenderer*>* AEPONOJONAA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::MeshRenderer*>*))((::PBYTE)hIl2Cpp + HCCHPBOPHEI_CHMMMKMLION_OFFSET))(this, AEPONOJONAA);
	}

	::System::Void JECACKFEAMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCHPBOPHEI_JECACKFEAMF_OFFSET))(this);
	}
};
