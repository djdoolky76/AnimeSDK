#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_RIBBONCONTROLPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x14B16720)

namespace MoleMole
{
	inline static constexpr unsigned int RibbonControlPoint_TypeDefinitionIndex = 69331;

	class RibbonControlPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::System::Single width; // 0x1C
		::System::Single yawAngle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIBBONCONTROLPOINT__CTOR_OFFSET))(this);
		}
	};
}
