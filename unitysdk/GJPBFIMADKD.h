#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define GJPBFIMADKD_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14CF3890)
#define GJPBFIMADKD_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x14CF3B90)
#define GJPBFIMADKD_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x14CF3B40)
#define GJPBFIMADKD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14CF36E0)
#define GJPBFIMADKD__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF3880)

inline static constexpr unsigned int GJPBFIMADKD_TypeDefinitionIndex = 56965;

class GJPBFIMADKD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* GEKKHENGLMC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBFIMADKD__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GJPBFIMADKD_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::GJPBFIMADKD*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::GJPBFIMADKD*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GJPBFIMADKD_COKNIICCODC_OFFSET))(MHPNGBGGMMN, NJOAJLDJCCJ);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GJPBFIMADKD_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void JMDEKPONKMF(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GJPBFIMADKD_JMDEKPONKMF_OFFSET))(this, NJOAJLDJCCJ);
	}
};
