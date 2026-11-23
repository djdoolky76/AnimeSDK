#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8F601FB69ED2B23.h"
#include "unitysdk/UnityEngine/EEB516C3073B704E.h"

#define F2967900C075C0E5_A68D2DE1A37367E9_OFFSET UNITYSDK_OFFSET(0x23C5A70)
#define F2967900C075C0E5_F07D584396EC9D0A_OFFSET UNITYSDK_OFFSET(0x23C5860)
#define F2967900C075C0E5_F82AB6C123C604E7_OFFSET UNITYSDK_OFFSET(0x23C5A10)
#define F2967900C075C0E5__CTOR_OFFSET UNITYSDK_OFFSET(0x23C5B60)

inline static constexpr unsigned int F2967900C075C0E5_TypeDefinitionIndex = 3780;

class F2967900C075C0E5 : public ::A8F601FB69ED2B23
{
public:
	static ::UnityEngine::EEB516C3073B704E* StaticGet_A043F95B96B3FBE5()
	{
		return (::UnityEngine::EEB516C3073B704E*)Il2CppClass::FromTypeDefinitionIndex(F2967900C075C0E5_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::EEB516C3073B704E* StaticGet_E3D125615C7B7F66()
	{
		return (::UnityEngine::EEB516C3073B704E*)Il2CppClass::FromTypeDefinitionIndex(F2967900C075C0E5_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::UnityEngine::EEB516C3073B704E* StaticGet_AA9A6CCD5809E427()
	{
		return (::UnityEngine::EEB516C3073B704E*)Il2CppClass::FromTypeDefinitionIndex(F2967900C075C0E5_TypeDefinitionIndex)->GetStaticField(0x20);
	}

	::System::Void F82AB6C123C604E7(::System::Boolean A3E26351629B9EF8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F2967900C075C0E5_F82AB6C123C604E7_OFFSET))(this, A3E26351629B9EF8);
	}

	static ::System::Void F07D584396EC9D0A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F2967900C075C0E5_F07D584396EC9D0A_OFFSET))();
	}

	::System::Boolean A68D2DE1A37367E9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F2967900C075C0E5_A68D2DE1A37367E9_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2967900C075C0E5__CTOR_OFFSET))(this);
	}
};
