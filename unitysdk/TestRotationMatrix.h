#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define TESTROTATIONMATRIX_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D647E60)
#define TESTROTATIONMATRIX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D648770)
#define TESTROTATIONMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D648720)

inline static constexpr unsigned int TestRotationMatrix_TypeDefinitionIndex = 48465;

class TestRotationMatrix : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_WorldToPlaneSpace2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TestRotationMatrix_TypeDefinitionIndex)->GetStaticField(0x11690);
	}
	static ::System::Int32* StaticGet_WorldToPlaneSpace()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TestRotationMatrix_TypeDefinitionIndex)->GetStaticField(0x11694);
	}
	::UnityEngine::GameObject* characterGO; // 0x18
	::UnityEngine::GameObject* planeGO; // 0x20
	::UnityEngine::GameObject* planeGO2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTROTATIONMATRIX__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TESTROTATIONMATRIX__CCTOR_OFFSET))();
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTROTATIONMATRIX_UPDATE_OFFSET))(this);
	}
};
