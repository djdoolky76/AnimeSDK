#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class TextureSheet_TV_WallBehaviour; }
namespace System { class Object; }

#define KFPCLLLINDE_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1633AEE0)
#define KFPCLLLINDE_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x1633AEF0)
#define KFPCLLLINDE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1633A6B0)
#define KFPCLLLINDE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1633A730)
#define KFPCLLLINDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1633AED0)

inline static constexpr unsigned int KFPCLLLINDE_TypeDefinitionIndex = 91111;

class KFPCLLLINDE : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::Boolean* StaticGet_CBHOKHFNOAD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KFPCLLLINDE_TypeDefinitionIndex)->GetStaticField(0x14490);
	}
	::MoleMole::Timeline::TextureSheet_TV_WallBehaviour* LDDJOFHAOHG; // 0x10
	::System::Double JLCKOCEMBPP; // 0x18
	::System::Double PMNLNNGEIFM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPCLLLINDE__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + KFPCLLLINDE_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KFPCLLLINDE_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KFPCLLLINDE_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + KFPCLLLINDE_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
