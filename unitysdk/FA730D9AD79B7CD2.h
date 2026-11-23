#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"

class AdditionalCameraData;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define FA730D9AD79B7CD2_EA0326B5CF9362CC_OFFSET UNITYSDK_OFFSET(0x2802530)
#define FA730D9AD79B7CD2_FB6F987E20FDA2C6_OFFSET UNITYSDK_OFFSET(0x28024A0)

inline static constexpr unsigned int FA730D9AD79B7CD2_TypeDefinitionIndex = 16828;

class FA730D9AD79B7CD2 : public ::System::Object
{
public:
	static ::AdditionalCameraData* FB6F987E20FDA2C6(::UnityEngine::Camera* E929054BCEC2CE82)
	{
		return ((::AdditionalCameraData*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + FA730D9AD79B7CD2_FB6F987E20FDA2C6_OFFSET))(E929054BCEC2CE82);
	}

	static ::System::Void EA0326B5CF9362CC(::UnityEngine::Camera* E929054BCEC2CE82, ::AdditionalCameraData* A54A3EA67F655834, ::UnityEngine::B8AC70DD96553B07& ED6A79BC42F10D49, ::UnityEngine::Transform*& E3B41EAA33A08C46)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*, ::AdditionalCameraData*, ::UnityEngine::B8AC70DD96553B07&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + FA730D9AD79B7CD2_EA0326B5CF9362CC_OFFSET))(E929054BCEC2CE82, A54A3EA67F655834, ED6A79BC42F10D49, E3B41EAA33A08C46);
	}
};
