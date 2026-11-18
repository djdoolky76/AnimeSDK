#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/CGLAIBPMJFB.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYATTACHPOINTS_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x18B7BCA0)
#define MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYATTACHPOINTS__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7BC90)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int EntityCameraViewConfigByAttachPoints_TypeDefinitionIndex = 81941;

	class EntityCameraViewConfigByAttachPoints : public ::System::Object
	{
	public:
		::System::String* head; // 0x10
		::System::String* leftHand; // 0x18
		::System::String* rightHand; // 0x20
		::System::String* leftFoot; // 0x28
		::System::String* rightFoot; // 0x30
		::System::String* middlePoint; // 0x38
		::UnityEngine::Vector3 headExtension; // 0x40
		::System::Single verticalRatio; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYATTACHPOINTS__CTOR_OFFSET))(this);
		}

		::System::Void PKOGNPKCHHE(::System::UInt32 BKLGNCBNEGM, ::CGLAIBPMJFB& DENJNGAAIME)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::CGLAIBPMJFB&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYATTACHPOINTS_PKOGNPKCHHE_OFFSET))(this, BKLGNCBNEGM, DENJNGAAIME);
		}
	};
}
