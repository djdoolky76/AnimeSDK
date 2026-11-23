#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class PhysicMaterial; }

#define RAYFIRE_RFMATERIAL_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x29A6650)
#define RAYFIRE_RFMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x29A65B0)

namespace RayFire
{
	inline static constexpr unsigned int RFMaterial_TypeDefinitionIndex = 15571;

	class RFMaterial : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Boolean destructible; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 solidity; // 0x1C
		::System::Single density; // 0x20
		::System::Single drag; // 0x24
		::System::Single angularDrag; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::PhysicMaterial* material; // 0x30
		::System::Single dynamicFriction; // 0x38
		::System::Single staticFriction; // 0x3C
		::System::Single bounciness; // 0x40

		::System::Void _ctor(::System::String* A963FD20EE294E1C, ::System::Single BE9FF64BCDA54BE9, ::System::Single E9CB26BD59A6B3C1, ::System::Single F8AC910CEE3DF9E2, ::System::Int32 FC6BB7BCDB253B2C, ::System::Boolean F44311721FB473D1, ::System::Single F371431812A7339A, ::System::Single A017CD5F62E39AC4, ::System::Single FA1265F9AE213D46)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIAL__CTOR_OFFSET))(this, A963FD20EE294E1C, BE9FF64BCDA54BE9, E9CB26BD59A6B3C1, F8AC910CEE3DF9E2, FC6BB7BCDB253B2C, F44311721FB473D1, F371431812A7339A, A017CD5F62E39AC4, FA1265F9AE213D46);
		}

		::UnityEngine::PhysicMaterial* get_Material()
		{
			return ((::UnityEngine::PhysicMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIAL_GET_MATERIAL_OFFSET))(this);
		}
	};
}
