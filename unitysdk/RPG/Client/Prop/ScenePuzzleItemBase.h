#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_SCENEPUZZLEITEMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xE819190)
#define RPG_CLIENT_PROP_SCENEPUZZLEITEMBASE_ONSELECT_OFFSET UNITYSDK_OFFSET(0xE819110)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ScenePuzzleItemBase_TypeDefinitionIndex = 81627;

	class ScenePuzzleItemBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* ClickCollider; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEITEMBASE_CTOR_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEITEMBASE_ONSELECT_OFFSET))(this);
		}

	};
}
