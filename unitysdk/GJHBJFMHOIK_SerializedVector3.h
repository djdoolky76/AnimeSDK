#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GJHBJFMHOIK_SERIALIZEDVECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A02950)
#define GJHBJFMHOIK_SERIALIZEDVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x18A02940)

inline static constexpr unsigned int GJHBJFMHOIK_SerializedVector3_TypeDefinitionIndex = 60947;

class GJHBJFMHOIK_SerializedVector3 : public ::System::Object
{
public:
	::System::Single x; // 0x10
	::System::Single y; // 0x14
	::System::Single z; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHBJFMHOIK_SERIALIZEDVECTOR3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 IJPANKCOLCP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GJHBJFMHOIK_SERIALIZEDVECTOR3__CTOR_1_OFFSET))(this, IJPANKCOLCP);
	}
};
