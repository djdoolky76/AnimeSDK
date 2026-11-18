#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class LoopSubdivisionDataHolderParams; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define HCALDDOFFFK_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x149F9E10)
#define HCALDDOFFFK_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x149F9480)
#define HCALDDOFFFK_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x149F9E20)
#define HCALDDOFFFK_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x149F9550)
#define HCALDDOFFFK__CTOR_OFFSET UNITYSDK_OFFSET(0x149F9D30)

inline static constexpr unsigned int HCALDDOFFFK_TypeDefinitionIndex = 78182;

class HCALDDOFFFK : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::LoopSubdivisionDataHolderParams* AHECJBACEDB; // 0x10
	::MoleMole::Timeline::LoopSubdivisionDataHolderParams* FIKGOBEAEKA; // 0x18
	::UnityEngine::GameObject* FLLOABBIFHO; // 0x20
	::System::Boolean JODFEIGBNMK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCALDDOFFFK__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HCALDDOFFFK_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HCALDDOFFFK_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HCALDDOFFFK_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HCALDDOFFFK_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
