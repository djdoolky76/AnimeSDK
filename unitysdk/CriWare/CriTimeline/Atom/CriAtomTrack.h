#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTRACK_EF0160F5FC63B26D_OFFSET UNITYSDK_OFFSET(0x2AA2110)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x2AA2550)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomTrack_TypeDefinitionIndex = 19154;

	class CriAtomTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::String* m_AisacControls; // 0xA0
		::System::Boolean m_StopOnWrapping; // 0xA8
		::System::Boolean m_StopAtGraphEnd; // 0xA9
		::System::Boolean m_ApplyPlayableSpeed; // 0xAA
		::System::Boolean m_CheckPosWithinClip; // 0xAB

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTRACK__CTOR_OFFSET))(this);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 EF0160F5FC63B26D(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809, ::System::Int32 E0526D776D4634F5)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTRACK_EF0160F5FC63B26D_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809, E0526D776D4634F5);
		}
	};
}
