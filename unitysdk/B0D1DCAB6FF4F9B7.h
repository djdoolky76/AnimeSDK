#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A88F428B6EF6E04B;
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class Material; }

#define B0D1DCAB6FF4F9B7_E0D838E49E980610_1_OFFSET UNITYSDK_OFFSET(0x1EE55A0)
#define B0D1DCAB6FF4F9B7_E0D838E49E980610_OFFSET UNITYSDK_OFFSET(0x1EE5690)
#define B0D1DCAB6FF4F9B7_E4CAFC3A99FA50C4_OFFSET UNITYSDK_OFFSET(0x1EE5820)
#define B0D1DCAB6FF4F9B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE5C80)

inline static constexpr unsigned int B0D1DCAB6FF4F9B7_TypeDefinitionIndex = 7412;

class B0D1DCAB6FF4F9B7 : public ::System::Object
{
public:
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_EB24E8FF7856337A()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(B0D1DCAB6FF4F9B7_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void E4CAFC3A99FA50C4(::A88F428B6EF6E04B* B4BE79FDE44A1EB2, ::UnityEngine::Material* A54EF53C742D300D)
	{
		return ((::System::Void(*)(::A88F428B6EF6E04B*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + B0D1DCAB6FF4F9B7_E4CAFC3A99FA50C4_OFFSET))(B4BE79FDE44A1EB2, A54EF53C742D300D);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B0D1DCAB6FF4F9B7__CCTOR_OFFSET))();
	}

	static ::System::Void E0D838E49E980610(::System::Boolean A3E26351629B9EF8)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + B0D1DCAB6FF4F9B7_E0D838E49E980610_OFFSET))(A3E26351629B9EF8);
	}

	static ::System::Void E0D838E49E980610_1(::UnityEngine::AnimageComponent* B2B1A0C9BD24DEAB, ::System::Boolean A3E26351629B9EF8)
	{
		return ((::System::Void(*)(::UnityEngine::AnimageComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + B0D1DCAB6FF4F9B7_E0D838E49E980610_1_OFFSET))(B2B1A0C9BD24DEAB, A3E26351629B9EF8);
	}
};
