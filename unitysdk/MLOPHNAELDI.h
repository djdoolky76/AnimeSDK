#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace NPCCrowd::Lod { class NPCCrowdPositionAgent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLOPHNAELDI_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x11F5B420)
#define MLOPHNAELDI_GNEOLMGJKCL_OFFSET UNITYSDK_OFFSET(0x11F5B260)
#define MLOPHNAELDI_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11F5ABF0)
#define MLOPHNAELDI__CTOR_OFFSET UNITYSDK_OFFSET(0x11F5B390)

inline static constexpr unsigned int MLOPHNAELDI_TypeDefinitionIndex = 75822;

class MLOPHNAELDI : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Lod::NPCCrowdPositionAgent*>* BFMLIBPJJLO; // 0x10
	::System::Boolean EFIGOMMMILN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOPHNAELDI__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MLOPHNAELDI_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MLOPHNAELDI_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void GNEOLMGJKCL(::NPCCrowd::Lod::NPCCrowdPositionAgent* MGLGFCPOIEM, ::System::Boolean LGPDEIDDJBB)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdPositionAgent*, ::System::Boolean))((::PBYTE)hIl2Cpp + MLOPHNAELDI_GNEOLMGJKCL_OFFSET))(this, MGLGFCPOIEM, LGPDEIDDJBB);
	}
};
