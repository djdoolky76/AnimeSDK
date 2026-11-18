#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HBKMDPMDIIE_IFFOOJLDLCO_1_OFFSET UNITYSDK_OFFSET(0x16F22E30)
#define HBKMDPMDIIE_IFFOOJLDLCO_2_OFFSET UNITYSDK_OFFSET(0x16F22F50)
#define HBKMDPMDIIE_IFFOOJLDLCO_OFFSET UNITYSDK_OFFSET(0x16F22CF0)
#define HBKMDPMDIIE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F22CE0)

inline static constexpr unsigned int HBKMDPMDIIE_TypeDefinitionIndex = 57442;

class HBKMDPMDIIE : public ::System::Object
{
public:
	::UnityEngine::Vector3 CJEJAHANMFB; // 0x10
	::UnityEngine::Vector3 MKFJHAMCDEF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKMDPMDIIE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 IFFOOJLDLCO(::UnityEngine::Vector3 PFBGAKLFGPI, ::UnityEngine::Vector3 FCNPOKNKMOD, ::System::Single GLJHHHKILHO, ::System::Single ENONGEJAKOP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HBKMDPMDIIE_IFFOOJLDLCO_OFFSET))(this, PFBGAKLFGPI, FCNPOKNKMOD, GLJHHHKILHO, ENONGEJAKOP);
	}

	::UnityEngine::Vector3 IFFOOJLDLCO_1(::UnityEngine::Vector3 PFBGAKLFGPI, ::UnityEngine::Vector3 FCNPOKNKMOD, ::System::Single GLJHHHKILHO)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HBKMDPMDIIE_IFFOOJLDLCO_1_OFFSET))(this, PFBGAKLFGPI, FCNPOKNKMOD, GLJHHHKILHO);
	}

	::UnityEngine::Vector3 IFFOOJLDLCO_2(::UnityEngine::Vector3 FCNPOKNKMOD, ::System::Single GLJHHHKILHO)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HBKMDPMDIIE_IFFOOJLDLCO_2_OFFSET))(this, FCNPOKNKMOD, GLJHHHKILHO);
	}
};
