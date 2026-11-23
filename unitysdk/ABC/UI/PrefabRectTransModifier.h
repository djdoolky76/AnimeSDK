#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define ABC_UI_PREFABRECTTRANSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x2238DA0)

namespace ABC::UI
{
	inline static constexpr unsigned int PrefabRectTransModifier_TypeDefinitionIndex = 9153;

	class PrefabRectTransModifier : public ::System::Object
	{
	public:
		::System::Boolean SetSize; // 0x10
		::System::Boolean SetScale; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 Size; // 0x14
		::UnityEngine::Vector2 Scale; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_PREFABRECTTRANSMODIFIER__CTOR_OFFSET))(this);
		}
	};
}
