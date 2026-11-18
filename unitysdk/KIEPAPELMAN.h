#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/VisibilityTrack_PNOIJBBCDOE.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define KIEPAPELMAN_CBFHEGMKFKK_OFFSET UNITYSDK_OFFSET(0x1790BAC0)
#define KIEPAPELMAN_CDIDDOJMNHG_OFFSET UNITYSDK_OFFSET(0x1790BAB0)
#define KIEPAPELMAN_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1790BAF0)
#define KIEPAPELMAN_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1790BAE0)
#define KIEPAPELMAN_HOIJICBODBD_OFFSET UNITYSDK_OFFSET(0x1790B4F0)
#define KIEPAPELMAN_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1790B2A0)
#define KIEPAPELMAN_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1790BAD0)
#define KIEPAPELMAN_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1790B550)
#define KIEPAPELMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1790BAA0)

inline static constexpr unsigned int KIEPAPELMAN_TypeDefinitionIndex = 41429;

class KIEPAPELMAN : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* BJOMHGDKJOM; // 0x10
	::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE ENACBBCLAGC; // 0x18
	::System::Boolean POMGBGJLIOO; // 0x1C
	::System::Boolean FJAGJFPADGG; // 0x1D
	::System::Boolean JOEEDEPAFLK; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEPAPELMAN__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KIEPAPELMAN_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KIEPAPELMAN_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void CDIDDOJMNHG(::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE))((::PBYTE)hIl2Cpp + KIEPAPELMAN_CDIDDOJMNHG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE CBFHEGMKFKK()
	{
		return ((::MoleMole::Timeline::VisibilityTrack_PNOIJBBCDOE(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEPAPELMAN_CBFHEGMKFKK_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KIEPAPELMAN_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KIEPAPELMAN_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void HOIJICBODBD(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Boolean NNJLDLIHINN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + KIEPAPELMAN_HOIJICBODBD_OFFSET))(this, NJOAJLDJCCJ, NNJLDLIHINN);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::KIEPAPELMAN*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Int32 BMHCCJPEFPI)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::KIEPAPELMAN*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + KIEPAPELMAN_COKNIICCODC_OFFSET))(MHPNGBGGMMN, BMHCCJPEFPI);
	}
};
