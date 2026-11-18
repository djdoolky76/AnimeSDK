#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class AFMGFPCAPIE_MOKCAEPFFCP;
namespace System { class Object; }

#define AFMGFPCAPIE_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x164737C0)
#define AFMGFPCAPIE_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x164737A0)
#define AFMGFPCAPIE_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x164737B0)
#define AFMGFPCAPIE_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x164736A0)
#define AFMGFPCAPIE_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x16473730)
#define AFMGFPCAPIE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16473140)
#define AFMGFPCAPIE__CTOR_OFFSET UNITYSDK_OFFSET(0x16473790)

inline static constexpr unsigned int AFMGFPCAPIE_TypeDefinitionIndex = 43903;

class AFMGFPCAPIE : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::AFMGFPCAPIE_MOKCAEPFFCP* JDKMECAHILE; // 0x10
	::System::Int32 DLKGNIJLPCG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMGFPCAPIE__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AFMGFPCAPIE_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
