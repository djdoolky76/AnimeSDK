#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/IGCLGKCKACE.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace CriWare::CriMana { class MovieInfo; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_AAGOLMDGEBN_OFFSET UNITYSDK_OFFSET(0xE2A53F0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_AOFMBOMAPIM_OFFSET UNITYSDK_OFFSET(0xE2A4900)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CALPFMELCJI_OFFSET UNITYSDK_OFFSET(0xE2A5170)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CEOOBLCFDFA_OFFSET UNITYSDK_OFFSET(0xE2A4CA0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE2A4B50)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A5570)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_DEGFCFFKFOI_OFFSET UNITYSDK_OFFSET(0xE2A5220)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE2A4B40)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xE2A4C40)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_ISMOVIEINFOREADY_OFFSET UNITYSDK_OFFSET(0xE2A53A0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_M_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0xE2A48A0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GHIBPKDKMML_OFFSET UNITYSDK_OFFSET(0xE2A4EE0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_SET_M_MOVIEPATH_OFFSET UNITYSDK_OFFSET(0xE2A4B30)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoClip_TypeDefinitionIndex = 73347;

	class ManaVideoClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Guid guid; // 0x18
		::System::UInt32 m_videoID; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* _moviePath; // 0x30
		::System::Boolean m_loopWithinClip; // 0x38
		::System::Byte _padding1[0x7];
		::System::Double m_movieFrameRate; // 0x40
		::System::Double m_clipDuration; // 0x48
		::System::Single m_fadeinDuration; // 0x50
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* m_fadeinCurve; // 0x58
		::System::Single m_fadeoutDuration; // 0x60
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* m_fadeoutCurve; // 0x68
		::System::Boolean m_fadeAudio; // 0x70
		::System::Byte _padding4[0x7];
		::UnityEngine::Timeline::TimelineClip* m_clip; // 0x78
		::System::Nullable* m_movieInfoStruct; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CTOR_OFFSET))(this);
		}

		::System::String* get_m_moviePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_M_MOVIEPATH_OFFSET))(this);
		}

		::System::Void set_m_moviePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_SET_M_MOVIEPATH_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_DURATION_OFFSET))(this);
		}

		::IGCLGKCKACE CEOOBLCFDFA()
		{
			return ((::IGCLGKCKACE(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CEOOBLCFDFA_OFFSET))(this);
		}

		::System::Void GHIBPKDKMML(::CriWare::CriMana::MovieInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GHIBPKDKMML_OFFSET))(this, a1);
		}

		::System::Boolean DEGFCFFKFOI(::CriWare::CriMana::MovieInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_DEGFCFFKFOI_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMovieInfoReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_GET_ISMOVIEINFOREADY_OFFSET))(this);
		}

		::System::Int32 AAGOLMDGEBN(::System::Double a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_AAGOLMDGEBN_OFFSET))(this, a1, a2);
		}

		::System::Nullable* CALPFMELCJI(::CriWare::CriMana::MovieInfo* a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_CALPFMELCJI_OFFSET))(this, a1);
		}

		::System::Void AOFMBOMAPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOCLIP_AOFMBOMAPIM_OFFSET))(this);
		}

	};
}
