#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define OIBDKPJMDLO_OHINKKNKFFO_GAACOFHOCIL_OFFSET UNITYSDK_OFFSET(0x15FE2A20)
#define OIBDKPJMDLO_OHINKKNKFFO_PBMEHLLLHJL_OFFSET UNITYSDK_OFFSET(0x15FE2AB0)
#define OIBDKPJMDLO_OHINKKNKFFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE2A10)

inline static constexpr unsigned int OIBDKPJMDLO_OHINKKNKFFO_TypeDefinitionIndex = 52478;

class OIBDKPJMDLO_OHINKKNKFFO : public ::System::Object
{
public:
	::UnityEngine::Material* EBIDGDBLDPI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_OHINKKNKFFO__CTOR_OFFSET))(this);
	}

	::System::Void GAACOFHOCIL(::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_OHINKKNKFFO_GAACOFHOCIL_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Single PBMEHLLLHJL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_OHINKKNKFFO_PBMEHLLLHJL_OFFSET))(this);
	}
};
