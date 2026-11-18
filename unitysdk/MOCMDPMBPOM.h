#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int MOCMDPMBPOM_TypeDefinitionIndex = 41072;

struct alignas(8) MOCMDPMBPOM
{
	::Foundation::Variable_1<::UnityEngine::Vector3> HCENDCJPLID; // 0x10
	::System::Byte _padding0[0x18];
	::Foundation::Variable_1<::UnityEngine::Quaternion> INKOPLGDKKJ; // 0x30
	::System::Byte _padding1[0x20];
	::UnityEngine::Vector3 NIDGBIDAJAP; // 0x58
	::UnityEngine::Quaternion OMDKCNBAKNB; // 0x64
};
