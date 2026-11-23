#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class B178A0A3F2F8BBBF; }

#define A5102EFE9F810B20__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DB94E0)

inline static constexpr unsigned int A5102EFE9F810B20_TypeDefinitionIndex = 21169;

class A5102EFE9F810B20 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_A6DBC1FA6E90AB77()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(A5102EFE9F810B20_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::UnityEngine::B178A0A3F2F8BBBF*>** StaticGet_BBD8EDCEEBC2C5AA()
	{
		return (::Il2CppArray<::UnityEngine::B178A0A3F2F8BBBF*>**)Il2CppClass::FromTypeDefinitionIndex(A5102EFE9F810B20_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A5102EFE9F810B20__CCTOR_OFFSET))();
	}
};
