#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/A7F2C5994AC126B4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_RENDER_RENDEROBJECTTYPEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Render
{
	inline static constexpr unsigned int RenderObjectTypeBehaviour_TypeDefinitionIndex = 4243;

	class RenderObjectTypeBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::B88870E9FB4B8C1A::A7F2C5994AC126B4 RenderType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_RENDER_RENDEROBJECTTYPEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
