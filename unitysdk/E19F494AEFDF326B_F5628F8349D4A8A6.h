#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define E19F494AEFDF326B_F5628F8349D4A8A6_AA8872A66BA7BE40_OFFSET UNITYSDK_OFFSET(0x40270B0)
#define E19F494AEFDF326B_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x4027110)
#define E19F494AEFDF326B_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E19F494AEFDF326B_F5628F8349D4A8A6_TypeDefinitionIndex = 14593;

class E19F494AEFDF326B_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E19F494AEFDF326B_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E19F494AEFDF326B_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E19F494AEFDF326B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::System::String*>** StaticGet_EF9D33134A9CB83D()
	{
		return (::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(E19F494AEFDF326B_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E19F494AEFDF326B_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E19F494AEFDF326B_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* AA8872A66BA7BE40(::UnityEngine::InputSystem::InputDevice* BB8C609F76620E45)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + E19F494AEFDF326B_F5628F8349D4A8A6_AA8872A66BA7BE40_OFFSET))(this, BB8C609F76620E45);
	}
};
