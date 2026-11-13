#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONODEBUGSPINEANIMRUNTIMEPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x14021E10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDebugSpineAnimRuntimePreview_TypeDefinitionIndex = 70977;

	class MonoDebugSpineAnimRuntimePreview : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODEBUGSPINEANIMRUNTIMEPREVIEW_CTOR_OFFSET))(this);
		}

	};
}
