#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define SCENENLIGHTMANAGER_TRANSFORMEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE966730)
#define SCENENLIGHTMANAGER_TRANSFORMEXPORTDATA_KIFAGHIPEDN_OFFSET UNITYSDK_OFFSET(0xE9667F0)

namespace ScenenLightManager
{
	class TransformExportData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 pos; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x2C
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TRANSFORMEXPORTDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIFAGHIPEDN(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TRANSFORMEXPORTDATA_KIFAGHIPEDN_OFFSET))(this, a1);
		}

	};
}
