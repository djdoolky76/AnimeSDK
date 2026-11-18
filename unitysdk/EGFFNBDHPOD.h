#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define EGFFNBDHPOD_CHMMMKMLION_OFFSET UNITYSDK_OFFSET(0x148DC260)
#define EGFFNBDHPOD_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x148DDD70)
#define EGFFNBDHPOD_GOPDNAHIGHC_OFFSET UNITYSDK_OFFSET(0x148DD5F0)
#define EGFFNBDHPOD_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x148DDD60)
#define EGFFNBDHPOD_JECACKFEAMF_OFFSET UNITYSDK_OFFSET(0x148DD8E0)
#define EGFFNBDHPOD_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x148DC7C0)
#define EGFFNBDHPOD_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x148DBF30)
#define EGFFNBDHPOD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x148DC660)
#define EGFFNBDHPOD_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x148DDD80)
#define EGFFNBDHPOD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x148DCE70)
#define EGFFNBDHPOD__CTOR_OFFSET UNITYSDK_OFFSET(0x148DD8A0)

inline static constexpr unsigned int EGFFNBDHPOD_TypeDefinitionIndex = 91910;

class EGFFNBDHPOD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Material* OIJKKAAIBAJ; // 0x10
	::System::Single NPFMIPPGPHM; // 0x18
	::UnityEngine::Color FHOGPGFJKND; // 0x1C
	::UnityEngine::Color GMIPBCKNEFH; // 0x2C
	::System::Single FNNKDGEHBBG; // 0x3C
	::System::Single CKKMDAMEPEG; // 0x40
	::System::Boolean CFOHBHDBDAI; // 0x44
	::System::Boolean DMHICGAMCLF; // 0x45
	::System::Byte _padding0[0x2];
	::System::Single MILNBHHHJPF; // 0x48
	::System::Boolean JODFEIGBNMK; // 0x4C
	::System::Boolean PDGJGLKCBOF; // 0x4D
	::System::Boolean JBMBPMLFJPO; // 0x4E
	::System::Boolean NEDCDEHCFIP; // 0x4F
	::System::Single PFAODFMEMCM; // 0x50
	::UnityEngine::Color LNPGDKMKKIB; // 0x54
	::System::Single GDLGEJPGCLB; // 0x64
	::System::Single AGDDJPNAHHL; // 0x68
	::System::Single HHGILNNMNAK; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFFNBDHPOD__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void JECACKFEAMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_JECACKFEAMF_OFFSET))(this);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::UnityEngine::Material* GOPDNAHIGHC(::System::Object* NEEMKJBIIBC)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_GOPDNAHIGHC_OFFSET))(this, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean AKFLHEBLBOB, ::UnityEngine::Color JBBFCGAMDHI, ::UnityEngine::Color LEHCHLFIGIN, ::UnityEngine::Color FHNBAKDCBGG, ::System::Boolean FHLCMFCOFAH, ::System::Single DDJMFALDDPH, ::System::Single ADCAIMLJCFD, ::System::Single GAKHGIALNIP, ::System::Single NKHAHDMLFLN, ::System::Single JPIPHCNAEOC, ::System::Single GJKAELJLIKP, ::System::Single JCFNADPEIOM, ::System::Single EGEGIMGMJHN, ::System::Boolean PAGAMGOJPIO, ::System::Boolean IPNEDCCNJNK, ::System::Boolean KHFOOHDFHGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_ODLBLHOKABA_OFFSET))(this, AKFLHEBLBOB, JBBFCGAMDHI, LEHCHLFIGIN, FHNBAKDCBGG, FHLCMFCOFAH, DDJMFALDDPH, ADCAIMLJCFD, GAKHGIALNIP, NKHAHDMLFLN, JPIPHCNAEOC, GJKAELJLIKP, JCFNADPEIOM, EGEGIMGMJHN, PAGAMGOJPIO, IPNEDCCNJNK, KHFOOHDFHGL);
	}

	::System::Void CHMMMKMLION(::UnityEngine::Renderer* OCFHGOGFGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_CHMMMKMLION_OFFSET))(this, OCFHGOGFGPE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EGFFNBDHPOD_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
