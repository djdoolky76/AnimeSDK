#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/DefaultDynamicObjectLayer.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENEMARK_BASESCENEDYNAMICOBJECTLAYER_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13F0FD40)
#define MOLEMOLE_SCENEMARK_BASESCENEDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0FC70)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int BaseSceneDynamicObjectLayer_TypeDefinitionIndex = 53393;

	class BaseSceneDynamicObjectLayer : public ::MoleMole::SceneMark::DefaultDynamicObjectLayer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_BASESCENEDYNAMICOBJECTLAYER__CTOR_OFFSET))(this);
		}

		::System::Void CNHBDOMKKDE(::UnityEngine::GameObject* HEJBGALPLOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_BASESCENEDYNAMICOBJECTLAYER_CNHBDOMKKDE_OFFSET))(this, HEJBGALPLOA);
		}
	};
}
