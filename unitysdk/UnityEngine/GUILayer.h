#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_GUILAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x20978A60)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayer_TypeDefinitionIndex = 6694;

	class GUILayer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYER_CTOR_OFFSET))(this);
		}

	};
}
