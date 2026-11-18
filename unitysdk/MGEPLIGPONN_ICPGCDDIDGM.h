#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NJADBOGPHMC;

#define MGEPLIGPONN_ICPGCDDIDGM_GIBDJDDKCJB_OFFSET UNITYSDK_OFFSET(0x16C7F240)
#define MGEPLIGPONN_ICPGCDDIDGM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7F230)

inline static constexpr unsigned int MGEPLIGPONN_ICPGCDDIDGM_TypeDefinitionIndex = 74863;

class MGEPLIGPONN_ICPGCDDIDGM : public ::System::Object
{
public:
	::UnityEngine::Vector3 AKAGDEFAGJA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEPLIGPONN_ICPGCDDIDGM__CTOR_OFFSET))(this);
	}

	::System::Void GIBDJDDKCJB(::NJADBOGPHMC* JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::NJADBOGPHMC*))((::PBYTE)hIl2Cpp + MGEPLIGPONN_ICPGCDDIDGM_GIBDJDDKCJB_OFFSET))(this, JNDDJMAHNAI);
	}
};
