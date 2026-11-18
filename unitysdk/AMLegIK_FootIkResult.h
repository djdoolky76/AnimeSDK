#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int AMLegIK_FootIkResult_TypeDefinitionIndex = 57185;

struct alignas(4) AMLegIK_FootIkResult
{
	::UnityEngine::Vector3 ordinaryHitPos; // 0x10
	::UnityEngine::Vector3 pikHitPos; // 0x1C
	::UnityEngine::Vector3 finalHitPos; // 0x28
	::UnityEngine::Vector3 finalHitNormal; // 0x34
	::UnityEngine::Vector3 targetPos; // 0x40
	::UnityEngine::Quaternion targetRot; // 0x4C
};
