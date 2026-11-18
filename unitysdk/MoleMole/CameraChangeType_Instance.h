#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraChangeType.h"

#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5ADAD0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_Instance_TypeDefinitionIndex = 91201;

	class CameraChangeType_Instance : public ::MoleMole::CameraChangeType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE__CTOR_OFFSET))(this);
		}
	};
}
