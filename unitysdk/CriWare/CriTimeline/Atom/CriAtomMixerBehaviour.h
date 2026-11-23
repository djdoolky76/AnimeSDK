#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/FA1EDF0909FD0302/AABCC3E8F3F5A94A.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"

namespace CriWare { class CriAtomListener; }
namespace CriWare { class CriAtomSourceBase; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_GET_M_GUID_OFFSET UNITYSDK_OFFSET(0x2461620)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x2A9EF20)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x2A9EFC0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x2A9F000)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x2A9F030)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_SET_M_GUID_OFFSET UNITYSDK_OFFSET(0x2461660)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomMixerBehaviour_TypeDefinitionIndex = 19139;

	class CriAtomMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* m_Director; // 0x10
		::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* m_Clips; // 0x18
		::CriWare::CriAtomSourceBase* m_Bind; // 0x20
		::System::String* m_AisacControls; // 0x28
		::System::Boolean m_StopOnWrapping; // 0x30
		::System::Boolean m_StopAtGraphEnd; // 0x31
		::System::Boolean m_ApplyPlayableSpeed; // 0x32
		::System::Boolean m_CheckPosWithinClip; // 0x33
		::System::Guid _m_Guid_k__BackingField; // 0x34
		::System::Byte _padding0[0x4];
		::System::DateTime m_lastScrubTime; // 0x48
		::System::Double m_lastDirectorTime; // 0x50
		::CriWare::CriAtomListener* previewSelectedListenerObj; // 0x58

		::System::Void OnPlayableDestroy(::FA1EDF0909FD0302::AE42330449B9EF25 F9739C01C3FB65CA)
		{
			return ((::System::Void(*)(::PVOID, ::FA1EDF0909FD0302::AE42330449B9EF25))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, F9739C01C3FB65CA);
		}

		::System::Void OnPlayableCreate(::FA1EDF0909FD0302::AE42330449B9EF25 F9739C01C3FB65CA)
		{
			return ((::System::Void(*)(::PVOID, ::FA1EDF0909FD0302::AE42330449B9EF25))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, F9739C01C3FB65CA);
		}

		static ::System::Boolean get_IsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_GET_ISEDITOR_OFFSET))();
		}

		::System::Void set_m_Guid(::System::Guid E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_SET_M_GUID_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void ProcessFrame(::FA1EDF0909FD0302::AE42330449B9EF25 F9739C01C3FB65CA, ::FA1EDF0909FD0302::AABCC3E8F3F5A94A B29880F033C1F232, ::System::Object* F3672C6B60E766AB)
		{
			return ((::System::Void(*)(::PVOID, ::FA1EDF0909FD0302::AE42330449B9EF25, ::FA1EDF0909FD0302::AABCC3E8F3F5A94A, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, F9739C01C3FB65CA, B29880F033C1F232, F3672C6B60E766AB);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Guid get_m_Guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_GET_M_GUID_OFFSET))(this);
		}

		::System::Void OnGraphStop(::FA1EDF0909FD0302::AE42330449B9EF25 F9739C01C3FB65CA)
		{
			return ((::System::Void(*)(::PVOID, ::FA1EDF0909FD0302::AE42330449B9EF25))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, F9739C01C3FB65CA);
		}
	};
}
