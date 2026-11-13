#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_BLJLIHCPEAK_OFFSET UNITYSDK_OFFSET(0x1E3E3570)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E4A00)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_ACTIVECRP_OFFSET UNITYSDK_OFFSET(0x1E3E33D0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_CENTERPOINT_OFFSET UNITYSDK_OFFSET(0x1E3E2E80)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_WINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x1E3E31A0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_PNLHNKDCEOA_OFFSET UNITYSDK_OFFSET(0x1E3E2630)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowSyncUIRect_TypeDefinitionIndex = 48928;

	class CRPCameraSmallWindowSyncUIRect : public ::System::Object
	{
	public:
		::System::String* UIControllerName; // 0x10
		::RPG::Client::UIController* _UIController; // 0x18
		::UnityEngine::RectTransform* _RectTransform; // 0x20
		::UnityEngine::Rect _Rect; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CenterPoint()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_CENTERPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_WindowSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_WINDOWSIZE_OFFSET))(this);
		}

		::System::Boolean get_ActiveCRP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_GET_ACTIVECRP_OFFSET))(this);
		}

		::System::Boolean PNLHNKDCEOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_PNLHNKDCEOA_OFFSET))(this);
		}

		::System::Void BLJLIHCPEAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWSYNCUIRECT_BLJLIHCPEAK_OFFSET))(this);
		}

	};
}
