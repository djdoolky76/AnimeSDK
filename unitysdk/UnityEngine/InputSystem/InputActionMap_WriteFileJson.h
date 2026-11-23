#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEFILEJSON_FROMMAPS_OFFSET UNITYSDK_OFFSET(0x3F5C030)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_WriteFileJson_TypeDefinitionIndex = 14165;

	struct alignas(8) InputActionMap_WriteFileJson
	{
		::Il2CppArray<::System::Object*>* maps; // 0x10

		/*
		static ::UnityEngine::InputSystem::InputActionMap_WriteFileJson FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>* F3F60BE6B775CEA4)
		{
			return ((::UnityEngine::InputSystem::InputActionMap_WriteFileJson(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_WRITEFILEJSON_FROMMAPS_OFFSET))(F3F60BE6B775CEA4);
		}
		*/
	};
}
