#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F7026CC0C8DB127A.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputProcessor_A438D535F39C67BD.h"

namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GETVALUETYPEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x3F509C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GET_CACHINGPOLICY_OFFSET UNITYSDK_OFFSET(0x168A070)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputProcessor_TypeDefinitionIndex = 14235;

	class InputProcessor : public ::System::Object
	{
	public:
		static ::F7026CC0C8DB127A* StaticGet_s_Processors()
		{
			return (::F7026CC0C8DB127A*)Il2CppClass::FromTypeDefinitionIndex(InputProcessor_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::UnityEngine::InputSystem::InputProcessor_A438D535F39C67BD get_cachingPolicy()
		{
			return ((::UnityEngine::InputSystem::InputProcessor_A438D535F39C67BD(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GET_CACHINGPOLICY_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Type* GetValueTypeFromType(::System::Type* E39A124DED1C4721)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GETVALUETYPEFROMTYPE_OFFSET))(E39A124DED1C4721);
		}
	};
}
