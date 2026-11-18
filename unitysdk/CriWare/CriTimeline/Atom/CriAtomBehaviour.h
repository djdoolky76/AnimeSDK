#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/CriWare/CriTimeline/Atom/CriAtomClipPlayConfig.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomSourceBase; }
namespace System { class String; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_GETCUELENGTHSEC_OFFSET UNITYSDK_OFFSET(0x20005720)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_GET_CUELENGTH_OFFSET UNITYSDK_OFFSET(0x20005000)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_GET_ISCLIPPLAYING_OFFSET UNITYSDK_OFFSET(0x20004FE0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_GET_PLAYBACK_OFFSET UNITYSDK_OFFSET(0x20004FC0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x20005020)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_PLAY_OFFSET UNITYSDK_OFFSET(0x20005030)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_PREVIEWPLAY_OFFSET UNITYSDK_OFFSET(0x20005790)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_SET_CUELENGTH_OFFSET UNITYSDK_OFFSET(0x20005010)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_SET_ISCLIPPLAYING_OFFSET UNITYSDK_OFFSET(0x20004FF0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_SET_PLAYBACK_OFFSET UNITYSDK_OFFSET(0x20004FD0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_STOP_OFFSET UNITYSDK_OFFSET(0x20005E40)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_WAITANDSTOP_OFFSET UNITYSDK_OFFSET(0x20005DA0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x20005E80)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x20005E70)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR__WAITANDSTOP_B__21_0_OFFSET UNITYSDK_OFFSET(0x20005E90)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomBehaviour_TypeDefinitionIndex = 34588;

	class CriAtomBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Int32* StaticGet_cPreviewStopTimeMs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomBehaviour_TypeDefinitionIndex)->GetStaticField(0x8950);
		}
		::System::Single volume; // 0x10
		::System::Single pitch; // 0x14
		::System::Single AISACValue; // 0x18
		::System::Byte _padding0[0x4];
		::CriWare::CriAtomExAcb* m_acb; // 0x20
		::System::String* m_lastCueSheetPath; // 0x28
		::CriWare::CriAtomExPlayback _playback_k__BackingField; // 0x30
		::System::Boolean _IsClipPlaying; // 0x34
		::System::Byte _padding1[0x3];
		::System::Double _CueLength; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR__CCTOR_OFFSET))();
		}

		::CriWare::CriAtomExPlayback get_playback()
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_GET_PLAYBACK_OFFSET))(this);
		}

		::System::Void set_playback(::CriWare::CriAtomExPlayback value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExPlayback))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_SET_PLAYBACK_OFFSET))(this, value);
		}

		::System::Boolean get_IsClipPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_GET_ISCLIPPLAYING_OFFSET))(this);
		}

		::System::Void set_IsClipPlaying(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_SET_ISCLIPPLAYING_OFFSET))(this, value);
		}

		::System::Double get_CueLength()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_GET_CUELENGTH_OFFSET))(this);
		}

		::System::Void set_CueLength(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_SET_CUELENGTH_OFFSET))(this, value);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, playable);
		}

		::System::Void Play(::CriWare::CriAtomSourceBase* atomSource, ::CriWare::CriTimeline::Atom::CriAtomClipPlayConfig config)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomSourceBase*, ::CriWare::CriTimeline::Atom::CriAtomClipPlayConfig))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_PLAY_OFFSET))(this, atomSource, config);
		}

		::System::Void PreviewPlay(::System::Guid trackId, ::System::Boolean instantStop, ::CriWare::CriTimeline::Atom::CriAtomClipPlayConfig config)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::Boolean, ::CriWare::CriTimeline::Atom::CriAtomClipPlayConfig))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_PREVIEWPLAY_OFFSET))(this, trackId, instantStop, config);
		}

		::System::Void WaitAndStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_WAITANDSTOP_OFFSET))(this);
		}

		::System::Void Stop(::System::Boolean noReleaseTime, ::System::Boolean flagResetOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_STOP_OFFSET))(this, noReleaseTime, flagResetOnly);
		}

		::System::Double GetCueLengthSec(::CriWare::CriAtomExAcb* acb, ::System::String* cueName)
		{
			return ((::System::Double(*)(::PVOID, ::CriWare::CriAtomExAcb*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR_GETCUELENGTHSEC_OFFSET))(this, acb, cueName);
		}

		::System::Void _WaitAndStop_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMBEHAVIOUR__WAITANDSTOP_B__21_0_OFFSET))(this);
		}
	};
}
