#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JGNFGDHCNLN_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A4763A0)
#define JGNFGDHCNLN_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x1A476390)
#define JGNFGDHCNLN_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1A476200)
#define JGNFGDHCNLN_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A475EE0)
#define JGNFGDHCNLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A476380)

inline static constexpr unsigned int JGNFGDHCNLN_TypeDefinitionIndex = 92224;

class JGNFGDHCNLN : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Transform* DOMNJANJDPC; // 0x10
	::UnityEngine::GameObject* FABFMLBDALJ; // 0x18
	::UnityEngine::Transform* NAPLEJKDFIB; // 0x20
	::System::Boolean KODCGINPLHK; // 0x28
	::System::Boolean OFJLLMBLGCI; // 0x29
	::System::Boolean LGJBOCIPLKL; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNFGDHCNLN__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + JGNFGDHCNLN_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JGNFGDHCNLN_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JGNFGDHCNLN_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + JGNFGDHCNLN_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
