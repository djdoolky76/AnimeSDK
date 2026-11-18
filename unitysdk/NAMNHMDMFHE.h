#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define NAMNHMDMFHE_BPAMOIHHPGJ_OFFSET UNITYSDK_OFFSET(0x38CB40)
#define NAMNHMDMFHE_CEDEGGFJOHA_OFFSET UNITYSDK_OFFSET(0x7A2B00)
#define NAMNHMDMFHE_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x7A2A70)
#define NAMNHMDMFHE__CTOR_OFFSET UNITYSDK_OFFSET(0x7A2A20)

inline static constexpr unsigned int NAMNHMDMFHE_TypeDefinitionIndex = 54434;

struct alignas(4) NAMNHMDMFHE
{
	::Foundation::Unreal::FTransform3D _PJGMBCAFEID_k__BackingField; // 0x10
	::UnityEngine::Bounds _ECPNGFKCNEO_k__BackingField; // 0x38

	::System::Void _ctor(::Foundation::Unreal::FTransform3D NHKIHGLELGE, ::UnityEngine::Bounds GLGPPONOOOG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform3D, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + NAMNHMDMFHE__CTOR_OFFSET))(this, NHKIHGLELGE, GLGPPONOOOG);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMNHMDMFHE_JDAPDDEOCEA_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform3D BPAMOIHHPGJ()
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMNHMDMFHE_BPAMOIHHPGJ_OFFSET))(this);
	}

	::UnityEngine::Bounds CEDEGGFJOHA()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMNHMDMFHE_CEDEGGFJOHA_OFFSET))(this);
	}
};
