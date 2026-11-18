#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define HJDGNDLNJFB_COMPARE_OFFSET UNITYSDK_OFFSET(0x17E4DC10)
#define HJDGNDLNJFB__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4DD00)

inline static constexpr unsigned int HJDGNDLNJFB_TypeDefinitionIndex = 58231;

class HJDGNDLNJFB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDGNDLNJFB__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::UnityEngine::RaycastHit HAAEBCOBKFF, ::UnityEngine::RaycastHit BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + HJDGNDLNJFB_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
