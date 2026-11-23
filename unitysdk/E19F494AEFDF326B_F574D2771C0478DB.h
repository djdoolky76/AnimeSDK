#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::InputSystem { class InputDevice; }

inline static constexpr unsigned int E19F494AEFDF326B_F574D2771C0478DB_TypeDefinitionIndex = 14594;

template <typename T>
class E19F494AEFDF326B_F574D2771C0478DB : public ::System::Object
{
public:
	static ::System::Object** StaticGet_AA32F971AB02398B()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(E19F494AEFDF326B_F574D2771C0478DB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>** StaticGet_AEEE115D09C403D5()
	{
		return (::System::Func_1<::UnityEngine::InputSystem::InputDevice*>**)Il2CppClass::FromTypeDefinitionIndex(E19F494AEFDF326B_F574D2771C0478DB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
