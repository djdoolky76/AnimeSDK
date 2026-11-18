#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/DefaultDynamicObjectLayer.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENEMARK_DYNAMICSCENEDYNAMICOBJECTLAYER_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1249CDB0)
#define MOLEMOLE_SCENEMARK_DYNAMICSCENEDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1249CBD0)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int DynamicSceneDynamicObjectLayer_TypeDefinitionIndex = 76700;

	class DynamicSceneDynamicObjectLayer : public ::MoleMole::SceneMark::DefaultDynamicObjectLayer
	{
	public:
		::System::Void _ctor(::System::String* HIAIKHDFCLN, ::UnityEngine::GameObject* PDACHPLBKIE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICSCENEDYNAMICOBJECTLAYER__CTOR_OFFSET))(this, HIAIKHDFCLN, PDACHPLBKIE);
		}

		::System::Void CNHBDOMKKDE(::UnityEngine::GameObject* PDACHPLBKIE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICSCENEDYNAMICOBJECTLAYER_CNHBDOMKKDE_OFFSET))(this, PDACHPLBKIE);
		}
	};
}
