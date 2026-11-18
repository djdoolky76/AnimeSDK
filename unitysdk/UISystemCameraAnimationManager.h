#pragma once
#include "unitysdk/unitysdk.h"

class DDBCJHCAKFE;
namespace UnityEngine { class Camera; }

#define UISYSTEMCAMERAANIMATIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D648850)
#define UISYSTEMCAMERAANIMATIONMANAGER_GETCAMERAANIMATIONDRIVER_OFFSET UNITYSDK_OFFSET(0x1D6487C0)
#define UISYSTEMCAMERAANIMATIONMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1D648890)
#define UISYSTEMCAMERAANIMATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6488D0)

inline static constexpr unsigned int UISystemCameraAnimationManager_TypeDefinitionIndex = 74759;

class UISystemCameraAnimationManager
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISYSTEMCAMERAANIMATIONMANAGER__CTOR_OFFSET))(this);
	}

	::DDBCJHCAKFE* GetCameraAnimationDriver(::UnityEngine::Camera* ui3DCamera)
	{
		return ((::DDBCJHCAKFE*(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UISYSTEMCAMERAANIMATIONMANAGER_GETCAMERAANIMATIONDRIVER_OFFSET))(this, ui3DCamera);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISYSTEMCAMERAANIMATIONMANAGER_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISYSTEMCAMERAANIMATIONMANAGER_ONCREATE_OFFSET))(this);
	}
};
