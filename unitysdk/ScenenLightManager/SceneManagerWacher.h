#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MEIGMBOLDOF;

#define SCENENLIGHTMANAGER_SCENEMANAGERWACHER_CTOR_OFFSET UNITYSDK_OFFSET(0xE966720)
#define SCENENLIGHTMANAGER_SCENEMANAGERWACHER_GET_SLIGHT_OFFSET UNITYSDK_OFFSET(0xE966710)

namespace ScenenLightManager
{
	inline static constexpr unsigned int SceneManagerWacher_TypeDefinitionIndex = 49185;

	class SceneManagerWacher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MEIGMBOLDOF* ODEHJOOPKPJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGERWACHER_CTOR_OFFSET))(this);
		}

		::MEIGMBOLDOF* get_Slight()
		{
			return ((::MEIGMBOLDOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGERWACHER_GET_SLIGHT_OFFSET))(this);
		}

	};
}
