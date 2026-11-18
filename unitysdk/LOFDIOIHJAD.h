#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define LOFDIOIHJAD_BKNOFBFABJG_OFFSET UNITYSDK_OFFSET(0x17CF5FF0)
#define LOFDIOIHJAD_FAAEEAKGEBI_OFFSET UNITYSDK_OFFSET(0x17CF6370)
#define LOFDIOIHJAD_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x17CF68A0)
#define LOFDIOIHJAD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17CF64A0)
#define LOFDIOIHJAD_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x17CF6890)
#define LOFDIOIHJAD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17CF49B0)
#define LOFDIOIHJAD__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF6830)

inline static constexpr unsigned int LOFDIOIHJAD_TypeDefinitionIndex = 87493;

class LOFDIOIHJAD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Cinemachine::CinemachineTransposer* BGAKHFCBMPP; // 0x10
	::Cinemachine::CinemachineComposer* AGNDLMJKJNE; // 0x18
	::UnityEngine::Transform* AMNAJOAJBCG; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* EPGFPONANLF; // 0x28
	::UnityEngine::Transform* JDPOGKFIHCA; // 0x30
	::Cinemachine::CinemachineVirtualCamera* INDILHFMLFK; // 0x38
	::UnityEngine::Vector3 PIFBLMNOHDN; // 0x40
	::UnityEngine::Vector3 ANBFMHPCBCN; // 0x4C
	::System::Boolean BMDCFIENDJK; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFDIOIHJAD__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LOFDIOIHJAD_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LOFDIOIHJAD_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LOFDIOIHJAD_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Single FAAEEAKGEBI(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Double INFBOGLAJAE)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Double))((::PBYTE)hIl2Cpp + LOFDIOIHJAD_FAAEEAKGEBI_OFFSET))(FAJHPKBELMF, INFBOGLAJAE);
	}

	::System::Void BKNOFBFABJG(::Cinemachine::CinemachineComposer* AGNDLMJKJNE, ::Cinemachine::CinemachineTransposer* BGAKHFCBMPP)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineComposer*, ::Cinemachine::CinemachineTransposer*))((::PBYTE)hIl2Cpp + LOFDIOIHJAD_BKNOFBFABJG_OFFSET))(this, AGNDLMJKJNE, BGAKHFCBMPP);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LOFDIOIHJAD_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
