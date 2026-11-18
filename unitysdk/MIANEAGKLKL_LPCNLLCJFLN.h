#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIANEAGKLKL_LPCNLLCJFLN__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE7360)

inline static constexpr unsigned int MIANEAGKLKL_LPCNLLCJFLN_TypeDefinitionIndex = 76128;

class MIANEAGKLKL_LPCNLLCJFLN : public ::System::Object
{
public:
	::Unity::Jobs::JobHandle BJOOLNIDBJH; // 0x10
	::System::Boolean CKMEDGAGAND; // 0x20
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 ADDCBFJBHNC; // 0x24
	::UnityEngine::Vector3 FCNPOKNKMOD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANEAGKLKL_LPCNLLCJFLN__CTOR_OFFSET))(this);
	}
};
