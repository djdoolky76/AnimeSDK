#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_CTOR_OFFSET UNITYSDK_OFFSET(0xE8BFC20)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_GET_CENTERPOINT_OFFSET UNITYSDK_OFFSET(0xE8BF450)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_GET_WINDOWSIZE_OFFSET UNITYSDK_OFFSET(0xE8BF660)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_PNLHNKDCEOA_OFFSET UNITYSDK_OFFSET(0xE8BEC00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowControlCenterAndSize_TypeDefinitionIndex = 47896;

	class CRPCameraSmallWindowControlCenterAndSize : public ::System::Object
	{
	public:
		::System::Single CenterX; // 0x10
		::System::Single CenterY; // 0x14
		::System::Single Width; // 0x18
		::System::Single Height; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CenterPoint()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_GET_CENTERPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_WindowSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_GET_WINDOWSIZE_OFFSET))(this);
		}

		::System::Boolean PNLHNKDCEOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLCENTERANDSIZE_PNLHNKDCEOA_OFFSET))(this);
		}

	};
}
