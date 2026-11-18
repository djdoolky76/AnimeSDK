#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERACHANGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x13047B40)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_TypeDefinitionIndex = 38405;

	class CameraChangeType : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE__CTOR_OFFSET))(this);
		}
	};
}
