#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Renderer; }

#define UNITYENGINE_E46128E11FD26499__CTOR_OFFSET UNITYSDK_OFFSET(0x412F200)

namespace UnityEngine
{
	inline static constexpr unsigned int E46128E11FD26499_TypeDefinitionIndex = 17147;

	struct alignas(8) E46128E11FD26499
	{
		::System::Single E7CB929225309AC9; // 0x10
		::System::Single EC60F884B8804E98; // 0x14
		::Il2CppArray<::UnityEngine::Renderer*>* BBFD4DEE2C79D175; // 0x18

		::System::Void _ctor(::System::Single BAE88F1A90FE28B9, ::Il2CppArray<::UnityEngine::Renderer*>* EEF46053DCE989F8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_E46128E11FD26499__CTOR_OFFSET))(this, BAE88F1A90FE28B9, EEF46053DCE989F8);
		}
	};
}
