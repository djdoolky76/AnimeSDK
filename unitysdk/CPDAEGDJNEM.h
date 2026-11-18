#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CPDAEGDJNEM_FDJHEBHLJLD_OFFSET UNITYSDK_OFFSET(0x147B60A0)
#define CPDAEGDJNEM_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x73C480)
#define CPDAEGDJNEM__CTOR_OFFSET UNITYSDK_OFFSET(0x3CAAD0)

inline static constexpr unsigned int CPDAEGDJNEM_TypeDefinitionIndex = 81037;

struct alignas(4) CPDAEGDJNEM
{
	::UnityEngine::Vector3 EPFNAHDACLG; // 0x10
	::UnityEngine::Vector3 DEIPJONPFNG; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3 AGHNEGFHKMC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CPDAEGDJNEM__CTOR_OFFSET))(this, OPMPKFEHOBM, AGHNEGFHKMC);
	}

	/*
	static ::CPDAEGDJNEM FDJHEBHLJLD()
	{
		return ((::CPDAEGDJNEM(*)())((::PBYTE)hIl2Cpp + CPDAEGDJNEM_FDJHEBHLJLD_OFFSET))();
	}
	*/

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPDAEGDJNEM_JDAPDDEOCEA_OFFSET))(this);
	}
};
