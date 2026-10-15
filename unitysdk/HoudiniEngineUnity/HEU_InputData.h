#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INPUTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B92BCA0)

namespace HoudiniEngineUnity
{
	class HEU_InputData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _inputObject; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTDATA_CTOR_OFFSET))(this);
		}

	};
}
