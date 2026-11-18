#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class DFKCHDOOHEE_LIICPEFKGCA;
namespace System { class Object; }

#define DFKCHDOOHEE_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1536EF40)
#define DFKCHDOOHEE_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x1536EF30)
#define DFKCHDOOHEE_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x1536EF20)
#define DFKCHDOOHEE_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1536ED60)
#define DFKCHDOOHEE_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1536EDF0)
#define DFKCHDOOHEE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1536E7A0)
#define DFKCHDOOHEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1536EF10)

inline static constexpr unsigned int DFKCHDOOHEE_TypeDefinitionIndex = 83407;

class DFKCHDOOHEE : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::DFKCHDOOHEE_LIICPEFKGCA* JDKMECAHILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKCHDOOHEE__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
